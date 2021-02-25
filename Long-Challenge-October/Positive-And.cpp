#include<bits/stdc++.h>
using namespace std;

bool IsPowerOfTwo(int x)
{
    return ((x & (x - 1)) == 0);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		if(n == 1){
			cout << "1\n";
		}else if(IsPowerOfTwo(n)){
			cout<<"-1\n";
		}else{

			cout<<"2 3 1 ";

			if(n==3){
				cout<<"\n";
			}
			else{
				for(int i=4 ; i<=n ; i++){
					if(IsPowerOfTwo(i)){
						cout<<i+1<<" "<<i<<" ";
						i++;
					}else{
						cout<<i<<" ";
					}
				}
				cout<<"\n";
			}
		}
	}
	return 0;
}