#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0 ; i<n ; i++)
	        cin >> arr[i];
	       
	    int temp = arr[n-1];
	    for(int i=n-1 ; i>=0 ; i--){
	        if(i != 0)
	            arr[i] = arr[i-1];
	        else
	            arr[i] = temp;
	    }
	    
	    for(int i=0 ; i<n ; i++)
	        cout<<arr[i]<<" ";
	       
	    cout<<"\n";
	}
	return 0;
}