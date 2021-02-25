#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		
		string s;
		// cin >> s;
		getline(cin, s);

		int i = 0;
		int j = s.length()-1;

		while(i<j){
			char temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			i++;
			j--;
		}

		cout << s << "\n";
	}
	return 0;

}