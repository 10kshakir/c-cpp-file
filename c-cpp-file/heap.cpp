#include<iostream>

using namespace std;
void SWAP(int *a,int *b)
{
    int temp =*a;
    *a =*b;
    *b =temp;
}
void print_array(int a[],int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void max_heapify(int a[],int n,int current)
{
   int largest = current;
   int left_child =(current*2)+1;
   int right_child =(current*2)+2;

   if(left_child<n && a[left_child]>a[largest] )
   {
       largest =left_child;
   }

   if(right_child<n && a[right_child]>a[largest] )
   {
       largest =right_child;
   }

   if(largest!=current)
   {
       SWAP(&a[current],&a[largest]);
       max_heapify(a,n,largest);
   }

}

void min_heapify(int a[],int n,int current)
{
   int largest = current;
   int left_child =(current*2)+1;
   int right_child =(current*2)+2;

   if(left_child<n && a[left_child]<a[largest] )
   {
       largest =left_child;
   }

   if(right_child<n && a[right_child]<a[largest] )
   {
       largest =right_child;
   }

   if(largest!=current)
   {
       SWAP(&a[current],&a[largest]);
       min_heapify(a,n,largest);
       cout<<endl<<" heapify array condition : ";
       print_array(a,n);
       cout<<endl;
   }
   else{
      cout<<endl<<" heapify array condition : ";
       print_array(a,n);
       cout<<endl;
   }

}

void heap_sort(int a[],int n)
{
    int count =1;
    for(int i =n-1;i>=0;i--)
    {
        cout<<count<<" "<<"iteration"<<endl;
        SWAP(&a[0],&a[i]);
        min_heapify(a,i,0);
        cout<<"sort array condition : ";
        print_array(a,n);
        cout<<endl;
        count++;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)cin>>arr[i];

    int non_leaf_start=(n/2)-1;
    cout<<"before heapify ";
    print_array(arr,n);
    cout<<endl;
    for(int i =non_leaf_start;i>=0;i--)
    {
        min_heapify(arr,n,i);
    }
    cout<<"after heapify ";
    print_array(arr,n);

    heap_sort(arr,n);
    cout<<"after heap sort ";
    print_array(arr,n);
    return 0;
}
/*
6
20 50 40 5 30 15
*/
