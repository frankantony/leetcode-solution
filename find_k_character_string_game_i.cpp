class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while (word.size() < k) {
            string current = "";
            for (int i = 0; i < word.size(); i++)
                current += (word[i] == 'z') ? 'a': word[i] + 1;
            word += current;
        }

        return word[k-1];
    }
};
