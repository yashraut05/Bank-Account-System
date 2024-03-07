#include <iostream>

using namespace std;

class BankAcount
{
    public:
    string firstname;
    string lastname;
    string mothername;
    string address;
    string username,password;
    string accountType;
    double Balance=0;
    double DepositAmount;
    double WithdrawalAmount;
    double TransferAmount;
    string Uperson;
    string newName;
    string newPassword;
    string newfirstname;
    string newlastname;
    string newmothername;
    string newaddress;
    string choice1;
    string choice2;
    string choice3;
    string choice4;
    string choice5;
    string choice6;


     double getBalance()
     {
         return Balance;
     }

     string getUserName()
     {
          return username;
     }

    void createAcount()
    {
        int ch;

        cout<<"*****CREATE ACCOUNT*****"<<endl;
        cout<<"ENTER YOUR FIRST NAME: ";
        cin>>firstname;
        cout<<"OK...."<<endl;
        cout<<"ENTER YOUR LAST NAME: ";
        cin>>lastname;
        cout<<"OK...."<<endl;
        cout<<"ENTER YOUR MOTHER NAME: ";
        cin>>mothername;
        cout<<"OK...."<<endl;
        cout<<"ENTER YOUR ADDRESS: ";
        cin>>address;
        cout<<"OK...."<<endl<<endl;

        cout<<"*****SELECT ACCOUNT TYPE*****"<<endl;
        cout<<"1.SAVING ACCOUNT"<<endl;
        cout<<"2.CURRENT ACCOUNT"<<endl;
        cout<<"0.BACK TO MAIN MENU"<<endl<<endl;
        cout<<"ENTER YOUR CHOICE: ";
        cin>>ch;
        switch(ch)
       {
        case 1:

        accountType="SAVING ACCOUNT";
        cout<<"GENRATING..."<<endl<<endl;
        break;

        case 2:
        accountType="CURRENT ACCOUNT";
        cout<<"GENRATING...."<<endl<<endl;
        break;

        case 0:
        cout<<"BACK TO MAIN MENU"<<endl<<endl;
        break;

        default:
           {
            cout<<"INVALIED CHOICE"<<endl;
           }
      }


      cout<<"CREATE USERNAME: ";
      cin>>username;
      cout<<"CREATE PASSWORD: ";
      cin>>password;
      cout<<endl;
      cout<<"ACCOUNT CREATED SUCCESSFULLY..."<<endl<<endl;
      }



      int loginAccount(string name,string pass)
      {

          if(name==username && pass==password)
          {
              cout<<"LOGIN SUCCESSFULLY..."<<endl<<endl;
              cout<<"WELCOME"<<" "<<firstname<<endl;
              return 0;
          }

          else
          {
              return 1;
          }

          return 0;


      }

      void checkBalance()
      {
          cout<<"*****BALANCE DASHBOARD*****"<<endl<<endl;
          cout<<"ACCOUNT BALANCE: "<<Balance<<endl<<endl;
          cout<<"OK..."<<endl<<endl;

      }

      void depositCash()
      {
          cout<<"*****DEPOSIT CASH*****"<<endl<<endl;
          cout<<"CURRENT BALANCE: "<<Balance<<endl;
          cout<<"ENTER DEPOSIT AMOUNT: ";
          cin>>DepositAmount;
          Balance=Balance + DepositAmount;
          cout<<"CASH DEPOSIT: "<<DepositAmount<<endl;
          cout<<"CASH DEPOSIT SUCCESSFULL..."<<endl<<endl;
          cout<<"OK..."<<endl<<endl;

      }

      void withdrawalCash()
      {
         cout<<"*****WITHDRAWAL CASH*****"<<endl<<endl;
         cout<<"CURRENT BALANCE: "<<Balance<<endl;
         cout<<"ENTER WITHDRAWAL AMOUNT: ";
         cin>>WithdrawalAmount;
         Balance=Balance - WithdrawalAmount;
         cout<<"CASH WITHDRAWAL: "<<WithdrawalAmount<<endl;
         cout<<"WITHDRAWAL AMOUNT SUCCESSFULL..."<<endl<<endl;
         cout<<"OK..."<<endl<<endl;
      }

      void reciveMoney(int transBal)
      {
          Balance+=transBal;
          cout<<"AMOUNT TRANSFERED SUCCESSFULYY...."<<endl;
          cout<<"OK..."<<endl;
      }

      void sendMoney(int transBal)
      {
          Balance-=transBal;
      }


      void accountInfo()
      {
          cout<<"*****ACCOUNT INFORMATION*****"<<endl<<endl;
          cout<<"ACCOUNT TYPE: "<<accountType<<endl;
          cout<<"USER NAME   : "<<username<<endl;
          cout<<"PASSWORD    : "<<password<<endl<<endl;

          cout<<"FIRST NAME  : "<<firstname<<endl;
          cout<<"LAST NAME   : "<<lastname<<endl;
          cout<<"MOTHER NAEM : "<<mothername<<endl;
          cout<<"ADDRESS     : "<<address<<endl<<endl;

          cout<<"OK..."<<endl<<endl;

      }

