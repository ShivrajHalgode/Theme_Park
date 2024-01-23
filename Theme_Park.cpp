#include<iostream>
#include <cstdlib>
using namespace std;

class card
 {
  public:
  char name[50];
  string email;
  int age=0;
  long long  phone;
  string address;
  char gen[2];
  int amount;
  float height;
  void amount_checker();
    void enter()
    {
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"Enter Your Gender ('M'->Male and 'F' -> Female) :";
        cin>>gen;
        cout<<"Enter Age:";
        cin>>age;
        cout<<"Height(in feet):";
        cin>>height;
        // cout<<"Enter Your Phone Number:";
        // cin>>phone;
        cout<<"Enter Email:";
        cin>>email;
        cout<<"Address:";
        cin>>address;
        cout<<"Enter the amount you want to load in your card (not less than 3000 and upto 9000 only): ";
        cin>>amount;
        if(amount<=3000 || amount>9000)
        {
            amount_checker();
        }
        cout<<endl<<"--------------------------------------------------------------------"<<endl;
        cout<<"\tYour Card has been created.\n\tYou can check it by selecting display card...."<<endl;
        cout<<"--------------------------------------------------------------------------";

    }
    void disp()
   {
    cout<<endl;
    cout<<"-------------------CARD DETAILS-------------------------";
    cout<<endl;
    cout<<"Name: "<<name<<endl;
    string gender = (gen=="m") ? "Female" : "Male";
    cout<<"Gender: "<<gender<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Amount: " <<amount<<endl;
    cout<<"--------------------------------------------------------";
   }

};

void card :: amount_checker()
   {
        cout<<"You have entered less amount...."<<endl;
        cout<<"Enter Amount greater 3000 and less than 9000  : ";
        cin>>amount;
        if(amount<=3000 || amount>9000)
        {
            amount_checker();
        }

   }

class Ride : public card
{
    public:
    int ch1;
    void selectride()
    {
    cout<<"----------------------------------------RIDES OF THEME PARK-----------------------------------------------"<<endl;
    cout<<"1. Tilt-A-Whirl\n2.Carousel\n3.The Rotor\n4.The Haunted Mansion\n5.Log Rides\n6.It is a Small World"<<endl<<endl;
    cout<<"Select Your Ride : ";
    cin>>ch1;

    switch (ch1)
    {
    case 1:
            if (height >= 3.8 )
            {
                cout<<"You are eligble.."<<endl;
            }
            else
            {
                cout<<"Sorry you are not eligible...."<<endl;
            }
            break;
    case 2:
            if(height >= 3.1 && height <= 4.8 )
            {
                cout<<"You are eligble..."<<endl;
            }
            else
            {
                cout<<"You are not eligble..."<<endl;
            }
            break;
    case 3: if (height >= 3.4)
            {
                cout<<"You are not eligble...."<<endl;
            }
            else
            {
                cout<<"You are not elible....."<<endl;
            }
            break;
    case 4:
            if (height >= 3.0)
            {
                cout<<"You are not eligble...."<<endl;
            }
            else
            {
                cout<<"You are not elible....."<<endl;
            }
            break;
    case 5 :
            if (height >= 4.2)
            {
                cout<<"You are not eligble...."<<endl;
            }
            else
            {
                cout<<"You are not elible....."<<endl;
            }
            break;
    case 6 :
            if (height >= 4.0)
            {
                cout<<"You are not eligble...."<<endl;
            }
            else
            {
                cout<<"You are not elible....."<<endl;
            }
            break;

    default:
        cout<<"Wrong Input.......";
            break;
    }
    }

};

