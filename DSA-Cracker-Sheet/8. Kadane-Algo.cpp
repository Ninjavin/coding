#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    int meh = 0;
	    int msf = INT_MIN;
	    for(int i=0 ; i<n ; i++){
	        cin >> arr[i];
	        meh = meh + arr[i];
	        if(meh < arr[i]){
	            meh = arr[i];
	        }
	        if(msf < meh){
	            msf = meh;
	        }
	    }
	    
	    cout<<msf<<"\n";
	        
	        
	}
	return 0;
}