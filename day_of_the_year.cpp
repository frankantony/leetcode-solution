class Solution {
public:
    bool isLeapYear (int year) {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    int dayOfYear(string date) {
        int day = stoi(date.substr(8, 2));
        int month = stoi(date.substr(5, 2));
        int year = stoi(date.substr(0, 4));
        map<int, int> numberOfDays;
        numberOfDays[1] = 31;
        numberOfDays[2] = isLeapYear(year) ? 29: 28;
        numberOfDays[3] = 31;
        numberOfDays[4] = 30;
        numberOfDays[5] = 31;
        numberOfDays[6] = 30;
        numberOfDays[7] = 31;
        numberOfDays[8] = 31;
        numberOfDays[9] = 30;
        numberOfDays[10] = 31;
        numberOfDays[11] = 30;
        numberOfDays[12] = 31;
        int days = 0;
        for (int i = 1; i < month; i++)
            days += numberOfDays[i];
        days += day;
        return days;
    }
};