class FoodCourt : public Ride
{
    public:
    int total_amount=0;
    int selected_choice[20],i=0;
    int ch2, k;
    void foodmenu()
        {
        cout<<"AVAILABEL BALANCE :"<<amount;
        cout<<endl;
        cout<<"-----------------FOOD MENU-------------------"<<endl;
        cout<<"-------DESERTS-------"<<endl;
        cout<<"1.Fruit Cup\t\t100rs\n2.Truffle\t\t200rs\n3.Black Forest Pastry\t80rs/pic\n4.Vanilla Cup cake\t165rs\n5.Marbled Muffin\t150rs\n6.Gulab Jamun\t190rs"<<endl;
        cout<<"---------------------"<<endl;
        cout<<endl;
        cout<<"------COLD BEVERAGES-------"<<endl;
        cout<<"7.Mango Lassi\t\t160rs\n8.Choco Milkshake\t70rs\n9.Cold Coffee\t\t90rs\n10.Nimbu Paani\t\t40rs\n11.Packaged Water\t30rs"<<endl;
        cout<<"---------------------------"<<endl;
        cout<<endl;
        cout<<"-------MAIN COURSE----------"<<endl;
        cout<<"12.Pav Bhaji\t\t160rs\n13.Chole Bhature\t200rs\n14.Aloo Parathe\t\t80rs\n15.Masla Uttapam\t100rs\n16.Medu Vada\t\t50rs\n17.Masala Upma\t\t60rs"<<endl;
        cout<<"----------------------------"<<endl;
        cout<<endl;
        cout<<"Enter Choice to order :";
        cin>>ch2;

            while (ch2!=0)
            {
                if (ch2 == 1)
                {

                    total_amount +=100;
                }
                else if(ch2 == 2)
                {
                    total_amount += 200;
                }
                else if(ch2 == 3)
                {
                    total_amount +=80;
                }
                else if(ch2 == 4)
                {
                    total_amount +=165;
                }
                else if(ch2 == 5)
                {
                    total_amount +=150;
                }
                else if(ch2 == 6)
                {
                    total_amount +=190;
                }
                else if(ch2 == 7)
                {
                    total_amount +=160;
                }
                else if(ch2 == 8)
                {
                    total_amount +=70;
                }
                else if(ch2 == 9)
                {
                    total_amount +=90;
                }
                else if(ch2 == 10)
                {
                    total_amount +=40;
                }
                else if(ch2 == 11)
                {
                    total_amount +=30;
                }
                else if(ch2 == 12)
                {
                    total_amount +=160;
                }
                else if(ch2 == 13)
                {
                    total_amount +=200;
                }
                else if(ch2 == 14)
                {
                    total_amount +=80;
                }
                else if(ch2 == 15)
                {
                    total_amount +=100;
                }
                else if(ch2 == 16)
                {
                    total_amount +=50;
                }
                else if(ch2 == 17)
                {
                    total_amount +=60;
                }
                selected_choice[i]=ch2;
                i++;

                cout<<"Anything else to add in cart or exit(0) :";
                cin>>ch2;

            }
            amount -= total_amount;
            cout<<endl;
            cout<<"---------FINAL ORDER-----------"<<endl;

            for(k = 0; k < i; k++)
            {
                if (selected_choice[k] == 1)
                {
                    cout<<"Fruit Cup              100 rs"<<endl;
                }
                else if(selected_choice[k] == 2)
                {
                    cout<<"Truffle Brownie        200 rs"<<endl;
                }
                else if(selected_choice[k] == 3)
                {
                    cout<<"Black Forest Pastry    80 rs"<<endl;
                }
                else if(selected_choice[k] == 4)
                {
                    cout<<"Vanilla Cupcake        165 rs"<<endl;
                }
                else if(selected_choice[k] == 5)
                {
                    cout<<"Marble Muffin          150 rs"<<endl;
                }
                else if(selected_choice[k] == 6)
                {
                    cout<<"Gulab Jamun            190 rs"<<endl;
                }
                else if(selected_choice[k] == 7)
                {
                    cout<<"Mango Lassi            160 rs"<<endl;
                }
                else if(selected_choice[k] == 8)
                {
                    cout<<"Choco Milkshake        70 rs"<<endl;
                }
                else if(selected_choice[k] == 9)
                {
                    cout<<"Cold Coffee            90 rs"<<endl;
                }
                else if(selected_choice[k] == 10)
                {
                    cout<<"Nimbu Pani             40 rs"<<endl;
                }
                else if(selected_choice[k] == 11)
                {
                    cout<<"Package Water          30 rs"<<endl;
                }
                else if(selected_choice[k] == 12)
                {
                    cout<<"Pav Bhaji              160 rs"<<endl;
                }
                else if(selected_choice[k] == 13)
                {
                    cout<<"Chole Bhature          200 rs"<<endl;
                }
                else if(selected_choice[k] == 14)
                {
                    cout<<"Aloo Parathe           80 rs"<<endl;
                }
                else if(selected_choice[k] == 15)
                {
                    cout<<"Masala Uttappam        100 rs"<<endl;
                }
                else if(selected_choice[k] == 16)
                {
                    cout<<"Medu Vada              200 rs"<<endl;
                }
                else if(selected_choice[k] == 17)
                {
                    cout<<"Masala Upma            60 rs"<<endl;
                }
            }
            cout<<"-------------------------------------------------"<<endl;
            cout<<"Total Amount         "<<total_amount<<endl;
            cout<<"----------------------------------------------"<<endl;

        }

};
class Ticket : public FoodCourt
{
    public:
    long long id;

