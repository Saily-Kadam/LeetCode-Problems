class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int sz = profits.size();
        vector<pair<int,int>> projects(sz);
         for(int i = 0; i < sz; i++) {
            projects[i] = {capital[i], profits[i]};
        }
        sort(projects.begin(), projects.end());
        priority_queue<int> maxHeap;
        int p = 0;
        for(int i = 0; i < k; i++) {
            while(p < sz && projects[p].first <= w) {
                maxHeap.push(projects[p].second);
                p++;
            }
            if(maxHeap.empty())
                break;
            w += maxHeap.top();
            maxHeap.pop();
        }
        return w;
    }
};