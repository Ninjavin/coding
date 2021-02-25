#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long arr[n];

		long long sum_odd = 0;
		long long sum_even = 0;

		for(long long i=0 ; i<n ; i++){
			cin >> arr[i];
			if(arr[i]%2 != 0){
				sum_odd = sum_odd + arr[i];
			}else{
				sum_even = sum_even + arr[i];
			}
		}
		
		cout<<max(sum_odd, sum_even)<<"\n";
	}
	return 0;
}