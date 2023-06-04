class Solution {
public:
    vector<string> getComplex (string num) {
        vector<string> result;
        int len = num.size(), i = 0;
        while (num[i] != '+')
            i++;
        result.push_back(num.substr(0, i));
        result.push_back(num.substr(i + 1, len - i - 1));
        return result;
    }

    string multiplication (vector<string>& a, vector<string>& b) {
        int real1 = stoi(a[0]);
        int imaginary1 = stoi(a[1]);
        int real2 = stoi(b[0]);
        int imaginary2 = stoi(b[1]);
        int realProduct = (real1 * real2) - (imaginary1 * imaginary2);
        int imaginaryProduct = (real1 * imaginary2) + (imaginary1 * real2);
        return to_string(realProduct) + "+" + to_string(imaginaryProduct) + "i";
    }

    string complexNumberMultiply(string num1, string num2) {
        int len1 = num1.size(), len2 = num2.size();
        vector<string> complex1 = getComplex (num1);
        vector<string> complex2 = getComplex (num2);
        return multiplication(complex1, complex2);
    }
};