    Ticket(long long id)
    {
        id = id;
    }

     void disp()
   {
    cout<<endl;
    cout<<"-------------------CARD DETAILS-------------------------";
    cout<<endl;
    cout<<"Id :"<<id<<endl;
    cout<<"Name: "<<name<<endl;
    string gender = (gen=="m") ? "Female" : "Male";
    cout<<"Gender: "<<gender<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Amount: " <<amount<<endl;
    cout<<"--------------------------------------------------------";
   }
    void tickettype()
    {
        int ticket_ch;
        int yn;
        cout<<"\n\t\tTICKET PRICE AND PACKAGES "<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
        cout<<"|1| Regular Ticket | General(6 years & above) |  RS 1,999/guest|"<<endl<<endl;
        cout<<"\t\t   |Sr.Citizen (60 years & above)| RS 1284/guest|"<<endl<<endl;
        cout<<"\t\t   |Pre-Schooler (3-5 Yrs)| RS 599/guest|"<<endl<<endl;

        cout<<"|2| Express Ticket | General(6 years & above) | RS 2,999/guest| "<<endl<<endl;
        cout<<"\t\t   |Sr.Citizen (60 years & above)| RS 2284/guest|"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
        cout<<"Enter your choice :";
        cin>>ticket_ch;

        if (ticket_ch == 1)
        {
        cout<<"Are you sure you want to purchase Regular Ticket.... (1->YES/2->NO) :";
        cin>>yn;
            if(yn==1)
            {
                    if(age>=6 && age<60)
                    {
                        amount = amount - 1999;
                        cout<<"Thank you for purschasing ticket\nEnjoy Your Ride......"<<endl;
                        cout<<"Available Amount :"<<amount<<endl;
                    }
                    else if (age>=60)
                    {
                        amount = amount - 1284;
                        cout<<"Thank you for purschasing ticket\nEnjoy Your Ride......"<<endl;
                        cout<<"Available Amount :"<<amount<<endl;

                    }
                    else if (age>=3 && age<=5)
                    {
                        amount = amount-599;
                        cout<<"Thank you for purschasing ticket\nEnjoy Your Ride......"<<endl;
                        cout<<"Available Amount :"<<amount<<endl;

                    }

            }
            else
            {
                cout<<"You can try our another package....";
                tickettype();
            }
        }
        else if (ticket_ch == 2)
        {
        cout<<"Are you sure you want to purchase Regular Ticket.... (1->YES/2->NO) :";
        cin>>yn;
            if(yn==1 || yn==1 )
            {
                    if(age>=6 && age<60)
                    {
                        amount = amount - 2999;
                        cout<<"Thank you for purschasing ticket\nEnjoy Your Ride......"<<endl;
                        cout<<"Available Amount :"<<amount;
                    }
                    else if (age>=60)
                    {
                        amount = amount - 2284;
                        cout<<"Thank you for purschasing ticket\nEnjoy Your Ride......"<<endl;
                        cout<<"available Amount :"<<amount;

                    }

            }
            else
            {
                cout<<"You can try our another package....";
            }
        }
        else
        {
            cout<<"Not valid input try again......";
        }
    }
};




int main()
{
    int ch;

    Ticket t1(rand()%1000000);

    do{
    cout<<"\n\n\t\t\t Raisoni's THEME PARK"<<endl;
    cout<<"Choose From Menu :\n";
    cout<<"1.Create a Card  \n2.Display a card record \n3.Book Ticket\n4.Check Criteria for a ride \n5.Food store\n6.Exit\n";
    cout<<"Enter a choice:";
    cin>>ch;

    switch(ch)
    {
        case 1:
                 t1.enter();
                    break;
        case 2:
                if (t1.age !=0)
                {
                   t1.disp();
                    break;
                }
                else
                {
                    cout<<"\n\t\t\tFirst Create a Card"<<endl;
                    break;
                }
                break;


        case 3:
                 if (t1.age !=0)
                {
                    t1.tickettype();

                }
                else
                {
                    cout<<"\n\t\t\tFirst Create a Card"<<endl;

                }
                break;
        case 4:
                if (t1.age !=0)
                {
                    t1.selectride();

                }
                else
                {
                    cout<<"\n\t\t\tFirst Create a Card"<<endl;

                }
               break;
        case 5:
                 if (t1.age !=0 && t1.amount>=500)
                {
                    t1.foodmenu();

                }
                else
                {
                    cout<<"\n\t\t\tFirst Create a Card"<<endl;

                }
               break;
            default :
                cout<<"You have entered a wrong choice......";

    };
    }while(ch!=7);
   return 0;
}

