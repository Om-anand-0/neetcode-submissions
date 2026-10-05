class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length();
        int n = t.length();

        if (m != n) return false;

        unordered_map<char,int>freq;

        for(int i = 0; i < m; i++){
            freq[s[i]] += 1;
        }
        for(int i = 0; i < n; i++){
            freq[t[i]] -= 1;
        }
        for(auto& i : freq){
            if(i.second != 0){
                return false;
            }
        }
        return true;
    }
};
