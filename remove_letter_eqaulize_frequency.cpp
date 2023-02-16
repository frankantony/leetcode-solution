class Solution {
public:
    bool isEqualized (vector<int> vet) {
        for (int i = 0; i < vet.size() - 1; i++)
            if (vet[i] != 0)
                if (vet[i] != vet[i + 1])
                    return false;
        return true;
    }

    bool equalFrequency(string word) {
        vector<int> frequence(26, 0);
        for (int i = 0;i < word.size(); i++)
            frequence[word[i] - 'a']++;
        
        sort(frequence.begin(), frequence.end());
        for (int i = 0; i < frequence.size(); i++) {
            frequence[i]--;
            if (isEqualized (frequence))
                return true;
            frequence[i]++;
        }
        return false;
    }
};
