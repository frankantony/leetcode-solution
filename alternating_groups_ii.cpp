class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int lenColors = colors.size(), cont = 1, i = 0;
        while (i < k - 1) {
            cont += (colors[i] != colors[i+1]);
            i++;
        }

        int result = (cont == k);
        for (int i = 1; i < lenColors; i++) {
            cont -= (colors[i] != colors[i-1]);
            cont += (colors[(i + k - 1) % lenColors] != colors[(i + k - 2) % lenColors]);
            result += cont == k;
        }

        return result;
    }
};
