#include<iostream>
using namespace std;

int main(){
	int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int left = 0;
	int right = n-1;

	while(left <= right){
		if(arr[left] < 0 && arr[right] < 0){
			left++;
		}else if(arr[left] > 0 && arr[right] < 0){
			swap(arr[left], arr[right]);
			left++;
			right--;
		}else{
			right--;
		}
	}

	for(int i=0 ; i<n ; i++){
		cout << arr[i] << " ";
	}
	cout << "\n";

	return 0;
}