class Solution {
public:
    string categorizeBox(long long length, long long width, long long height, int mass) {
        long long volume = length * width * height;
        bool isBulky = (length >= 10000 || width >= 10000 || height >= 10000)
                        || (volume >= 1000000000L);
        bool isHeavy = mass >= 100;
        if (isBulky && isHeavy)
            return "Both";
        else if (isBulky && !isHeavy)
            return "Bulky";
        else if (!isBulky && isHeavy)
            return "Heavy";
        else
            return "Neither";
    }
};
