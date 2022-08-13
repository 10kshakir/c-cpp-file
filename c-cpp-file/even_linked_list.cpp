#include <iostream>

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

void even_linked_list(Node*&head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        if(temp->value%2==0) temp->value=-1;
        temp=temp->next;
    }
}

void recursive(Node*&head,int n)
{
    if(n==0)return;

    recursive(head->next,n=n-1);
    if(n!=1)cout<<" ->";
    cout<<head->value;


}

int main()
{
    Node* head =NULL;
    int n,d;
    cin>>n>>d;
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        insert_at_tail(head,a);
    }
//    even_linked_list(head);

//    print_linked_list(head);
    for(int i =0;i<d;i++)
    {
        int b;
        cin>>b;
        recursive(head,b);
        cout<<endl;
    }


    return 0;
}
