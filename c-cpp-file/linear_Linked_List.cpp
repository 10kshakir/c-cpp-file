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

void insert_at_head(Node* &head,int n)
{
    Node *new_node =new Node(n);
    if(head==NULL)
    {
        head =new_node;
        return;
    }

    new_node->next = head;

    head =new_node;
}

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
void reversedListPrint(Node* n)
{

    if (n == NULL)
    return;

    Node *temp =n;
    reversedListPrint(n->next);

    if(n->next!=NULL)
    {cout<< " -> ";}
    cout << n->value ;

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



int linked_list_length(Node * &head)
{
   int count =0;
   Node * temp =head;
   while(temp!=NULL)
   {
       temp=temp->next;
       count++;
   }
   return count;
}

void insertion_at_specific_position(Node* &head,int pos ,int val)
{
    if(pos==1)
    {
       Node *new_node =new Node(val);

        new_node->next = head;

        head =new_node;
        return;
    }
    Node *temp =head;
    Node *new_node =new Node(val);
    int i =0;
    while(i<pos-2)
    {
        temp=temp->next;
        i++;
    }
    new_node->next=temp->next;
    temp->next=new_node;

}

int  search_value_ul(Node* &head,int key)
{
    if(head==NULL)
    {
        return -1;
    }
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


void search_value_dl(Node *&head,int key)
{
    Node *temp =head;
    int size =linked_list_length(head);
    int position[size+1],k=1;
    int count =1;
    int flag =0;
    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            position[k]=count;
            k++;
            flag =1;
        }
        temp =temp->next;
        count++;

    }
    if(flag ==0)
    {
        cout<<"the number not found in the list"<<endl;
    }else
    {
        cout<<"the position of the number is ";
        position[0]=k;
        for(int i =1;i<position[0];i++)
        {
            cout<<position[i];
            if(i<position[0]-1)cout<<",";
        }
    }
}

int main()
{
    Node * head = NULL;
    int n;
    int pos;
    int c=2;
    cout<<"choice 1 for insert at head "<<endl;
    cout<<"choice 2 for insert at tail "<<endl;
    cout<<"choice 3 for insert at specific position "<<endl;
    cout<<"choice 4 for search value (unique list) "<<endl;
    cout<<"choice 5 for search value (duplicate element list) "<<endl;
    cout<<"choice 0 to end  "<<endl;

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
            cout<<"enter position : ";
            cin>>pos;
            cout<<"enter num ";
            cin>>n;
            insertion_at_specific_position(head,pos,n);
            break;
        case 4:
            cout<<"enter num ";
            cin>>n;
            pos =search_value_ul(head,n);
            if(pos!=-1)
            {
                cout<<"the position of the number is "<<pos<<endl;
            }else{cout<<"number not in the list"<<endl;}
            break;
        case 5:
            cout<<"enter num ";
            cin>>n;

            search_value_dl(head,n);
            cout<<endl;
            break;
        default:
           break;
        }



    }

    print_linked_list(head);
    cout<<endl<<linked_list_length(head);
    return 0;
}
