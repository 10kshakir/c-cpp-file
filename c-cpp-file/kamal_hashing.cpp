#include<bits/stdc++.h>
using namespace std;
class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;

    // function to add an edge to graph
    void addEdge(int v, int w);

    // DFS traversal of the vertices
    // reachable from v
    void DFS(int v,int &x);

};

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFS(int v,int &x)
{
    // Mark the current node as visited and
    // print it

    visited[v] = true;


    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i,x);
            x++;



}


int main()
{
    int n,v;
    cin>>n>>v;


    vector<int> adj[n];
    Graph g;

    for(int i =0;i<v;i++)
    {
        int a,b;
        cin>>a>>b;
        g.addEdge(a,b);
    }
    int d;
    cin>>d;
    int x =-1;
    g.DFS(d,x);

    cout<<x<<endl;


    return 0;
}
