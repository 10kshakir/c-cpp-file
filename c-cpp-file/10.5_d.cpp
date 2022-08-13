#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;

    int array[size];

    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }

    int maximum=array[0];
    int minimum=array[0];

    int maxInd =0;
    int min_ind =0;

    for(int i =0;i<size;i++)
    {
        if(array[i]>maximum)
        {
            maximum =array[i];
            maxInd =i;
        }
       if(array[i]<minimum)
        {
            minimum =array[i];
            min_ind =i;
        }
    }
    cout<<"Maximum ind : "<<maxInd<<" Maximum number : "<<maximum<<endl;
    cout<<"Minimum ind : "<<min_ind<<" MInimum number : "<<minimum<<endl;
    return 0;
}
