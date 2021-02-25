#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

vector< vector<ll> > graph;
ll q=0, m = -1;                                // m is for largest path and q is one of the end vertex of that path

void dfs(ll i, ll count, vector<bool>& v)
{
    count++;
    v[i] = true;
    for(ll j=0;j<graph[i].size();j++)
    {
       if(!v[graph[i][j]])
        {
            dfs(graph[i][j], count, v);
        }
    }
    if(count>m)
    {
        m= count;
        q=i;
    } 
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
	    graph = vector< vector<ll> >(n);
		vector<bool> visited(n);
    	vector<bool> v(n);
		for(i=0;i<n-1;i++)
    	{
			ll x, y;
			cin>>x>>y;
			x--, y--;
			graph[x].push_back(y);
			graph[y].push_back(x);
    	}

	}
    return 0;
}