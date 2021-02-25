#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;
	while(t--){
	    ll n, m;
	    cin >> n >> m;
	    
	    ll a1[n];
	    ll a2[m];
	    
	    set<ll> s;
	    
	    for(ll i=0 ; i<n ; i++){
	        cin >> a1[i];
	        s.insert(a1[i]);
	    }
	        
	    for(ll j=0 ; j<m ; j++){
	        cin >> a2[j];
	        s.insert(a2[j]);
	    }
	    
	    cout<<s.size()<<"\n";
	    
	}
	return 0;
}