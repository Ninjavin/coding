#include <iostream>
#include <algorithm>
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
        
        sort(arr, arr+n);
        
        int result = 0;
        int count = 0;
        for(int i=0 ; i<n ; i++){
            if(i>0 && arr[i-1] == arr[i])
                continue;
            if(i>0 && arr[i-1] + 1 == arr[i]){
                count++;
            }else{
                count = 1;
            }
            result = max(count, result);
        }
        
        cout<< result <<"\n";
	}
	return 0;
}