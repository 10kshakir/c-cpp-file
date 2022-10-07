#include<iostream>
#include<map>
#include<vector>
#include<list>
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

    }
     void print_neighbour(int chk,int d,int &sum)
    {
        int count =0;

        for(auto i = adj[chk].begin();i!=adj[chk].end();i++)
        {
            if(d ==(*i).second)
               {
                   sum+=(*i).first;
                    cout<<(*i).first<<" ";
               }
        }


    }
};
int main()
{


    int V,E;
    cin>>V>>E;
    graph g(V);
    int cur =0;
    int w =1;
    for(int i =0;i<E;i++)
    {
        int u,v;
        cin>>u>>v;
        if(u != cur)
        {
            cur =u;
            w++;
        }
        g.add_edge(u,v,w);

    }
    int d;
    cin>>d;
    int sum =0;
   for(int i =0;i<V;i++)
    {
        g.print_neighbour(i,d,sum);
    }
    if(sum == 0)
    {
        cout<<0;
    }

    return 0;
}

