#include <iostream>
#include <string>
#include <stdlib.h>



using namespace std;

class BankAccount
{
public:
    string account_holder;
    int account_number;
    int age;
protected:
    int account_balance;
private:
    string password;
public:
    BankAccount(){}
    BankAccount(string account_holder,int age,string password)
    {
        this->account_holder=account_holder;

        this->age=age;
        this->password =password;
        this->account_balance=0;
        this->account_number=rand()%1000000000;
        cout<<"your bank account number is "<<this->account_number<<endl;
    }
    int show_balance(string password)
    {
        if(this->password ==password)
        {
           return this->account_balance;
        }else{
            return -1;
        }
    }
    void add_money(string password,int money)
    {
        if(money<0)
        {
            cout<<"Invalid amount"<<endl;
            return;
        }

        if(password==this->password)
        {
            this->account_balance+=money;
            cout<<"account balance is updated"<<endl;
        }else {


            cout<<"your password didn't match"<<endl;
        }


    }

    void deposit_money(string password,int money)
    {
        if(money<0)
        {
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(money>this->account_balance)
        {
            cout<<"insufficient amount"<<endl;
            return;
        }
        if(password==this->password)
        {
            this->account_balance-=money;
            cout<<"deposit successful"<<endl;
        }else {


            cout<<"your password didn't match"<<endl;
        }


    }
    friend class MyCash;
};

// mycash


class MyCash
{
private:

    int balance;
public:
    MyCash()
    {
        this->balance=0;
    }
    void add_money(BankAccount *account,string pass,int amount)
    {
         if(amount<0)
        {
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(amount>account->account_balance)
        {
            cout<<"insufficient amount"<<endl;
            return;
        }
        if(account->password==pass)
        {
            this->balance +=amount;
            account->account_balance-=amount;
        }else{
            cout<<"password didn't match"<<endl;
        }

    }
    int return_money()
    {
        return balance;
    }
};






BankAccount* create_account( int n)
{
    BankAccount *myaccount =new BankAccount[n];
    for(int i =0;i<n;i++)
    {
        string account_hold,pass;
       int age;
       cout<<"enter account holder name ,age and pass :";
       cin>>account_hold>>age>>pass;
        myaccount[i] =BankAccount(account_hold,age,pass);

    }

    return myaccount;
}
void add_money(BankAccount *account)
{
    string pass;int n;
    cout<<"add money ";
    cin>>pass>>n;
    account->add_money(pass,n);
}
void dep_money(BankAccount *account)
{
    string pass;int n;
    cout<<"dep money ";
    cin>>pass>>n;
    account->deposit_money(pass,n);
}

void myCash(MyCash *cash,BankAccount *bank)
{
    string pass;int n;
    cout<<"add money for mycash ";
    cin>>pass>>n;
    cash->add_money(bank,pass,n);
    cout<<"your current MYCash balance is "<<cash->return_money()<<endl;
}
int main()
{

    BankAccount *new_account=create_account(2);

    cout<<new_account->account_holder
    cout<<new_account[1].account_holder<<endl;
    MyCash *new_cash=new MyCash();

    Flag:
        cout<<"option for customer services"<<endl;
        cout<<" 1.add money to account"<<endl;
        cout<<" 2.deposit money from account"<<endl;
        cout<<" 3.add money to MyCash"<<endl;
        int n;
        cin>>n;
        if(n==1)
        {
            add_money(new_account);
        }
        else if(n==2)
        {
            dep_money(new_account);
        }
        else if(n==3)
        {
            myCash(new_cash,new_account);
        }
        else
        {
            cout<<"invalid options"<<endl;
        }
        goto Flag;

    return 0;
}
