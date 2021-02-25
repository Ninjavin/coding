#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    int c0=0, c1=0, c2=0;
	    for(int i=0 ; i<n ; i++){
	        cin >> arr[i];
	        if(arr[i] == 0)
	            c0++;
	        else if(arr[i] == 1)
	            c1++;
	        else
	            c2++;
	    }
	    
	    while(c0--){
	        cout << "0 ";
	    }
	    while(c1--){
	        cout << "1 ";
	    }
	    while(c2--){
	        cout << "2 ";
	    }
	    cout<<"\n";
	}
	return 0;
}

// Approach 2
// Dutch National Flag Algorithm

