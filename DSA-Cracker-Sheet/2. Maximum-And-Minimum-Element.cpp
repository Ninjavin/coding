#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int middle(int A, int B, int C){
        if(A>B && A>C){
            return (B>C) ? B : C;
        }else if(A>B && A<C){
            return A;
        }else{
            return (B>C) ? C : B;
        }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}