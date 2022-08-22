#include <iostream>

using namespace std;

class Node
{
public:
    char value;
    Node* next;
    Node(char n)
    {
        value =n;
        next =NULL;
    }
};

Node* reverse_recursive(Node*&head)
{
   if(head==NULL||head->next==NULL) return head;

   Node* new_head =reverse_recursive(head->next);
   head->next->next=head;
   head->next =NULL;
   return new_head;
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

void insert_at_tail(Node* &head,char n)
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

bool check_palindrome(Node* &head)
{
    Node* temp =head;
    Node* new_head=reverse_recursive(head);
    Node* temp1 =new_head;

    while(temp1!=NULL&&temp!=NULL)
    {
        if( temp1->value!= temp->value )
        {
            return false;
        }
        temp=temp->next;
        temp1=temp1->next;
    }

    return true;


}

int main()
{
    int n;
    cin>>n;
    Node* head =NULL;

    for(int i =0;i<n;i++)
    {
        char c;
        cin>>c;
       insert_at_tail(head,c);
    }

   bool check =check_palindrome(head);
   if(check==true)
   {
       cout<<"It's palindrome"<<endl;
   }else{
       cout<<"It's not palindrome"<<endl;
   }
    return 0;
}
