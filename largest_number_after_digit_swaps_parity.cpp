class Solution {
public:
    vector<int> convertToArray (int num) {
        vector<int> result;
        while (num != 0) {
            result.push_back (num % 10);
            num /= 10;
        }
        return result;
    }

    int largestInteger(int num) {
        vector<int> odd, even;
        vector<int> vet = convertToArray (num);
        int len = vet.size();
        for (int i = 0; i < len; i++) {
            if (vet[i] % 2 == 0)
                even.push_back(vet[i]);
            else
                odd.push_back(vet[i]);
        }
        sort (even.begin(), even.end());
        sort (odd.begin(), odd.end());
        int result = 0, j = 0, l = 0;
        long long power = 1;
        for (int i = 0; i < len; i++) {
            if (vet[i] % 2 == 0)
                result += even[j++] * power;
            else
                result += odd[l++] * power;
            power *= 10;
        }
        return result;
    }
};
