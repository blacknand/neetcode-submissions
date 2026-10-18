class Solution {
private:
    vector<string> tokens;
public:
    string encode(vector<string>& strs) {
        tokens = strs;
        string res;
        for (string s : strs)
            res += s;
        return res;
    }

    vector<string> decode(string s) {
        return tokens;
    }
};
