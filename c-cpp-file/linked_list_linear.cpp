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

struct test
{
    int position[1000];
};

int find_mid(Node * &head)
{
    Node *fast =head;
    Node *slow =head;
    if (head!=NULL)
    {
        while (fast != NULL && fast->next != NULL)
        {
                fast = fast->next->next;
                slow = slow->next;
        }
        return slow->value;
    }

    return-1;


}

void insert_at_head(Node* &head,int n)
{
    Node *new_node =new Node(n);

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



    reversedListPrint(n->next);

    if(n->next!=NULL)
    {cout<< " -> ";}
    cout << n->value ;

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

    if(pos ==1)
    {

        insert_at_head(head,val);
        return;
    }
    Node *new_node =new Node(val);
    Node *temp =head;
    int i =1;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    new_node->next=temp->next;
    temp->next=new_node;


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

test search_value_dl_return(Node *&head,int key)
{

    test t ;
    int k =1;
    Node *temp =head;
    int count =1;
    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            t.position[k]=count;
            k++;
        }
        temp=temp->next;
        count++;
    }
    t.position[0]=k;
    return t;

}

void implement_value_after_specific_value(Node*&head,int search_value,int value)
{
    Node *temp =head;
    Node* new_node =new Node(value);
    while(temp->value!=search_value)
    {
        temp=temp->next;
    }

    new_node->next=temp->next;
    temp->next=new_node;

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

void delete_at_tail(Node * &head)
{
    Node *temp =head;
    if(temp!=NULL&&temp->next!=NULL)
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        Node *del =temp->next;
        temp->next =NULL;
        delete del;
    }
    else
    {
        if(temp==NULL)cout<<"there is no value in the list"<<endl;
        else if(temp->next==NULL) delete_at_head(temp);
    }
}

void delete_at_specific_position(Node*&head,int pos)
{
    Node *temp =head;
    if(temp!=NULL&&pos<=linked_list_length(head))
    {
        if(pos==1)delete_at_head(head);
        else if(pos==linked_list_length(head)) delete_at_tail(head);
        else{
            int i =1;
            while(i<pos-1)
            {
                temp=temp->next;
                i++;
            }
            Node *del =temp->next;
            temp->next=del->next;
            delete del;
        }
    }else{
        cout<<"position out of the linked list range"<<endl;
    }

}

void delete_by_value_ul(Node* &head,int value)
{
    int pos ;
    pos =search_value_ul(head,value);
    if(pos!=-1)
    {
        delete_at_specific_position(head,pos);
    }else{
        cout<<"value not in the list"<<endl;
    }
}


test delete_by_value_dl(Node * &head,int key)
{
    test t ;
    int k =1;
    Node *temp =head;
    int count =1;
    int value ;
    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            value =key;
            t.position[k]=count;
            k++;
        }
        temp=temp->next;
        count++;
    }
 if(value==key)
 {
     delete_at_specific_position(head,t.position[1]);

    t.position[0]=k;
    for(int i =t.position[1];i<t.position[0];i++)
            {
                t.position[i]=t.position[i+1];
            }
            k--;
    t.position[0]=k;
     for(int i =t.position[1];i<t.position[0];i++)
            {
                t.position[i]--;
            }
    return t;

 }else{
    t.position[0]=0;
    delete_by_value_ul(head,key);
    return t;
 }

}

Node * reverse_non_recursive(Node*&head)
{
    Node* prev =NULL;
    Node* current=head;
    if(head==NULL) return head;
    Node* next =head->next;

    while(true)
    {
        current->next=prev;
        prev=current;
        current=next;
        if(current==NULL)break;
        next=next->next;
    }


    return prev;
}

Node* reverse_recursive(Node*&head)
{
    if(head ==NULL||head->next ==NULL)return head;

    Node *new_head = reverse_recursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return new_head;
}



int main()
{
    Node * head = NULL;
    int n;
    int pos;
    bool  detect;
    int c;
    cout<<"choice 1 for insert at head "<<endl;
    cout<<"choice 2 for insert at tail "<<endl;
    cout<<"choice 3 for insert at specific position "<<endl;
    cout<<"choice 4 for search value (unique list) "<<endl;
    cout<<"choice 5 for search value (duplicate element list) "<<endl;
    cout<<"choice 6 for insert after specific value"<<endl;
    cout<<"choice 7 for delete head"<<endl;
    cout<<"choice 8 for delete tail"<<endl;
    cout<<"choice 9 for delete at specific position"<<endl;
    cout<<"choice 10 for delete by value"<<endl;
    cout<<"choice 11 for delete by value  duplication list"<<endl;
    cout<<"choice 12 for reverse a list non recursive way"<<endl;
    cout<<"choice 13 for print mid"<<endl;
    cout<<"choice 0 to end  "<<endl;
    cout<<"enter choice ";
    cin>>c;

    while(c!=0)
    {


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

            test t ;
            t=search_value_dl_return(head,n);
            if(t.position[0]==1)
            {
                cout<<"the number not found in the list"<<endl;
            }else{
                int size =t.position[0];
                cout<<"the number at the position ";
                for(int i =1;i<size;i++)
                {
                    cout<<t.position[i];
                    if(i<size-1)
                    {
                        cout<<",";
                    }
                }
            }
            cout<<endl;
            break;
        case 6:
            int after_value;
            cout<<"enter the value you want to search : ";
            cin>>after_value;
            int value;
            cout<<"enter the value you want implement : ";
            cin>>value;
            implement_value_after_specific_value(head, after_value, value);
            break;
        case 7:
            delete_at_head(head);
            break;
        case 8:
            delete_at_tail(head);
            break;
        case 9:
            if(head==NULL)cout<<"there is nothing on the list"<<endl;
            cout<<"enter desire position to delete ";
            int pos_to_delete;
            cin>>pos_to_delete;
            delete_at_specific_position(head,pos_to_delete);
            break;
        case 10:
            int delet_by_value;
            cout<<"enter value you want to delete";
            cin>>delet_by_value;
            delete_by_value_ul(head,delet_by_value);
            break;
        case 11:
            int deletion_value;
            cout<<"Enter the value you  want to delete : ";
            cin>>deletion_value;
            test te;
            te =delete_by_value_dl(head,deletion_value);
            break;
        case 12:
            head =reverse_non_recursive(head);
            break;
        case 13:
            int mid;
            mid =find_mid(head);
            if(mid ==-1)cout<<"the list is empty"<<endl;
            cout<<"middle integer  of the  list is "<<mid<<endl;

            break;
        default:
           break;
        }
        cout<<"enter choice ";
        cin>>c;



    }

    print_linked_list(head);
    cout<<endl<<linked_list_length(head);
    return 0;
}
