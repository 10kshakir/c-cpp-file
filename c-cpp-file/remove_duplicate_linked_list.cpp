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

void remove_duplicate(Node* &head)
{
    Node* temp =head;
    while(temp->next!=NULL)
    {
        Node* d =temp->next;
        if(temp->value==d->value)
        {
            temp->next=d->next;
            delete d;
            continue;
        }
        temp=temp->next;
    }
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

int main()
{
    int n;
    cin>>n;
    Node* head =NULL;
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        insert_at_tail(head,a);
    }

    remove_duplicate(head);
    print_linked_list(head);
    return 0;
}
