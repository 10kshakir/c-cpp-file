#include<iostream>

using namespace std;

template <typename N>
class Node
{
public:
    N value ;
    Node *next ;
    Node *prev;
    Node(N val)
    {
        value =val;
        next =NULL;
        prev =NULL;
    }
};

template <typename S>
class Stack
{
    Node<S> *head;
    Node<S> *top;
    int count =0;
public:
    Stack()
    {
        head =NULL;
        top =NULL;
    }

    void push(S n)
    {
      Node<S> *new_node =new Node<S>(n);
      if(head==NULL)
      {
          head =top =new_node;
          count++;
          return;
      }
      top ->next =new_node;
      new_node->prev = top;
      top =top->next;
      count++;

    }

    S pop()
    {
        Node<S> *del_Node = top;
        S chk;
        if(head==NULL)
        {
            return chk;
        }
        if(head==top)
        {
            head=top=NULL;
        }
        else{
            top =del_Node->prev;
            top->next =NULL;

        }

        count--;
        chk =del_Node->value;
        delete del_Node;
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
         Node <S> *temp=head;
        while(d--)
        {
           temp=temp->next;
        }
        return temp->value;
    }

};
