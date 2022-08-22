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

void make_cycle(Node* &head,int pos)
{
    Node* temp =head;
    Node* s_node ;
    int count =1;

    while(temp->next!=NULL)
    {
        if(count==pos)s_node=temp;
        temp=temp->next;
        count++;
    }
    temp->next =s_node;


}

bool detect_cycle(Node* &head)
{
    Node* slow =head;
    Node* fast =head;

    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow->next==fast->next)
        {
            return true;
        }
    }

    return false;


}

void remove_cycle(Node* &head)
{
    Node* fast =head;
    Node* slow =head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast =head;

    while(fast->next!=slow->next)
    {
        slow=slow->next;
        fast=fast->next;
    }

    slow->next=NULL;

}


int main()
{
    Node *head =NULL;

    int n,po;

    cout<<"enter 1 for insert an element on linked list"<<endl;
    cout<<"enter 2 for to make a cycle linked list"<<endl;
    cout<<"enter 3 for to detect a cycle linked list"<<endl;
    cout<<"enter 4 for remove a cycle linked list"<<endl;
    cout<<"enter 0 for exit"<<endl;
    int c;
    cout<<"choice : ";
    cin>>c;
    while(c!=0)
    {
        switch(c)
        {
        case 1:
            cout<<"enter number you want to insert in a list : " ;
            cin>>n;
            insert_at_tail(head,n);
            break;
        case 2:
            cout<<"enter position to make a cycle : ";
            cin>>po;
            make_cycle(head,po);
            break;
        case 3:
            bool cycle_st;
            cycle_st=detect_cycle(head);
            if(cycle_st==true)
            {
                cout<<"there is a cycle in a list"<<endl;
            }else{
                cout<<"there is no cycle in a list"<<endl;
            }
            break;
        case 4:
             cycle_st=detect_cycle(head);
            if(cycle_st==true)
            {
                remove_cycle(head);
            }else{
                cout<<"there is no cycle in a list"<<endl;
            }
            break;

        default:
            break;
        }
        cout<<"choice : ";
       cin>>c;
    }

    print_linked_list(head);

    return 0;
}
