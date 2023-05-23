class Solution {
public:
    int findLucky(vector<int>& arr) {
        int len = arr.size();
        vector<int> frequence(501,0);
        for (int i = 0; i < len; i++)
            frequence[arr[i]]++;
        int result = -1;
        for (int i = 1; i <= 500; i++)
            if (frequence[i] == i)
                result = max (result, i);
        return result;
    }
};
