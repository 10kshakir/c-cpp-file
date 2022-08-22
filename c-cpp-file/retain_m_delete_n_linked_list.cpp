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
void delete_at_tail(Node * &head)
{
    Node *temp =head;

    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    Node *del =temp->next;
    temp->next =NULL;
    delete del;
}




void retain_M_delete_N(Node* &head,int m,int n)
{

    int d =n;
    int k =m;
    Node* temp =head;
    Node* new_head =NULL;
    while(temp!=NULL)
    {   m=k;
        while(m--&&temp!=NULL)
        {
            insert_at_tail(new_head,temp->value);
            temp=temp->next;
        }
        n=d;
        while(n--&&temp!=NULL)
        {
            temp=temp->next;
        }
    }

    temp=head;
    delete temp;
    head =new_head;

}
int main()
{
    Node* head =NULL;
    int x,M,N;
    cin>>x>>M>>N;
    for(int i =0;i<x;i++)
    {
        int a;
        cin>>a;
        insert_at_tail(head,a);
    }
    retain_M_delete_N(head,M,N);
    print_linked_list(head);

}
