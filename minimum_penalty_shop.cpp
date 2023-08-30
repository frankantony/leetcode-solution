class Solution {
public:
    int bestClosingTime(string customers) {
        int lenCustomers = customers.size();
        int sum = 0;
        for (int i = 0; i < lenCustomers; i++)
            sum += (customers[i] == 'Y');
        
        int result = 0, smaller = sum;
        for (int i = 0; i < lenCustomers; i++) {
            if (customers[i] == 'Y') {
                sum--;
                if (sum < smaller) {
                    result = i + 1;
                    smaller = sum;
                }
            }
            else
                sum++;
        }
        return result;
    }
};
