#include<iostream>
#include<vector>
#include<queue>


using namespace std;

typedef pair<int,int> PAIR;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> all_values(n);
    for(int  i =0;i<n;i++)
    {
        int size;
        cin>>size;
        all_values[i]=vector<int>(size);
        for(int j =0;j<size;j++)
        {
            cin>>all_values[i][j];
        }

    }

    vector <int>index_tracker(n,0);

    priority_queue<PAIR,vector<PAIR>,greater<PAIR>> pq;
    for(int i =0;i<n;i++)
    {
        pq.push(make_pair(all_values[i][0],i));
    }
    vector<int>ans;
    while(!pq.empty())
    {
        PAIR x = pq.top();
        pq.pop();
        ans.push_back(x.first);

        if(index_tracker[x.second]+1<all_values[x.second].size())
        {
            pq.push(make_pair(all_values[x.second][index_tracker[x.second]+1],x.second));
        }
        index_tracker[x.second]+=1;
    }

    for(auto ele :ans)
    {
        cout<<ele<<" ";
    }

    return 0;
}
/*
3
3
1 4 7
2
3 5
3
2 6 7

*/
