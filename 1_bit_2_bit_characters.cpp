class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int len = bits.size();
        int i = 0;
        while (i < len) {
            if (bits[i] == 1)
                i += 2;
            else {
                if (i == len-1)
                    return true;
                i++;
            }
        }
        return false;
    }
};
