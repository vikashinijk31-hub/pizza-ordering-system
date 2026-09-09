#include <iostream>
using namespace std;

class pizza
{
public:
    int choice;
    int size;
    int cheese;
    int mushroom;
    int amount;

    void getdetails()
    {
        cout<<"choose pizza:"<<endl;
        cout<<"1.veg pizza"<<endl;
        cout<<"2.chicken pizza"<<endl;
        cout<<"choice:";
        cin>>choice;

        cout<<endl;

        cout<<"choose size:"<<endl;
        cout<<"1.small"<<endl;
        cout<<"2.medium"<<endl;
        cout<<"3.large"<<endl;
        cout<<"choice:";
        cin>>size;

        cout<<endl;

        cout<<"add cheese(1-Yes 2-No):";
        cin>>cheese;

        cout<<"add mushroom(1-Yes 2-No):";
        cin>>mushroom;
    }

    void calculateprice()
    {
        if(choice==1)
        {
            if(size==1)
                amount=120;
            else if(size==2)
                amount=150;
            else
                amount=180;
        }
        else
        {
            if(size==1)
                amount=160;
            else if(size==2)
                amount=190;
            else
                amount=220;
        }

        if(cheese==1)
            amount=amount+35;

        if(mushroom==1)
            amount=amount+50;
    }

    void display()
    {
        cout<<endl;
        cout<<"pizza order"<<endl;

        if(choice==1)
            cout<<"pizza type:veg pizza"<<endl;
        else
            cout<<"pizza type:chicken pizza"<<endl;

        if(size==1)
            cout<<"size:small"<<endl;
        else if(size==2)
            cout<<"size:medium"<<endl;
        else
            cout<<"size:large"<<endl;

        if(cheese==1)
            cout<<"cheese:yes"<<endl;
        else
            cout<<"cheese:no"<<endl;

        if(mushroom==1)
            cout<<"mushroom:Yes"<<endl;
        else
            cout<<"mushroom:no"<<endl;

        cout<<"total price:Rs."<<amount<<endl;

        cout<<"your pizza is being prepared!"<<endl;
    }
};

int main()
{
    pizza p;
    p.getdetails();
    p.calculateprice();
    p.display();
    return 0;
}
