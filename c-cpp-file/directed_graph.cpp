#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;


class graph
{
    int v;
    list <int> *adj;
public:

    graph(int v)
    {
        this->v =v;
        adj = new list<int> [v];
    }

    void add_edge(int u ,int v)
    {
        adj[u].push_back(v);

    }

    void print_neighbour(int chk)
    {
        int count =0;

        for(auto i = adj[chk].begin();i!=adj[chk].end();i++)
        {

                cout<<*i<<" ";
                count++;

        }
        if(count==0)
        {
            cout<<0;
        }
        cout<<endl;

    }





};

int main()
{
    int V,E;
    cin>>V>>E;
    graph g(V);
    for(int i =0;i<E;i++)
    {
        int u,v;
        cin>>u>>v;
        g.add_edge(u,v);

    }
    int i ;
    cin>>i;

        g.print_neighbour(i);


    return 0;
}
