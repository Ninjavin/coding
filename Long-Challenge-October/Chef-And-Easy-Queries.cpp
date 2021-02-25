#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll arr[n];
		ll temp;
		for(ll i=0 ; i<n ; i++){
			cin >> arr[i];
		}

		bool flag = false;

		temp = arr[0];

		for(ll i=0 ; i<n ; i++){
			if(temp < k){
				cout << i+1 <<"\n";
				flag = true;
				break;
			}else{
				if(i!=n-1)
					temp = (temp-k)+arr[i+1];
				else
					temp = temp-k;
			}
		}

		if(!flag){
			cout << 1 + temp/k + n << "\n";
		}

	}
	return 0;
}