#include<iostream>
#include<vector>

using namespace std;

int compress(vector<char>& chars) {
	chars.push_back(' ');
	int len = chars.size(), cont = 1;
	int index = 0;
	vector <char> copy (chars);
        
	for (int i = 0; i < len - 1; i++) {
		if (copy[i] == copy[i+1])
			cont++;
		else {
			chars[index++] = copy[i];
			if (cont != 1) {
				string aux = "";
				while (cont != 0) {
					aux += (cont % 10) + '0';
					cont /= 10;
				}
                    
				for (int j = aux.size() - 1; j >= 0; j--)
					chars[index++] = aux[j];
			}
			cont = 1;
		}
	}
            
	return index;
}

int main () {
	int n;
	char value;
	cin >> n;
	vector<char> chars;
	for (int i = 0; i < n; i++) {
		cin >> value;
		chars.push_back(value);
	}

	int k = compress (chars);
	for (int i = 0; i < k; i++)
		cout << chars[i] << " ";
	cout << endl;
	return 0;
}
