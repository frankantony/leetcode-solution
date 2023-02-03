class Solution {
public:
    long reverse(long x) {
        long value = (x < 0) ? -x : x;
        if (value == 0) return 0;
        string cumulate = "";
        while (value != 0) {
            cumulate += (value % 10) + '0';
            value = value / 10;
        }

        long inverse;
        try {
            inverse = stoi(cumulate);
        } catch (out_of_range e) {
            return 0;
        }

        return (x < 0) ? -inverse: inverse;
    }
};
