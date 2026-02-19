//13. Roman to Integer
  int romanToInt(string s) {
        unordered_map<char, int> map;
        int sz = s.size();
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        
        int ans = 0;
        for(int i = 0; i < sz - 1; i++)
        {
            if(map[s[i]] < map[s[i+1]])
            {
                ans -= map[s[i]];
            }
            else
            {
                ans += map[s[i]];
            }
        }
            return ans + map[s[sz - 1]];
    }