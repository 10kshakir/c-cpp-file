#include <iostream>

using namespace std;

class Node
{
public:
    int  value;
    Node* next;
    Node(int  n)
    {
        value =n;
        next =NULL;
    }
};

void insert_at_tail(Node* &head,int n)
{
    Node* new_node =new Node(n);

    if(head ==NULL)
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
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->next!=NULL)
        {
            cout<<" -> ";
        }
        n=n->next;
    }
    cout<<endl;
}

void zero_list(Node* &head)
{
    Node* temp =head;
    int sum =0;
    int sum1=0;
    while(temp!=NULL)
    {
        if(temp->value<0)
        {
            sum+=temp->value;
        }
        if(temp->value>0)
        {
            sum1+=temp->value;
        }
        temp=temp->next;

    }


    cout<<sum<<endl;
    cout<<sum1<<endl;

}

int main()
{
    int n,d;
    cin>>n;
    Node* head =NULL;
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        insert_at_tail(head,a);
    }

  zero_list(head);
   print_linked_list(head);

    return 0;
}
