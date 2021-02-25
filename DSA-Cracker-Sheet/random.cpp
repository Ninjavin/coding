#include<bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int>& nums) {
  if(nums.empty())
    return 0;
  if(nums.size()==1)
    return 1;
  vector<int> dp(nums.size(),1);
  for(int i=1 ; i<nums.size() ; i++){
    for(int j=0 ; j<i; j++){
      if(nums[j]<nums[i])
        dp[i] = max(dp[i], dp[j]+1);
    }
  }
  return *max_element(dp.begin(),dp.end());
}
int main(){
  vector<int> arr = {1, 7, 2, 11, 15};
  cout << lengthOfLIS(arr);
  return 0;
}