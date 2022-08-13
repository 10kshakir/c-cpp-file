#include <iostream>
#include <string>

using namespace std;
class Student
{
protected:
    int english_marks;
private:

    string password;
public:
    string name;
    char section;
    int roll;
public:
//   // setting up the constructor
//    Student(string nam,char sectio,int rol,int english_mark,string passwor)
//    {
//        name =nam;
//        section =sectio;
//        roll =rol;
//        english_marks =english_mark;
//        password =passwor;
//    }

    //set English mark of student
    void set_marks(int n)
    {

        english_marks =n;
    }

    //set student password;
    void set_password(string d)
    {

        password =d;
    }

    //get password
    string getPass()
    {
        return password;
    }
    // to get the  mark of english
    int get_marks()
    {
        return english_marks;
    }

    //check student id


    //updating the marks
    void update_marks(string d,int n)
    {
        if(d==password)
        {
            english_marks =n;
            cout<<"marks updated"<<endl;

        }else{
            cout<<"password didn't match,"<<endl;
        }
    }

};

int main()
{
    int n;
    cin>>n;
    Student id[n];
    for(int i =0;i<n;i++)
    {
        int mark;
        string pass;
        cin>>id[i].name>>id[i].section>>id[i].roll>>mark>>pass;
        id[i].set_marks(mark);
        id[i].set_password(pass);
    }

    cout<<"write your roll marks and password"<<endl;
    int roll;
    cout<<"enter your roll"<<endl;
    cin>>roll;
    int mark;
    cout<<"enter your mark"<<endl;
    cin>>mark;
    string pass;
    cout<<"enter your password"<<endl;
    cin>>pass;
    for(int i =0;i<n;i++)
    {
        string p =id[i].getPass();
        int m =id[i].get_marks();
        if(id[i].roll==roll&&mark==m&&p==pass)
        {
            cout<<"to update your marks enter password and mark"<<endl;
            string pp;
            int mm ;
            cin>>pp>>mm;
            id[i].update_marks(pp,mm);

        }else{
            cout<<"data coudn't found"<<endl;
        }
    }


//    for(int i =0;i<n;i++)
//    {
//
//        int mark=id[i].get_marks();
//        cout<<id[i].name<<id[i].section<<id[i].roll<<mark<<endl;
//    }
    return 0;
}

