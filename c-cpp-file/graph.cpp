#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

typedef pair<int,int> edge_weight_pair;
class graph
{
    int v;
    list <edge_weight_pair> *adj;
public:

    graph(int v)
    {
        this->v =v;
        adj = new list<edge_weight_pair> [v];
    }

    void add_edge(int u ,int v,int w)
    {
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    void print_neighbour(int chk)
    {

        for(auto i = adj[chk].begin();i!=adj[chk].end();i++)
        {
            cout<<" ( "<<(*i).first<<" , "<<(*i).second<<" ) ";
        }
        cout<<endl;

    }

    void BFS(int source)
    {
        vector <bool> visited(v,false);
        queue<int> q;
        visited[source] =true;
        cout<<source<<" ";
        q.push(source);
        while(!q.empty())
        {
            int u =q.front();
            q.pop();

            for(auto element : adj[u])
            {
                int ver = element.first;
                if(visited[ver]!=true)
                {
                    visited[ver]=true;
                    q.push(ver);
                    cout<<ver<<" ";


                }

            }

        }

    }


    //dfs
    void DFS(int source)
    {
        static vector<bool> visited(v,false);
        visited[source]=true;
        cout<<source<<" ";
        for(auto element:adj[source])
        {
            int T=element.first;
            if(visited[T]!=true)
            {
                DFS(T);
            }
        }
    }

};

int main()
{
    int V,E;
    cin>>V>>E;
    graph g(V);
    for(int i =0;i<E;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g.add_edge(u,v,w);

    }
    for(int i =0;i<V;i++)
    {
        g.print_neighbour(i);
    }
    g.BFS(0);
    cout<<endl;
    g.DFS(0);
    return 0;
}
/*
7 10
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
3 6 1
6 5 2
6 4 4
5 4 6
2 5 8
*/
