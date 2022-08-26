#include<iostream>
#include"MYSTACK.h"

class Doubly_Node
{
public:
    int value;
    Doubly_Node *prev;
    Doubly_Node *next;
    Doubly_Node(int n)
    {
        value =n;
        prev =NULL;
        next=NULL;
    }
};


void insert_at_tail(Doubly_Node* &head,int n)
{

    Doubly_Node *new_dn = new Doubly_Node(n);

    if(head ==NULL) {head =new_dn; return;}

    Doubly_Node* temp =head;

    while(temp->next!=NULL)
    {
        temp =temp->next;
    }

    temp->next=new_dn;
    new_dn->prev =temp;

}


void print_linked_list(Doubly_Node* n)
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
}

void reverse_doubly_linked_list(Doubly_Node* &head)
{

    Doubly_Node*  temp =head;
    Stack <int> input;
    while(temp!=NULL)
    {
        input.push(temp->value);
        temp=temp->next;
    }
    Stack<int> st;
    while(!input.check_empty())
    {
        int a = input.pop();
        while(!st.check_empty()&&st.return_top()>a)
        {
            input.push(st.pop());
        }
        st.push(a);
    }
    temp =head;
    while(!st.check_empty())
    {
        temp->value=st.pop();
        temp =temp->next;
    }

}

int main()
{
    Doubly_Node* head =NULL;
    int n;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        insert_at_tail(head,i);
    }
   reverse_doubly_linked_list(head);
    print_linked_list(head);
    return 0;
}
