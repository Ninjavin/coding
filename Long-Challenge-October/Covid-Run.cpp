#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){

		int n, k, x, y;
		cin >> n >> k >> x >> y;

		int reached=-1;
		int temp = x;

		while(reached != x && reached != y){
			reached = (temp+k)%n;
			temp = reached;
		}

		if(reached == y){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}