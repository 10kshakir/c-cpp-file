#include<iostream>
#include"MYSTACK.h"
using namespace std;
class Node
{
public:
    int value;
    Node *next;
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

void display_List(Node* n)
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
void delete_at_head(Node * &head)
{
    Node *temp =head;
    if(temp!=NULL)
    {
        head=temp->next;
        delete temp;
    }
    else
    {
        cout<<"there is no value in the list"<<endl;
    }
}
Node* reverse_linked_list(Node* &head)
{
    Node* temp =head;
    Node* new_head =NULL;
    Stack <int >st;
    while(temp!=NULL)
    {
        Node* del =temp;
        st.push(del->value);
        temp=temp->next;

    }

    temp =head;
     while(!st.check_empty())
    {
        temp->value=st.pop();

    }
   return temp;

}

int main()
{
    Node *head =NULL;
    int n;
    cin>>n;
    for(int i =1;i<=n;i++)
    {

        insert_at_tail(head,i);
    }
    head =reverse_linked_list(head);
    display_List(head);
    return 0;

}
