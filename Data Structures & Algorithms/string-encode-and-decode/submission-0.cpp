class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

    for (string s : strs) {

        ans += to_string(s.size()) + "#" + s;

    }

    return ans;
    }

    vector<string> decode(string s) {
         vector<string> ans;

        int i = 0;

        while (i < s.size()) {

            int j = i;

            // Find the separator '#'
            while (s[j] != '#') {
                j++;
            }

            // Extract the length
            int len = stoi(s.substr(i, j - i));

            // Extract the original string
            string word = s.substr(j + 1, len);

            ans.push_back(word);

            // Move to the next encoded string
            i = j + 1 + len;
        }

        return ans;
    }
};
