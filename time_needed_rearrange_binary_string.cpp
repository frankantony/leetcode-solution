class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int len = s.size(), second = 0;
        bool flag = false;
        while (second <= len) {
          for (int i = 0; i < len - 1; i++) {
              if (s[i] == '0' && s[i+1] == '1') {
                  s[i] = '1';
                  s[i + 1] = '0';
                  i++;
                  flag = true;
              }
          }
          if (!flag)
            break;
          flag = false;
          second++;
        }
        return second;
    }
};
