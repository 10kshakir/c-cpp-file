#include<iostream>

using namespace std;

template <typename N>
class Node
{
public:
    N value;
    Node *next ;
    Node(N n)
    {
        value =n;
        next =NULL;
    }
};

template <typename Q>
class Queue
{
    Node<Q> *front;
    Node<Q> *back;
    int count ;
public:
    Queue()
    {
        front=NULL;
        back=NULL;
    }
    // enqueue ---> push
    void push (Q n)
    {
        Node<Q> *new_node =new Node<Q>(n);
        if(front==NULL)
        {
            front=new_node;
            back =new_node;
            count++;
            return;
        }

        back->next=new_node;
        back=back->next;
        count++;
    }
    // dequeue ---> pop
    Q pop()
    {
        Q value ;
        if(back ==NULL)
        {
            cout<<"Queue underflow";
            return value;
        }
        Node<Q> *del_node =front;
        front=front->next;
        if(front ==NULL)
        {
            back=NULL;
        }
        value =del_node->value;
        delete del_node;
        return value;
        count--;

    }
    // peek --->front,back
    Q return_front()
    {
       Q chk ;
        if(!empty())
        {
            chk =front->value;
            return chk;
        }
        return chk;
    }

    Q return_back()
    {
        Q chk ;
         if(!empty())
        {
            chk =back->value;
            return chk;
        }
        return chk;
    }
    //check empty
    bool empty()
    {
        if(front==NULL&&back==NULL)return true;
            else return false;
    }
    int size()
    {
        return count;
    }


};
