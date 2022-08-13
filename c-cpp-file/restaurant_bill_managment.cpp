#include  <iostream>
#include  <string>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;


class Restaurant
{
private:
   int total_tax;
public:

    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];

    //set tax
    void set_tax(int n)
    {
        total_tax =n;
    }

    //update tax
    void update_tax(int n)
    {
        total_tax+=n;
    }

    //get total tax
    int get_total_tax()
    {
        return total_tax;
    }

};

//input menu
Restaurant* input_menu(int n)
{
   Restaurant *menu =new Restaurant;
    for(int i =0;i<n;i++)
    {

        cin>>menu->food_item_codes[i];

        getchar();
        getline(cin,menu->food_item_names[i]);

        cin>>menu->food_item_prices[i];
    }
   return menu;
}

//taking table and item input
void table_item_input(int *a,int *b)
{
    cout<<"Enter your table number : ";
    cin>>*a;
    cout<<"Enter number of items : ";
    cin>>*b;

}

//showing menu
void showing_menu(Restaurant *menu,int n)
{
    cout<<"                      Make Bill"<<endl;
    cout<<"                  --------------------"<<endl;
    cout<<"Item code             Item name                   Item price"<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<menu->food_item_codes[i]<<"             "<<menu->food_item_names[i]<<"\t             "<<menu->food_item_prices[i]<<endl;
    }
    cout<<endl;
}


int main()
{
    int n;
    cin>>n;

    Restaurant *menu=input_menu(n);
    menu->set_tax(0);

Flag:
    showing_menu(menu,n);

    //takin input from user

    //table and how many item input
    int table_num,number_of_items;
    table_item_input(&table_num,&number_of_items);


    int items[number_of_items];
    int items_quantity[number_of_items];
    // user input for food code and quantity
    int indx =0;
    int item_number=1;
    while(indx<number_of_items)
    {
        cout<<"Enter Item "<<item_number<<" code : ";
        int code;
        int quantity;
        cin>>code;
        int d =0;
        for(int i =0;i<n;i++)
        {

            if(code==menu->food_item_codes[i])
            {
                items[indx]=code;

                cout<<"enter quantity : ";
                cin>>quantity;
                items_quantity[indx]=quantity;
                indx++;
                item_number++;
            }
            else{
                d++;

            }

            if(d==n)
            {
                cout<<"code not found in menu"<<endl;
            }
        }
    }

    //showing input from user
    cout<<"                                             Bill Summary"<<endl;
    cout<<"                                        ----------------------"<<endl;
    cout<<"Table no : "<<table_num<<endl;
    cout<<"Item code"<<"\tItem Name\t\t"<<"\tItem price"<<"\tItem quantity"<<"\t\t  Total price"<<endl;
    int total_price=0;
    for(int i =0;i<number_of_items;i++)
    {
        cout<<items[i];
        int price =0;
        for(int j =0;j<n;j++)
        {
            if(items[i]==menu->food_item_codes[j])
            {
                cout<<"\t\t"<<menu->food_item_names[j];
                cout<<" \t\t"<<menu->food_item_prices[j];
                price =menu->food_item_prices[j];
            }
        }

        cout<<"\t\t\t"<<items_quantity[i];

        cout<<"\t\t\t"<<price*items_quantity[i]<<endl;
        total_price+=price*items_quantity[i];


    }
    int tax =  round((total_price*5)/100);
    menu->update_tax(tax);
    cout<<"Tax\t\t\t\t\t\t\t\t\t\t\t\t"<<tax<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    total_price+=tax;
    cout<<"Net Total\t\t\t\t\t\t\t\t\t\t\t"<<total_price<<" Taka"<<endl;

//    cout<<menu->get_total_tax();
    cout<<endl;
    goto Flag;
    return 0;
}
