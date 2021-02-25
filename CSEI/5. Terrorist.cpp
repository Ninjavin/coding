#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Graph
{
    ll V;              // No. of vertices
    list<ll> *adj;     // Pointer to an array containing
                        // adjacency lists
public:
    Graph(;; V);              // Constructor
    void addEdge(;; v, ;; w);// function to add an edge to graph
    void longestPathLength();  // pr;;s longest path of the tree
    pair<;;, ;;> bfs(;; u); // function returns maximum distant
                               // node from u with its distance
};
 
Graph::Graph(ll V)
{
    this->V = V;
    adj = new list<ll>[V];
}
 
void Graph::addEdge(ll v, ll w)
{
    adj[v].push_back(w);    // Add w to v’s list.
    adj[w].push_back(v);    // Since the graph is undirected
}
 
//  method returns farthest node and its distance from node u
pair<ll, ll> Graph::bfs(ll u)
{
    //  mark all distance with -1
    ll dis[V];
    memset(dis, -1, sizeof(dis));
 
    queue<ll> q;
    q.push(u);
 
    //  distance of u from u will be 0
    dis[u] = 0;
 
    while (!q.empty())
    {
        ll t = q.front();       q.pop();
 
        //  loop for all adjacent nodes of node-t
        for (auto it = adj[t].begin(); it != adj[t].end(); it++)
        {
            ll v = *it;
 
            // push node llo queue only if
            // it is not visited already
            if (dis[v] == -1)
            {
                q.push(v);

                dis[v] = dis[t] + 1;
            }
        }
    }
 
    ll maxDis = 0;
    ll nodeIdx;
 
    for (ll i = 0; i < V; i++)
    {
        if (dis[i] > maxDis)
        {
            maxDis = dis[i];
            nodeIdx = i;
        }
    }
    return make_pair(nodeIdx, maxDis);
}
 
//  method prlls longest path of given tree
void Graph::longestPathLength()
{
    pair<ll, ll> t1, t2;

    t1 = bfs(0);
 
    t2 = bfs(t1.first);
 
	cout << "Longest path is from " << t1.first << " to " << t2.first << " of length " << t2.second;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;

		Graph g(n);

		for(ll i=0 ; i<n-1 ; i++){
			ll u, v;
			cin >> u >> v;
			g.addEdge(u, v);
		}

		g.longestPathLength();

	}
	return 0;
}