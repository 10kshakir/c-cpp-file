#include <iostream>
using namespace std;

class Node
{
public:

    int value;
    Node *next;

    Node(int n)
    {
        value=n;
        next=NULL;
    }
};

struct Test
{
    int position[1000];
};

int linked_list_length(Node*&head)
{

    Node *temp =head;
    int count =0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void display_list(Node*&head)
{
    if(head ==NULL)return;
    Node *temp =head;
    while(temp!=NULL)
    {
        cout<<temp->value;
        if(temp->next!=NULL)
        {
            cout<<" -> ";
        }
        temp=temp->next;
    }
}

void insert_at_head(Node* &head,int n)
{
     Node *new_node =new Node(n);

     if(head==NULL)
     {
         head=new_node;
         return;
     }

    new_node->next=head;
    head=new_node;
}

void insert_at_tail(Node* &head,int n)
{
     Node *new_node =new Node(n);

     if(head==NULL)
     {
         head=new_node;
         return;
     }

    Node *temp =head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}

void insert_at_specific_position(Node* &head,int pos ,int value)
{
     if(pos==1) {insert_at_head(head,value); return;}
    Node *new_node =new Node(value);


    int count=1;


    Node *temp =head;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }


    new_node->next=temp->next;
    temp->next=new_node;

}

void reversed_linked_list_print(Node *n)
{
    if(n==NULL) return;
    reversed_linked_list_print(n->next);
    if(n->next!=NULL)cout<<" -> ";
    cout<<n->value;
}

Test search_value_dl_return(Node* &head,int key)
{
    Node* temp =head;
    Test t;
    int k =1;
    int count=1;
    while(temp!=NULL)
    {
        if(temp->value ==key)
        {
            t.position[k]=count;
            k++;
        }
        count++;
        temp=temp->next;
    }
    t.position[0]=k;
    return t;
}

int  search_value_ul(Node* &head,int key)
{
    if(head ==NULL)return -1;
    int count =1;
    Node *temp =head;
    while(temp->value!=key)
    {
        count++;
        if(temp->next==NULL)return -1;
        temp=temp->next;
    }
    return count;
}




