class Solution {
public:
    vector<string> split (string str, char token) {
        string s = "";
        vector<string> result;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] != token) {
                s += str[i];
            }
            else {
                result.push_back (s);
                s = "";
            }
        }
        result.push_back(s);
        return result;
    }

    int compareVersion(string version1, string version2) {
        vector<string> s1 = split(version1, '.');
        vector<string> s2 = split(version2, '.');
        int i = 0, j = 0;
        while (i < s1.size() && j < s2.size()) {
            int x = stoi(s1[i]), y = stoi(s2[j]);
            cout << "x = " << x << ", y = " << y << endl;
            if (x < y)
                return -1;
            else if (x > y)
                return 1;
            i++;
            j++;
        }
        
        while(i < s1.size()) {
            if (stoi(s1[i]) != 0)
                return 1;
            i++;
        }

        while(j < s2.size()) {
            if (stoi(s2[j]) != 0)
                return -1;
            j++;
        }
        return 0;
    }
};
