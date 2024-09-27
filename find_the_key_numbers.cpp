class Solution {
public:
    string copyOfZeroes (int x) {
        string result = "";
        for (int i = 0; i < x; i++)
            result += "0";
        return result;
    }

    int generateKey(int num1, int num2, int num3) {
        string s1 = to_string(num1), s2 = to_string(num2);
        string s3 = to_string(num3), s4 = to_string(num3);
        s1 = copyOfZeroes(4 - s1.size()) + s1;
        s2 = copyOfZeroes(4 - s2.size()) + s2;
        s3 = copyOfZeroes(4 - s3.size()) + s3;
        string r = "";
        for (int i = 0; i < 4; i++) {
            int v = min(s1[i] - '0', s2[i] - '0');
            v = min (v, s3[i] -'0');
            r += v + '0';
        }
        
        return stoi(r);
    }
};
