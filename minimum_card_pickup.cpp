#include<iostream>
#include<vector>
#include<map>
#include<climits>

using namespace std;

int minimumCardPickup(vector<int>& cards) {
	int len = cards.size(), i = 0, result = INT_MAX;
	bool matching = false;
	map<int, int> table;
	while (i < len) {
		if (table.find(cards[i]) != table.end()) {
			result = min (result, i - table[cards[i]] + 1);
			matching = true;
		} 
		table[cards[i]] = i;
		i++;
	}
        
	return matching ? result : -1;
}


int main () {
	int len, value;
	cin >> len;
	vector<int> cards;
	for (int i = 0; i < len; i++) {
		cin >> value;
		cards.push_back(value);
	}

	int result = minimumCardPickup (cards);
	cout << result << endl;
	return 0;
}
