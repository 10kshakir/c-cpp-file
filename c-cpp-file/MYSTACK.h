#include <iostream>

using namespace std;

template <typename N> class doubly_Node
{
public:
    N value;
    doubly_Node* next;
    doubly_Node* prev;

    doubly_Node(N n)
    {
        value =n;
        next=NULL;
        prev=NULL;
    }

};

template <typename S> class Stack
{
public:
    doubly_Node <S> *head ;
    doubly_Node <S>  *top;
    int count =0;
public:
    //constructor
    Stack ()
    {
        head=NULL;
        top =NULL;
    }

    //push element in a stack
    void push(S n)
    {
        doubly_Node <S> *new_node =new  doubly_Node<S>(n);

        if(head==NULL)
        {
            head=top=new_node;
            count++;
            return;
        }

        top->next =new_node;
        new_node->prev =top;
        top=top->next;
        count++;
    }

    //pop element
    S pop()
    {
        doubly_Node <S> *del_node;
        del_node=top;
        S chk ;
        if(head==NULL)
        {

            return chk;

        }
        if(head==top)
        {
            head=top=NULL;

        }else{
            top=del_node->prev;
            top->next=NULL;

        }
        count--;
        chk=del_node->value;
        delete del_node;
        return chk;

    }

    // size

    int length()
    {
        return count;
    }

    //top

    S return_top()
    {
        S chk ;
        if(top==NULL)
        {

            return chk;
        }
        else{

            return top->value;
        }
    }
    //check empty
    bool check_empty()
    {
        if(head==NULL)return true;
        else return false;
    }
    S mid()
    {
        int  d = (count/2);
         doubly_Node <S> *temp=head;
        while(d--)
        {
           temp=temp->next;
        }
        return temp->value;
    }
};


