// 844. Backspace String Compare

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;

        for(const auto e : s){
            if(e != '#')
                s1.push(e);
            else if (!s1.empty())
                s1.pop();    
        }
        for(const auto e : t){
            if(e != '#')
                s2.push(e);
            else if (!s2.empty())
                s2.pop();    
        }
        string a1, a2;
        while (!s1.empty()) {
            a1 += s1.top();
            s1.pop();
        }
        while (!s2.empty()){
            a2 += s2.top();
            s2.pop();
        }
        return a1==a2;
    }
};