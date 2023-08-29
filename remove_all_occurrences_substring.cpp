class Solution {
public:
    string removeOccurrences(string s, string part) {
        int lenPart = part.size();
        while (true) {
            size_t ind = s.find(part);
            if(ind != string::npos)
                s.erase(ind,lenPart);
            else
                break;
        }
        return s;
    }
};
