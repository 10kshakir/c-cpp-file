#include<iostream>
using namespace std;


class Node
{
public:
    int value;
    Node* next;
    Node(int n)
    {
        value =n;
        next =NULL;
    }
};

void insert_at_tail(Node* &head,int n)
{
     Node *new_node =new Node(n);

     if(head==NULL)
     {
         head=new_node;
         return;
     }

     Node* temp =head;

     while(temp->next!=NULL)
     {
         temp=temp->next;
     }
     temp->next=new_node;



}
void print_linked_list(Node* n)
{
    if(n==NULL) cout<<"there is nothing on the list"<<endl;
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->next!=NULL)
        {
            cout<<" -> ";
        }
        n=n->next;
    }
}

void new_list(Node* &head)
{
    Node* new_head =NULL;
    Node* temp =head;
    int a[50];
    int count =0;
    while(temp!=NULL)
    {
        a[count]=temp->value;
        temp=temp->next;
        count++;
    }
    int pre[count];
    pre[0]=a[0];
    for(int i =1;i<count;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }

   for(int i =0;i<count;i++)
    {
        if(pre[i]==0)continue;
        for(int j =i+1;j<count;j++)
        {
            if(pre[j]==0)
            {
                pre[i]=0;
                break;
            }
            if(pre[i]==pre[j])
            {
                pre[j]=0;
                break;
            }
        }
    }
    for(int i =0;i<count;i++)
    {
        if(pre[i]>0)
        {
            insert_at_tail(new_head,pre[i]);
        }
    }
    head =new_head;
}

int main()
{
   Node* head  =NULL;
   int n;
   cin>>n;
   while(n--)
   {
       int a;
       cin>>a;
       insert_at_tail(head,a);
   }
    new_list(head);
    cout<<endl;
   print_linked_list(head);

   return 0;
}