      void usernameChange()
      {
        cout<<"*****USERNAME CHANGE*****"<<endl<<endl;
        cout<<"CURRENT NAME IS: "<<username<<endl;
        cout<<"ENTER THE NEW NAME: ";
        cin>>newName;
        cout<<endl;
        cout<<"DO YOU REALLY WANT TO CHANGE "<<username<<" ""to"" "<<newName<< "?(YES/NO):"<<endl;
        cin>>choice1;

        if(choice1=="YES")
        {
            username=newName;
            cout<<"NAME IS UPDATED." " NEW NAME IS: "<<username<<endl;
        }

        else if(choice1=="NO")
        {
            cout<<"NAME IS NOT UPDATED." " CURRENT NAME IS STILL: "<<username<<endl;
        }

      }

      void passwordChange()
      {
          cout<<"*****PASSWORD CHANGE*****"<<endl<<endl;
          cout<<"CURRENT PASSWORD IS: "<<password<<endl;
          cout<<"ENTER THE NEW PASSWORD: ";
          cin>>newPassword;
          cout<<endl;
          cout<<"DO YOU REALLY WANT TO CHANGE "<<password<<" ""to"" "<<newPassword<< "?(YES/N0):"<<endl;
          cin>>choice2;

          if(choice2=="YES")
          {
              password=newPassword;
              cout<<"PASSWORD IS UPDATED." " NEW PASSWORD IS: "<<password<<endl;

          }

          else if(choice2=="NO")
          {
              cout<<"PASSWORD IS NOT UPDATED." " CURRENT PASSWORD IS STILL: "<<password<<endl;
          }
      }
      void firstnameChange()
      {
          cout<<"*****FIRST NAME CHANGE*****"<<endl;
          cout<<"CURRENT FIRST NAME IS: "<<firstname<<endl;
          cout<<"ENTER THE NEW FIRST NAME: ";
          cin>>newfirstname;
          cout<<endl;
          cout<<"DO YOU REALLY WANT TO CHANGE "<<firstname<<" ""to"" "<<newfirstname<< "?(YES/NO):"<<endl;
          cin>>choice3;

          if(choice3=="YES")
          {
               firstname=newfirstname;
               cout<<"FIRST NAME IS UPDATED." "NEW FIRST NAME IS: "<<firstname<<endl;
          }

          else if(choice3=="NO")
          {
              cout<<"FIRST NAME IS NOT UPDATED." "CURRENT FIRST NAME IS STILL: "<<firstname<<endl;
          }

      }

      void lastnameChange()
      {
          cout<<"*****LAST NAME CHANGE*****"<<endl;
          cout<<"CURRENT LAST NAME IS: "<<lastname<<endl;
          cout<<"ENTER THE NEW LAST NAME: ";
          cin>>newlastname;
          cout<<endl;
          cout<<"DO YOU REALLY WANT TO CHANGE "<<lastname<<" ""to"" "<<newlastname<< "?(YES/NO):"<<endl;
          cin>>choice4;

          if(choice4=="YES")
          {
              lastname=newlastname;
              cout<<"LAST NAME IS UPDATED." "NEW LAST NAME IS: "<<lastname<<endl;

          }

          else if(choice4=="NO")
          {
              cout<<"LAST NAME IS NOT UPDATED." "CURRENT LAST NAME IS STILL: "<<lastname<<endl;
          }
      }

      void mothernameChange()
      {
          cout<<"*****MOTHER NAME CHANGE*****"<<endl;
          cout<<"CURRENT MOTHER NAME IS: "<<mothername<<endl;
          cout<<"ENTER THE NEW MOTHER NAME: ";
          cin>>newmothername;
          cout<<endl;
          cout<<"DO YOU REALLY WANT TO CHANGE "<<mothername<<" ""to"" "<<newmothername<< "?(YES/NO):"<<endl;
          cin>>choice5;

          if(choice5=="YES")
          {
              mothername=newmothername;
              cout<<"MOTHER NAME IS UPDATED." "NEW MOTHER NAME IS: "<<mothername<<endl;
          }

          else if(choice5=="NO")
          {
             cout<<"MOTHER NAME IS NOT UPDATED." "CURRENT MOTHER NAME IS STILL: "<<mothername<<endl;
          }
      }

