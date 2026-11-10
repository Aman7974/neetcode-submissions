class Solution {
public:
    bool isAnagram(string s, string t) {
        //edge case/cornor case
        if (s.length() != t.length()) {
            return false;
        }

        map<char, int> mp1;
        map<char, int> mp2;

        for (int i = 0; i < s.length(); i++) {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        return mp1 == mp2;
    }
};
