class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq_N[26] = {0};
        int freq_M[26] = {0};
        for(char ch : ransomNote)
            freq_N[ch - 'a']++;

        for(char ch : magazine)
            freq_M[ch - 'a']++;

        for(int i = 0; i < 26; i++) {
            if(freq_M[i] < freq_N[i])
                return false;
        }
        return true;
    }
};