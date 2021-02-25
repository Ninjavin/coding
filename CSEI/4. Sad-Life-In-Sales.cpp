#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void addEdge(vector<ll> v[], ll x, ll y){
	v[x].push_back(y);
	v[y].push_back(x);
}

void printWeight(vector<ll> stack){ 
    ll i; 
    for (i = 0; i < (ll)stack.size() - 1; i++) { 
        cout << stack[i] << " -> "; 
    } 
    cout << stack[i]; 
} 
  
void DFS(vector<ll> v[], bool vis[], ll x, ll y, vector<ll> stack){ 
    stack.push_back(x); 
    if (x == y) { 
        printPath(stack); 
        return; 
    } 
    vis[x] = true; 
  
    if (!v[x].empty()) { 
        for (ll j = 0; j < v[x].size(); j++) { 
            if (vis[v[x][j]] == false) 
                DFS(v, vis, v[x][j], y, stack); 
        } 
    } 
  
    stack.pop_back(); 
} 

void DFSCall(ll x, ll y, vector<ll> v[], ll n, vector<ll> stack){ 
    bool vis[n + 1]; 
  
    memset(vis, false, sizeof(vis)); 
  
    DFS(v, vis, x, y, stack); 
} 

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, q, r;
		cin >> n >> q >> r;
		vector<ll> tree[n], stack;
		vector<pair<pair<ll, ll>, ll>> weights[n-1];

		for(ll i=0 ; i<n-1 ; i++){
			ll u, v, w;
			cin >> u >> v >> w;
			weights[i].first.first = u;
			weights[i].first.second = v;
			weights[i].second = w;
			addEdge(tree, u, v);
		}

		for(ll i=0 ; i<q ; i++){
			ll U, V;
			cin >> U >> V;
			DFSCall(U, V, tree, n, stack)
		}

	}
	return 0;
}