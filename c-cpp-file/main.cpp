#include <iostream>

#include"MYSTACK.h"

using namespace std;

int global_id =100;

class Person
{
private:
    string Name;
    int id ;
    float salary;
public:
    Person()
    {
        Name="";
        id =-1;
        salary=-1;
    }

    void set_name(string name)
    {
        this->Name=name;
    }

    void set_salary(float salary)
    {
        this->salary=salary;
    }

    Person(string name,float salary)
    {
        set_name(name);
        set_salary(salary);
        this->id =global_id;
        global_id++;
    }

    string get_name()
    {
        return Name;
    }

    float get_salary()
    {
        return salary;
    }

    int get_id()
    {
        return id;
    }

    void print_person_deatails()
    {
        cout<<this->Name<<" | "<<this->id<<" | "<<this->salary<<" | "<<endl;
    }

};
int main()
{

    Stack <int>st;

//    Person a("Ahmad Shakir",785.5);
//    Person b("kurusaki  Ichigo",800.5);
//    Person c("Monkey D Luffy",30000.5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.mid();









//    Stack <pair<int ,char>> st;
//    st.push(make_pair(1,'a'));
//    st.push(make_pair(2,'b'));
//    st.push(make_pair(3,'c'));
//
//
////        while(!st.check_empty())
////        {
////            pair<int,char>ch;
////            ch= st.pop();
////            cout<<ch.first<< " | "<<ch.second<<endl;
////        }
//     if(!st.check_empty())
//     {
//            pair <int,char> ch;
//            ch= st.return_top();
//            cout<<ch.first<< " | "<<ch.second<<endl;
//
//     }
//     cout<<st.length()<<endl;
//    return 0;
}
