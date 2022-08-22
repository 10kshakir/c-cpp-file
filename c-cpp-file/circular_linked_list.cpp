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

void insert_at_head(Node* &head,int n)
{
      Node *new_node =new Node(n);
     Node* temp =head;

     if(head==NULL)
     {
         new_node->next=new_node;
         head=new_node;
         return;
     }
     while(temp->next!=head)
     {
         temp=temp->next;
     }
      temp->next=new_node;
     new_node->next=head;
     head=new_node;
}

void display_list(Node* head)
{
     Node* temp =head;
    if(head==NULL)
    {
        cout<<"There is nothing on the list"<<endl;
        return;
    }


    do
    {
        cout<<temp->value;
        temp=temp->next;

        if(temp!=head)
        {
            cout<<" -> ";
        }

    }while(temp!=head);

    cout<<endl;
}

int linked_list_lenght(Node* &head)
{
    int count =0;
    Node* temp =head;
    do
    {
        count++;
        temp =temp->next;
    }while(temp!=head);
    return count;
}
void insert_at_tail(Node* &head,int n)
{
    if(head==NULL)
    {
        insert_at_head(head,n);
        return;
    }
     Node* new_node =new Node(n);
     Node* temp =head;


     while(temp->next!=head)
     {
         temp=temp->next;
     }

     temp->next=new_node;
     new_node->next=head;


}

//delete head

void delete_at_head(Node* &head)
{
    Node* temp =head;

    if(temp!=NULL)
    {
        Node *del=temp;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=del->next;
        head=del->next;
        delete del;
    }
    else
    {
        cout<<"There is nothing in the list"<<endl;

    }

}

void delete_at_tail(Node* &head)
{
    Node* temp =head;
    if(temp!=NULL&&temp->next!=head)
    {
        while(temp->next->next!=head)
        {
            temp=temp->next;
        }
        Node* del =temp->next;
        temp->next=del->next;
        delete del;
    }
    else
    {
        if(head==NULL)cout<<"there is nothing on the list";
        else
        {
            delete_at_head(head);
        }
    }

}

int main()
{
     Node *head =NULL;

    int n,pos;

    cout<<"enter 1 for insert an element on the tail of a linked list"<<endl;
    cout<<"enter 2 for insert an element on the head of a linked list"<<endl;
    cout<<"enter 3 for length of linked list"<<endl;
    cout<<"enter 4 for delete head of linked list"<<endl;
    cout<<"enter 5 for delete tail of linked list"<<endl;
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
            cout<<"enter number you want to insert in a list : " ;
            cin>>n;
            insert_at_head(head,n);
            break;
        case 3:
            int l;
            l =linked_list_lenght(head);
            cout<<"The linked list length is "<<l<<endl;
            break;
        case 4:
            delete_at_head(head);
            break;
        case 5:
            delete_at_tail(head);
        default:
            break;

        }
        cout<<"choice : ";
          cin>>c;
    }

   display_list(head);

    return 0;
}
