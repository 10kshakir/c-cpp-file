#include <iostream>

using namespace std;

class Student
{
public: //access modifier / specifier
    char name[100];
    int roll;
private:
    int y;
};
int main()
{
    Student Rahim;
    cin>>Rahim.name>>Rahim.roll;    //strcpy() to assigned name


    cout<<Rahim.name<<" "<<Rahim.roll;
    return 0;
}
