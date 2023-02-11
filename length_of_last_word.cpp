class Solution {
public:
    int solve (string st) {
        st += " ";
        string current = "", lastWord = "";
        int len = st.size();
        for (int i = 0; i < len; i++) {
            if (st[i] != ' ')
                current += st[i];
            else {
                if (current != "")
                    lastWord = current;
                current = "";
            }
        }

        return lastWord.size();
    }

    int lengthOfLastWord(string s) {
        int result = solve (s);
        return result;
    }
};
