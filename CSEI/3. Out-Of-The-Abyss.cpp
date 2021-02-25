#include<bits/stdc++.h>
using namespace std;
#define N 100005
typedef long long ll;

ll dist[N]; 

bool visited[N]; 
  
void add_edge(vector<ll> graph[], ll u, ll v){  
    graph[u].push_back(v);  
    graph[v].push_back(u);  
}  
  
void Multisource_BFS(vector<ll> graph[],queue<ll>q){ 
    while(!q.empty()){ 
        ll k = q.front(); 
        q.pop(); 
        for(auto i:graph[k]){ 
            if(!visited[i]){ 
                q.push(i); 
                dist[i] = dist[k] + 1;  
                visited[i] = true; 
            } 
        } 
    } 
} 

void nearestTown(vector<ll> graph[],ll n,ll sources[],ll s) 
{ 
    queue<ll> q; 
    for(ll i = 0;i < s; i++){ 
        q.push(sources[i]); 
        visited[sources[i]]=true; 
    } 
  
    Multisource_BFS(graph,q); 
} 

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, m, k;
		cin >> n >> m >> k;
		vector<ll> gr[n+1];

		for(int i=0 ; i<N ; i++){
			dist[i] = 0;
			visited[i] = false;
		}

		for(ll i=0 ; i<m ; i++){
			ll u, v;
			cin >> u >> v;
			add_edge(gr, u, v);
		}

		int a[100005] = {0};

		ll specialNodes[k];

		for(ll i=0 ; i<k ; i++){
			cin >> specialNodes[i];
			a[specialNodes[i]] = 1;
		}

		nearestTown(gr, n, specialNodes, k);

		ll q;
		cin >> q;
		ll start[q];
		for(ll i=0 ; i<q ; i++){
			cin >> start[i];
			if(a[start[i]]==1){
				cout<<"0\n";
			}else{
				if(dist[start[i]] == 0)
					cout<<"-1\n";
				else
					cout<<dist[start[i]]<<"\n";	
			}
		}	
	}
	return 0;
}