#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, x, p, k;
		cin >> n >> x >> p >> k;
		ll arr[n];

		for(ll i=0 ; i<n ; i++){
			cin >> arr[i];
		}

		sort(arr, arr+n);

		if(arr[p-1] == x){
			cout << "0\n";
		}else if(p == k){
			if(arr[p-1] < x){
				arr[k-1] = x;
				sort(arr, arr+n);
				int index;
				for(ll i=n-1 ; i>=0 ; i--){
					if(arr[i] == x)
						index = i;
				}
				cout << index-k+2 << "\n";
			}else{
				arr[k-1] = x;
				sort(arr, arr+n);
				int index;
				for(ll i=0 ; i<n ; i++){
					if(arr[i] == x)
						index = i;
				}
				cout << p-index << "\n";
			}
		}else if(p < k){
			if(arr[p-1] < x){
				cout << "-1\n";
			}else{
				arr[k-1] = x;
				sort(arr, arr+n);
				int index;
				for(ll i=0 ; i<n ; i++){
					if(arr[i] == x)	index = i;
				}
				cout<<p-index<<"\n";
			}
		}else{
			if(arr[p-1] > x){
				cout << "-1\n";
			}else{
				arr[k-1] = x;
				sort(arr, arr+n);
				int index;
				for(ll i=n-1 ; i>=0 ; i--){
					if(arr[i] == x)
						index = i;
				}
				cout << index-p+2 << "\n";
			}
		}
	}
	return 0;
}