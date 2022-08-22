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

void kth_node(Node* &head,int pos)
{
    int count =1;
    Node* temp =head;
    Node* d =head;
    Node* new_head ;
    Node* new_tail ;

    while(temp->next!=NULL)
    {
        if(pos==count)
        {
            new_tail=temp;
            new_head=temp->next;
        }
        count++;
        temp=temp->next;
    }
    temp->next=d;
    new_tail->next=NULL;
    head=new_head;

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
    cin>>d;
    kth_node(head,d);
    print_linked_list(head);

    return 0;
}
