class Solution {
public:
    int count (vector<int>& potions, long long spell, long long success) {
        int len = potions.size(), i = 0, j = len - 1, mid;
        while (i <= j) {
            mid = (i + j) / 2;
            long long product = spell * potions[mid];
            if ((mid == 0 || (long long) spell * potions[mid - 1] < success) &&
                product >= success)
                return len - mid;
            else if (product >= success)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return len - mid - 1;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int lenSpells = spells.size();
        vector<int> answer;
        for (int i = 0; i < lenSpells; i++) {
            int spell = spells[i];
            int value = count (potions, spell, success);
            answer.push_back(value);
        }
        return answer;
    }
};
