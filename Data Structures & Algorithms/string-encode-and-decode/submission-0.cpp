class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (const string& s: strs){
            result += to_string(s.size()) + "/" + s;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.size()){
            int slash = s.find('/',i);
            int length = stoi(s.substr(i, slash-i));
            string str = s.substr(slash+1, length);
            result.push_back(str);
            i = slash+1+length;
        }
        return result;
    }
};
