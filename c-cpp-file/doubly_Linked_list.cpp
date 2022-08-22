#include <iostream>
using namespace std;

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

int linked_list_length(Doubly_Node * &head)
{
   int count =0;
   Doubly_Node * temp =head;
   while(temp!=NULL)
   {
       temp=temp->next;
       count++;
   }
   return count;
}


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

void insert_at_head(Doubly_Node* &head,int n)
{
    if(head ==NULL)
    {
        insert_at_tail(head,n);
        return;
    }
    Doubly_Node *new_dn =new Doubly_Node(n);
    head->prev=new_dn;
    new_dn->next=head;

    head =new_dn;
}


void display_reverse(Doubly_Node* head)
{
    Doubly_Node *temp =head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    cout<<endl;
    while(temp!=NULL)
    {
        cout<<temp->value;
        if(temp->prev!=NULL)
        {
            cout<<" -> ";
        }
        temp=temp->prev;
    }
    cout<<endl;
}

void insertion_at_specific_position(Doubly_Node* &head,int pos ,int val)
{

    if(pos ==1)
    {

        insert_at_head(head,val);
        return;
    }
    Doubly_Node *new_node =new Doubly_Node(val);
    Doubly_Node *temp =head;
    int i =1;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    Doubly_Node *t =temp->next;
//    t->prev =new_node;
//    new_node->next=t;
    temp->next=new_node;
    new_node->prev=temp;


}

void deletion_at_head(Doubly_Node* &head)
{
    Doubly_Node *temp =head;
    if(temp!=NULL)
    {
        Doubly_Node* t=temp->next;
        head=t;
        t->prev=NULL;
        delete temp;
    }
    else
    {
        cout<<"there is no value in the list"<<endl;
    }
}

void delete_at_tail(Doubly_Node * &head)
{
    Doubly_Node *temp =head;
    if(temp!=NULL&&temp->next!=NULL)
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        Doubly_Node *del =temp->next;
        temp->next =NULL;
        delete del;
    }
    else
    {
        if(temp==NULL)cout<<"there is no value in the list"<<endl;
        else if(temp->next==NULL) deletion_at_head(temp);
    }
}


void delete_at_specific_position(Doubly_Node*&head,int pos)
{
    Doubly_Node *temp =head;
    if(temp!=NULL&&pos<=linked_list_length(head))
    {
        if(pos==1)deletion_at_head(head);
        else if(pos==linked_list_length(head)) delete_at_tail(head);
        else{
            int i =1;
            while(i<pos-1)
            {
                temp=temp->next;
                i++;
            }
            Doubly_Node *del =temp->next;
            Doubly_Node *t = del->next;
            temp->next=t;
            t->prev=temp;
            delete del;
        }
    }else{
        cout<<"position out of the linked list range"<<endl;
    }

}

int main()
{
    Doubly_Node * head = NULL;
    int n;
    int pos;
    int c=2;
    cout<<"choice 1 for insert at head "<<endl;
    cout<<"choice 2 for insert at tail "<<endl;
    cout<<"choice 3 for print reverse "<<endl;
    cout<<"choice 4 for delete at tail "<<endl;
    cout<<"choice 0 for end"<<endl;
    cout<<endl;
     while(c!=0)
    {
        cout<<"enter choice ";
        cin>>c;

        switch(c)
        {
        case 1:
            cout<<"enter num ";
            cin>>n;
            insert_at_head(head,n);
            break;
        case 2:
            cout<<"enter num ";
            cin>>n;
            insert_at_tail(head,n);
            break;
        case 3:
            display_reverse(head);
            break;
        case 4:
            delete_at_tail(head);
            break;
        default:
            break;
        }
    }
    cout<<endl;
    print_linked_list(head);
    cout<<endl<<linked_list_length(head);

    return 0;
}
