#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int arr[n];

		sort(arr, arr+n);

		if(k==1){
			cout<<"0\n";
		}else{
			int result = INT_MAX;
			for(int i=0 ; i<=n-k ; i++){
				if(arr[i+k-1] - arr[i] < result)
					result = arr[i+k-1] - arr[i];
			}
			cout<<result<<"\n";
		}
	}
	return 0;
}