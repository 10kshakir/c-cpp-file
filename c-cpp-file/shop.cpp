#include <iostream>
#include <string>

using namespace std;

class Shop
{
private:
    int total_income;
public:



    string product_name[10];
    int product_price[10];
    int product_quantity[10];
    //set income
    void set_income(int n)
    {
        total_income =n;
    }
    // get income
    int get_income()
    {
        return total_income;
    }
    void update_income(int n)
    {
        total_income+=n;
    }
    bool check_quantity(int n,int i)
    {
        if(n<0)
        {
            cout<<"invalid amount"<<endl;
            return false;

        }else if(n>product_quantity[i])
        {
            cout<<"We have "<<product_quantity[i]<<" in stock"<<endl;
            return false;
        }else{
            product_quantity[i]-=n;
            return true;
        }



    }




};

Shop* creat_product(int n)
{
    Shop *own =new Shop;
    for(int i =0;i<n;i++)
    {
        cout<<"Product "<<i+1<<" name :";
        cin>>own->product_name[i];
        cout<<"Product "<<i+1<<" price :";
        cin>>own->product_price[i];
        cout<<"Product "<<i+1<<" quantity :";
        cin>>own->product_quantity[i];
    }
    return own;

}

void updat_income_func(int op,int quantity,Shop *own)
{
        cout<<own->product_name[op-1]<<" bought "<<quantity<<" pc successfully"<<endl;
        int income =own->product_price[op-1]*quantity;
        own->update_income(income);
        cout<<"your total income "<<own->get_income()<<endl;
}

void product_box(int n ,Shop *own)
{
     cout<<"                       Buy product              "<<endl;
     cout<<"                  ------------------          "<<endl;
     cout<<"             product index        ";
     for(int i =0;i<n;i++)
    {
        cout<<i+1<<"\t\t";

    }
    cout<<endl;
    cout<<"             product  name       ";
    for(int i =0;i<n;i++)
    {
        cout<<own->product_name[i]<<"\t\t";
    }
    cout<<endl;
    cout<<"             product  price       ";
     for(int i =0;i<n;i++)
    {
        cout<<own->product_price[i]<<"\t\t";
    }
    cout<<endl;
    cout<<"             product  quantity    ";
     for(int i =0;i<n;i++)
    {
        cout<<own->product_quantity[i]<<"\t\t";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Number of products :";
    cin>>n;
    Shop *own=creat_product(n);
    own->set_income(0);




Flag:

    product_box(n,own);


    int op;
    cout<<"choose option from 1 to "<<n<<" : ";
    cin>>op;
    if(op>0&&op<=n)
    {
        cout<<"what is the quantity you want of "<<own->product_name[op-1]<<" :";
        int quantity;
        cin>>quantity;

        bool check =own->check_quantity(quantity,op-1);
        if(check ==true)
        {
            updat_income_func(op,quantity,own);
            goto Flag;
        }
        else{

            goto Flag;
        }

    }
    else{

        goto Flag;
    }

    return 0;
}