      void addressChange()
      {
          cout<<"*****ADDRESS CHANGE*****"<<endl;
          cout<<"CURRENT ADDRESS NAME IS: "<<address<<endl;
          cout<<"ENTER THE NEW ADDRESS NAME: ";
          cin>>newaddress;
          cout<<endl;
          cout<<"DO YOU REALLY WANT TO CHANGE "<<address<<" ""to"" "<<newaddress<< "?(YES/NO):"<<endl;
          cin>>choice6;

          if(choice6=="YES")
          {
              address=newaddress;
              cout<<"ADDRESS IS UPDATED." "NEW ADDRESS IS: "<<address<<endl;
          }

          else if(choice6=="NO")
          {
             cout<<"ADDRESS IS NOT UPDATED." "ADDRESS IS STILL: "<<address<<endl;
          }


      }






};


int main()
{
    int l=1,ch,k=1,M=1,n=0,i,j,a=0,ck,lu=0;
    BankAcount bank[2];
    string name,pass;
    double TransferAmount;

    cout<<"*****WELCOME TO BANK ACCOUNT SYSTEM*****"<<endl<<endl;
    while(l)
    {
     cout<<"1.CREATE NEW ACCOUNT"<<endl;
     cout<<"2.LOGIN"<<endl;
     cout<<"0.EXIT"<<endl;

     cout<<"ENTER YOUR CHOICE: ";
     cin>>ch;

     switch(ch)
     {
     case 1:

         bank[n].createAcount();
         n++;

     break;

     case 2:
         cout<<"*****ACCOUNT LOGIN*****"<<endl;
         cout<<"CREATE USERNAME: ";
         cin>>name;
         cout<<"CREATE PASSWORD: ";
         cin>>pass;

         for(i=0;i<n;i++)
         {
             ck=bank[i].loginAccount(name,pass);
             a=a+ck;

             if(ck==0)
             {
                 lu=i;
             }
         }
         if(a==n)
         {
             cout<<"INVALIED USERNAME PASSWORD"<<endl;
         }

         else
         {
            while(k)
    {
        cout<<"1.CHECK BALANCE"<<endl;
        cout<<"2.DEPOSIT AMMOUNT"<<endl;
        cout<<"3.WITHDRAWAL AMMOUNT"<<endl;
        cout<<"4.TRANSFER MONEY"<<endl;
        cout<<"5.ACCOUNT INFO"<<endl;
        cout<<"6.UPDATE INFO"<<endl;
        cout<<"0.EXIT"<<endl;

        cout<<"ENTER YOUR CHOICE: ";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            bank[lu].checkBalance();

            break;

        case 2:
            bank[lu].depositCash();
            break;

        case 3:
            bank[lu].withdrawalCash();
            break;

        case 4:
            cout<<"*****TRANSFER MONEY*****"<<endl;
            cout<<"CURRENT BALANCE: "<<bank[lu].getBalance()<<endl;
            cout<<"ENTER THE TRANSFER AMOUNT: ";
            cin>>TransferAmount;
            if(TransferAmount<bank[lu].getBalance())
            {
                cout<<"ENTER THE USERNAME OF PERSON: ";
                cin>>name;
                 for(j=0;j<n;j++)
                {
                      if(name==bank[j].getUserName())
                    {
                        bank[j].reciveMoney(TransferAmount);
                        bank[lu].sendMoney(TransferAmount);
                    }
                      else
                    {
                        cout<<"USERNAME IS WRONG.PLEASE ENTER CORRECT USERNAME"<<endl;
                        cout<<"AMOUNT TRANSACTION FAILED.."<<endl;
                    }
                }
            }

             else
            {
                cout<<"YOUR BALANCE IS LOW"<<endl<<endl;
            }
            break;


        case 5:
            bank[lu].accountInfo();
            break;
            cout<<endl;


        case 6:
            cout<<"UPDATE INFORMATION"<<endl;
            cout<<"1.ACCOUNT TYPE"<<endl;
            cout<<"2.USER NAME"<<endl;
            cout<<"3.PASSWORD"<<endl;
            cout<<"4.FIRST NAME"<<endl;
            cout<<"5.LAST NAME"<<endl;
            cout<<"6.MOTHER NAME"<<endl;
            cout<<"7.ADDRESS"<<endl;

            cout<<"ENTER YOUR CHOICE: ";
            cin>>ch;

            switch(ch)
            {
            case 2:
                bank[lu].usernameChange();
                break;

            case 3:
                bank[lu].passwordChange();
                break;

            case 4:
                bank[lu].firstnameChange();
                break;

            case 5:
                bank[lu].lastnameChange();
                break;

            case 6:
                bank[lu].mothernameChange();
                break;

            case 7:
                bank[lu].addressChange();
                break;
            }


            case 0:

                k=0;
                l=1;
                M=0;


              cout<<"Exit"<<endl;
              cout<<"THANK YOU !"<<endl;
             cout<<"FOR USING SYSTEM"<<endl;
        break;

        default:
        {
            cout<<"INVALIED CHOICE PLEASE TRY AGAIN"<<endl;
        }










         }











    }
         }






       }
    }


        return 0;
}
