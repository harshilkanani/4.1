#include<iostream>
#include<math.h>
using namespace std;

class account
{

protected:
      string c_name;
      int c_acc_no;
      string type_account;
      int bal;
public:
      account()
      {
        c_name=" ";
        c_acc_no=0;
        type_account=" ";
        bal=0;
      }
      void input()
      {
        cout<<"\nEnter c_name: ";
        getline(cin,c_name);
        cout<<"\nEnter c_acc_no: ";
        cin>>c_acc_no;
        cout<<"\nEnter account type: ";
        cin>>type_account;
        cout<<"\nEnter bal: ";cin>>bal;
      }
      void display()
	  {
            cout<<"\n Customer Name: "<<c_name;
            cout<<"\n Account Number: "<<c_acc_no;
            cout<<"\n Type: "<<type_account;
            cout<<"\n Balance: "<<bal;
      }
      void deposit()
	  {
            int amount_deposit;
            cout<<"\n Enter the amount to deposit: ";
            cin>>amount_deposit;
            bal=bal+amount_deposit;
      }
};
class saving_account:public account{
      int interest;
      public:

      int compound_interest()
	  {
         int time1,rate1;
         rate1=10;
         cout<<"\n Enter time:";
         cin>>time1;
         interest=bal*pow(1+rate1/100.0,time1)-bal;
         return interest;
      }

      void update_bal()
	  {
         bal=bal+compound_interest();
      }

      void withdrawal()
	  {
         int amount_withdrawn;
         cout<<"\n Enter amount to withdrawn: ";
         cin>>amount_withdrawn;
         if(bal>=amount_withdrawn){
               bal=bal- amount_withdrawn;
         }
         else
		 {
               cout<<"\n The amount cannot be withdrawn:";
         }
      }
  };

class current_account:public account
{
       int cheque_book;
       int penality;
       public:

       int min_bal()
	   {
          int ret1=1;
          if(bal<=500)
		  {
             penality=50;
             bal=bal-penality;
             ret1=0;
          }
          else
		  {
             cout<<"\n No penality imposed: ";
          }
          return ret1;
      }
      void withdrawal()
	  {
          int amount_withdrawal;
          cout<<"\n Enter the amount to withdrawn:";
          cin>>amount_withdrawal;
          int k=min_bal();
          if(k==1)
		  {
             if(bal>=amount_withdrawal)
             bal=bal- amount_withdrawal;
          }
          else
		  {
            cout<<"\n The amount cannot be withdrawn:";
          }
      }
   };

int  main()
{
      current_account c1;
      saving_account s1;
      c1.input();
      c1.display();
      c1.deposit();
      c1.display();
      c1.withdrawal();
      c1.display();
      s1.input();
      s1.display();
      s1.deposit();
      s1.display();
      s1.withdrawal();
      s1.display();
}   