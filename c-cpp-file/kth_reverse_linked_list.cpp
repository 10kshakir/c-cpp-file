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

Node* reverse_list(Node* &head)
{
    if(head==NULL||head->next==NULL)return head;

    Node* n_head =reverse_list(head->next);
    head->next->next=head;
    head->next=NULL;
    return n_head;
}

void kth_reverse(Node* &head,int pos)
{
    Node* first =NULL;
    Node* last =NULL;
    Node* temp =head;
    int count =1;
    while(count<pos)
    {
        insert_at_tail(first,temp->value);
        temp=temp->next;
        count++;
    }
    insert_at_tail(first,temp->value);

    last=temp->next;
    temp->next=NULL;
    first=reverse_list(first);
    last=reverse_list(last);
    temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=last;
    head =first;


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
        kth_reverse(head,d);
   print_linked_list(head);

    return 0;
}
