//2000 Reverse Prefix of Word
class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        string ans = "";
        int i=0;

        while (i<word.size()){
            st.push(word[i]);
            if(word[i]==ch)
            break;
           i++; 
        }
        if(i==word.size())
        return word;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        for(int j = i+1; j< word.size(); j++){
            ans += word[j];
        }
        return ans;
    }
};