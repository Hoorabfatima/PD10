#include <iostream>    
#include <windows.h>      
#include <conio.h> 
using namespace std;
void gotoxy(int x,int y);
int adminMenu();
int login();
void header();
string customerName[100];
string customerPassword[100];
string review,Mname,Mpassword,manName,manPassword;
int customerMenu();
int customerSignIn();
int customerlogIn();
int customeroptions();
int customerLogInMenu();
int managerMenu();
int adminLogInMenu();
int managerLogIn();
int managerLogInMenu();
int k;
string name,cat;
char t;
int ronum,p;
void managerDelete();
void addManger();
void customerActivities();
void customerDetails();
void managerActivities();
void adminLogIn();
void managerUpdate();
void checkOut();
void deleteCustomer();
void reviews();
void customerStatus();
void managerAdd();
void option1();
void option2();
void option3();
int i;
int room[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
int rooms=95;
string Uname[100],Upassword[100];
string category[100];
     char type[100];
     int days[100], price[100];
int main()
{
    int option,choice,cOption,value,c;
    bool ans=false,select=true;
    while(true)
 {
      system("cls");
      header();
      option=login();
      if(option==1)
       {
        c=adminMenu();
        if(c==1)
        {
          adminLogIn();
          while(true)
          {
           value=adminLogInMenu();
           if(value==1)
           {
            managerActivities();
            cout<<"Press any key to continue--";
              getch();
           }
           else if(value==2)
           {
            customerActivities();
            cout<<"Press any key to continue--";
              getch();
           }
           else if(value==3)
           {
            addManger();
            cout<<"Press any key to continue--";
              getch();
           }
           else if(value==4)
           {
            deleteCustomer();
             cout<<"Press any key to continue--";
            getch();
           }
           else if(value==5)
           {
            break;
           }
           else
           {
            cout<<"\tInvalid Input"<<endl<<endl;
            cout<<"Press any key to continue--";
            getch();
            break;
           }
           }
           continue;
        }
        else
        continue;
       }
       else if(option==2)
       {
        choice=managerMenu();
        if(choice==1)
        {
          managerLogIn();
          while(true)
          {
            value=managerLogInMenu();
           if(value==1)
           {
           customerDetails();
           cout<<"Press any key to continue--";
           getch();
           }
           else if(value==2)
           {
            managerAdd();
            cout<<"Press any key to continue--";
            getch();
           }
           else if(value==3)
           {
             managerDelete();
             cout<<"Press any key to continue--";
            getch();
           }
           else if(value==4)
           {
            managerUpdate();
            cout<<"Press any key to continue--";
            getch();
           }
           else if(value==5)
           {
            break;
           }
           else
           {
            cout<<"\tInvalid Input"<<endl<<endl;
            cout<<"Press any key to continue--";
            getch();
            break;
           }
         }
         continue;
        }
        else
        continue;
       }
      else if(option==3)
   {
      choice=customerMenu();
      while(choice!=3)
    {
      if(choice==1)
      {
        for(i=0;i<100;i++)
        { 
          customerSignIn();
          while(select!=false)
          {
           cOption=customeroptions();
           {
            if(cOption==1)
            {
              option1();
              cout<<"Press any key to continue--";
              getch();
           }
           else if(cOption==2)
           {
            option2();
            cout<<"Press any key to continue--";
              getch();
           }
           else if(cOption==3)
            {
              option3();
              cout<<"Press any key to continue--";
              getch();
            }
           else if(cOption==5)
           break;
           else
           break;
          }
         }
          cout<<"\tFor next customer Press 1 otherwise Press 0:";
         cin>>select;
         cout<<endl;
         if(select==1)
         continue;
         else
         break;
        }
        system("cls");
        header();
        break;
      }
      else if(choice==0)
      {
         customerlogIn();
          if(Uname[i]==customerName[i] && Upassword[i]==customerPassword[i])
         { 
           while(true)
           {
            value=customerLogInMenu();
            while(value!=4)
           {
            if(value==1)
            {
              customerStatus();
              cout<<"Press any key to continue--";
              getch();
              break;
            }
            else if(value==2)
            {
              reviews();
              cout<<"Press any key to continue--";
              getch();
              break;
            }
            else if(value==3)
            {
              checkOut();
              cout<<"Press any key to continue--";
              getch();
              break;
            }
            else
            {
              cout<<"invalid input!!"<<endl<<endl;
              cout<<"Renter option!!"<<endl<<endl;
              cout<<"Press any key to continue--";
              getch();
              continue;
            }
            break;
           }
           if(value==4)
           break;
           }
           break;
         }
          else
          {
          cout<<"\tInvalid Credentials!!"<<endl<<endl;
          cout<<"\tPlease renter!!"<<endl<<endl;
          cout<<"\tPress any key to continue--";
          getch();
          ans=false;
          continue;
         }
        
        continue;
      }
      else if(choice==2)
      {
        system("cls"); 
        header(); 
        break;
      }
      else
      {
      cout<<"Invalid Input"<<endl<<endl;
      cout<<"Enter valid option"<<endl<<endl;
      }
      continue;
    }
    }
    else if(option==4)
    {
      return 0;
    }
    else
    {
        cout<<"Invalid option!!";
        cout<<"Renter option.";
        cout<<"Press any key to continue--";
        getch();
        continue;
    }
    }
}
void header()                                                      //HEADER OF APPLICATION
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); 
    SetConsoleTextAttribute(h, 13); 
  int x=50;int y=1;
  gotoxy(x, y);
  cout<<"**************************************************"<<endl;
  gotoxy(x,y=y+1);                                         
  cout<<"^  |__| _ |_ _|  |\\/| _  _  _  _  _ _  _ _ |_    ^"<<endl;
  gotoxy(x,y=y+1);
  cout<<"^  |  |(_)|_(-|  |  |(_|| )(_|(_)(-|||(-| )|_    ^"<<endl;
  gotoxy(x,y=y+1);
  cout<<"^                             _/                 ^"<<endl;
  gotoxy(x,y=y+1);
  cout<<"^         __                     ^               ^"<<endl;
  gotoxy(x,y=y+1);
  cout<<"^        (_    _|_ _ _         /_ \\              ^"<<endl;
  gotoxy(x,y=y+1);
  cout<<"^        __)\\/_)|_(-|||        |_ |              ^"<<endl;
  gotoxy(x,y=y+1);
  cout<<"^           /                                    ^"<<endl;
  gotoxy(x,y=y+1);
  cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl<<endl<<endl<<endl;
SetConsoleTextAttribute(h,7);
}
void gotoxy(int x, int y)
{
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
int login()
{
HANDLE h= 
 GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(h,2);
  int ans;
  cout<<"\t\t\t\t\t\t\t\t\t|<LOGIN>|"<<endl<<endl;
SetConsoleTextAttribute(h,11);
  cout<<"\t1. As Admin"<<endl<<endl;
  cout<<"\t2. As Manager"<<endl<<endl;
  cout<<"\t3. As a Customer"<<endl<<endl;
  cout<<"\t4. Exit"<<endl<<endl;
SetConsoleTextAttribute(h,4);
  cout<<"Enter your option: ";
  cin>>ans;
  cout<<endl<<endl;
SetConsoleTextAttribute(h,7);
  return ans;
}   
int adminLogInMenu()
{
 system("cls");
  header();
  int opt;
  HANDLE h= 
 GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(h,2);
  cout<<"\t\t\t\t\t\t\t\t\t|<Admin LOGIN>|"<<endl<<endl;
  SetConsoleTextAttribute(h,11);
  cout<<"\t1.View manager's activities"<<endl<<endl;
  cout<<"\t2.View customer's activities"<<endl<<endl;
  cout<<"\t3.Add new manager"<<endl<<endl;
  cout<<"\t4.Delete customer data"<<endl<<endl;
  cout<<"\t5.Back to main menu"<<endl<<endl;
SetConsoleTextAttribute(h,4);
  cout<<"Enter your option: ";
  cin>>opt;
  return opt;
SetConsoleTextAttribute(h,7);
} 
int customerMenu()
{
int value;
system("cls");
header();
HANDLE h= 
 GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(h,11);
  cout<<"\tSign Up OR Login"<<endl<<endl;
  cout<<"\tPress 1 for Sign "<<endl<<endl;
  cout<<"\tPress 0 for Login"<<endl<<endl;
  cout<<"\tPress 2 to return to main menu"<<endl<<endl;
SetConsoleTextAttribute(h,4);
  cout<<"Your option: ";
  cin>>value;
  return value;
  }
int customerSignIn()
  {  
    int j; 
    system("cls");
    header();
    HANDLE h= 
 GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(h,2);
  cin.ignore();

    cout<<"\t\t\t\t\t\t\t\tCustomer Sign in"<<endl<<endl;
    SetConsoleTextAttribute(h,11);
  cout<<"\tEnter your name: ";
  getline(cin,customerName[i]);
  cout<<endl<<endl;
  while(true)
  {
    cout<<"\tSet password (Pasword must be of at least 8 characters.It may contain both numbers and characters): ";
    getline(cin, customerPassword[i]);
    if(customerPassword[i].length()<8)
    {SetConsoleTextAttribute(h,4);
      cout<<"\tInvalid Password!\n\tPlease renter"<<endl<<endl;
      cout<<"\tPress any key to continue--"<<endl<<endl;
      getch();
      SetConsoleTextAttribute(h,11);
    }
    else
    break;
  }
  cout<<endl<<endl;
  }
  int customeroptions()
  {
  int option;
  system("cls");
  header();
  HANDLE h= 
 GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cout<<"\t\t\t\t\t\t\t\t| Customer Menu |"<<endl<<endl;
  SetConsoleTextAttribute(h,4);
  cout<<"\t\t\t\t\tYou have signed in successfully"<<endl<<endl;
  cout<<"Select one of the following options number (1,2,3,4,5,6) :"<<endl<<endl;
  SetConsoleTextAttribute(h,11);
  cout<<"\t1. Display available rooms. "<<endl<<endl;
  cout<<"\t2. Display room status. "<<endl<<endl;
  cout<<"\t3. Check-IN"<<endl<<endl;
  //cout<<"\t5. Billing and payments"<<endl<<endl;
  cout<<"\t5. Back to main menu"<<endl<<endl;
  SetConsoleTextAttribute(h,4);
  cout<<"Your option: ";
  cin>>option;
  return option;

}
int customerlogIn()
{
     system("cls");
     header();    
    HANDLE h= 
     GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(h,4);
     cin.ignore();
    cout<<"\tEnter your username: ";
    getline(cin,Uname[i]);
    cout<<endl<<endl;
    cout<<"\tEnter your Password: ";
    getline(cin,Upassword[i]);
}
void option1()                                                             //OPTION 1: AVAILABLE ROOMS
{
HANDLE h= 
 GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(h,11);
 cout<<"\tTotal rooms: 100 "<<endl<<endl;
 cout<<"\tAvailable rooms: "<<rooms;
 cout<<endl<<endl;
}
void option2()                                                            //OPTION 2: ROOM STATUS
{
 HANDLE h= 
 GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(h,11);
 cout<<"\tRoom Categories: "<<endl<<endl;
 cout<<"\tVIP (Single-bed room / Double-bed room)"<<endl<<endl;
 cout<<"\tNormal (Single-bed room / Double-bed room)"<<endl<<endl;
 cout<<"\tPrice of VIP single-bed per day=Rs.5000 "<<endl<<endl;
 cout<<"\tPrice of VIP double-bed per day=Rs.8000 "<<endl<<endl;
 cout<<"\tPrice of Normal single-bed per day=Rs.3000 "<<endl<<endl;
 cout<<"\tPrice of Normal double-bed per day=Rs.6000 "<<endl<<endl;
}
void option3()                                                           //OPTION 3: CHECK_IN
{
  
  HANDLE h= 
 GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,11);
  while(true)
  {
    cout<<"\tEnter the category of room you want to rent (VIP or Normal): ";
  cin>>category[i];
  cout<<endl<<endl;
  cout<<"\tEnter the type of room ( S for single-bed and D for double-bed ): ";
  cin>>type[i];
  cout<<endl<<endl;   
  if((category[i]=="VIP"||category[i]=="vip") && (type[i]=='S'||type[i]=='s'))
   {
     cout<<"\tEnter the number of days you want to spend: ";
     cin>>days[i];
     cout<<endl<<endl;
     price[i]=days[i]*5000;
     cout<<"\tPrice for "<<days[i]<<" days is: Rs."<<price[i]<<endl<<endl;
     cout<<"\tYour room number is: "<<room[i];
     rooms--;
     break;
   }
  else if((category[i]=="VIP"||category[i]=="vip") && (type[i]=='D'||type[i]=='d'))
   {
     cout<<"\tEnter the number of days you want to spend: ";
     cin>>days[i];
     cout<<endl;
     price[i]=days[i]*8000;
     cout<<"\tPrice for "<<days[i]<<" days is: Rs."<<price[i]<<endl<<endl;
     cout<<"\tYour room number is: "<<room[i];
     rooms--;
     break;
    }
  else if((category[i]=="Normal"||category[i]=="normal") && (type[i]=='S'||type[i]=='s'))
     {
      cout<<"\tEnter the number of days you want to spend: ";
      cin>>days[i];
      cout<<endl;
      price[i]=days[i]*3000;
      cout<<"\tPrice for "<<days[i]<<" days is: Rs."<<price[i]<<endl<<endl;
      cout<<"\tYour room number is: "<<room[i];
      rooms--;
      break;
     }
  else if((category[i]=="Normal"||category[i]=="normal") && (type[i]=='D'||type[i]=='d'))
     {
      cout<<"\tEnter the number of days you want to spend: ";
      cin>>days[i];
      price[i]=days[i]*6000;
      cout<<"\tPrice for "<<days[i]<<" days is: Rs."<<price[i]<<endl;
      cout<<"\tYour room number is: "<<room[i];
      rooms--;
      break;
     }
  else 
     {
      SetConsoleTextAttribute(h,4);
      cout<<"\t--Wrong input--"<<endl<<endl;
      cout<<"\t--Renter Data--";
     }
  }
  cout<<endl<<endl;
  SetConsoleTextAttribute(h,4);
  cout<<"Congratulations!!You have checked-in successfully :) "<<endl<<endl;
}
int customerLogInMenu()
{ 
   int op;
  system("cls");
  header();
  HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,11);
  cout<<"\tYou have logged in successfully"<<endl<<endl;
  cout<<"\tSelect one of the following options: "<<endl<<endl;
  cout<<"\t1.Your status"<<endl<<endl;
  cout<<"\t2.Give your reviews"<<endl<<endl;
  cout<<"\t3.Check Out"<<endl<<endl;
  cout<<"\t4.Back to main menu"<<endl<<endl;
  cout<<"Your option: ";
  cin>>op;
  return op;
  SetConsoleTextAttribute(h,7);

}
void reviews()
{
   HANDLE h= 
 GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,11);
  cin.ignore();
  cout<<"\tEnter your Reviews: ";
  getline(cin,review);
  cout<<endl;
  cout<<"\tThanks for sharing your views :)"<<endl<<endl;
}
void customerStatus()
{
   HANDLE h= 
 GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,11);
  cout<<"\t----------------------------------------------"<<endl<<endl;
  cout<<"\tRoom:"<<i+1<<endl<<endl;
  cout<<"\tCategory: "<<category[i]<<endl<<endl;
  cout<<"\tType: "<<type[i]<<endl<<endl;
  cout<<"\tDays you want  to spend: "<<days[i]<<endl<<endl;
  cout<<"\ttotal price: "<<price[i]<<endl<<endl;
  cout<<"\t----------------------------------------------"<<endl<<endl;
  cout<<"\tS: Single-bed\n\tD: Double-bed"<<endl<<endl;
}
void checkOut()
{
  int num;
  system("cls");
  HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,11);
  header();
  cout<<"Enter your room number: ";
  cin>>num;
  if(room[i]==num)
  {
    room[i]='\0';
  }
  SetConsoleTextAttribute(h,4);
  cout<<"You have checked out!! :)"<<endl<<endl;
  cout<<"Thanks for using our services!!"<<endl<<endl;

}
int managerMenu()
{
  int opt;
  system("cls");
  header();
  HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cout<<"\t\t\t\t\t\t\tManager Login"<<endl<<endl;
   SetConsoleTextAttribute(h,4);
  cout<<"\tSelect one of the following options: "<<endl<<endl;
   SetConsoleTextAttribute(h,11);
  cout<<"\t1.Log In"<<endl<<endl;
  cout<<"\t2.Back to main menu"<<endl<<endl;
  SetConsoleTextAttribute(h,4);
  cout<<"Your option: ";
  cin>>opt;
  return opt;
}
int managerLogIn()
{
  bool val=false;
  system("cls");
  header();
  HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,11);
  cin.ignore();
  while(val!=true)
  {
  cout<<"\tEnter username: ";
  getline(cin,Mname);
  cout<<endl;
  cout<<"\tEnter your password: ";
  getline(cin,Mpassword);
  if((Mname=="Hoorab" && Mpassword=="12345")||(Mname==manName && Mpassword==manPassword))
  {
    val==true;
    break;
  }
  else
  {
    cout<<"\tWrong Credentials\n\n\tPlease Re-enter!"<<endl<<endl;
    cout<<"Press any key to continue:";
    getch();
    cout<<endl<<endl;
    val==false;
  }
  }
}
int managerLogInMenu()
{
  int option;
  system("cls");
  header();
  HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cout<<"\t\t\t\t\t\t\t\t| Manager Menu |"<<endl<<endl;
  SetConsoleTextAttribute(h,4);
  cout<<"\tSelect one of the following options"<<endl<<endl;
  SetConsoleTextAttribute(h,11);
  cout<<"\t1.View all customer details"<<endl<<endl;
  cout<<"\t2.Add Customer"<<endl<<endl;
  cout<<"\t3.Delete customer data"<<endl<<endl;
  cout<<"\t4.Update customer data"<<endl<<endl;
  cout<<"\t5.Back to main menu"<<endl<<endl;
  SetConsoleTextAttribute(h,4);
  cout<<"Enter your option:";
  cin>>option;
  return option; 
}
void customerDetails()
{
  system("cls");
  header();
  HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cout<<"\t\t\t\t\t\t\t\tCustomer Details"<<endl<<endl;
   SetConsoleTextAttribute(h,11);
  
    cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"\t|Customer Name\t| Room No.\t| Room Category\t| Room type \t| Days \t| Total Bill \t|"<<endl<<endl;
  for(int j=0;j<=i;j++)
  {
    cout<<"\t|"<<customerName[j]<<"\t      |"<<room[j]<<"\t\t|"<<category[j]<<"\t\t|"<<type[j]<<"\t      |"<<days[j]<<"\t|"<<price[j]<<"\t\t|"<<endl<<endl;
    cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
  }
}
void managerAdd()
{
  k=i+1;
  system("cls");
  header();
  HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cin.ignore();
  cout<<"\t\t\t\t\t\t\t\t| Inserting New Customer Data |"<<endl<<endl;
   SetConsoleTextAttribute(h,11);
  cout<<"\tEnter the name of customer you want to add: ";
  getline(cin,name);
  cout<<endl<<endl;
 // if(customerName[i].empty())
    customerName[k]=name;
  cout<<"\tEnter the room number: ";
  cin>>ronum;
  //if(room[i]==0)
  //{
    room[k]=ronum;
  //}
  cout<<endl;
  cout<<"\tEnter room type: ";
  cin>>t;
  //if(type[j]=='\0')
    type[k]=t;
  cout<<endl;
  cin.ignore();
  cout<<"\tEnter room category: ";
  getline(cin,cat);
  //if(category[i].empty())
 // {
    category[k]=cat;
 // }
  cout<<endl;
  cout<<"\tEnter the price of room: ";
  cin>>p;
  //if(price[i]==0)
  //{
    price[k]=p;
 // }
  cout<<endl;
  cout<<"Data is entered!!";
  i++;
}
void managerDelete()
{
  string name;
 system("cls");
 header();
 HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cin.ignore();
  cout<<"\t\t\t\t\t\t\t\t| Data Deletion |"<<endl<<endl;
   SetConsoleTextAttribute(h,11);
  for(int j=0;j<=i;j++)
  {
  while(true)
  {
  cout<<"\tEnter the name of customer whose data you want to delete: ";
  getline(cin,name);
    if(customerName[j]==name)
  {
    customerName[j].clear();
    customerPassword[j].clear();
    type[j]=0;
    room[j]=0;
    category[j].clear();
    price[j]=0;
    days[j]=0;
    cout<<endl;
    cout<<"\tData deleted!!";
    break;
  }
  else
  {
    cout<<"\tNo such Data exists"<<endl<<endl;
    cout<<"\tRe-enter data!"<<endl<<endl;
    cout<<"Press any key to continue--";
    getch();
  }
  break;
  }
  }
    
}
void managerUpdate()
{
  string name;
  system("cls");
  header();
  bool ans=false;
 HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cout<<"\t\t\t\t\t\t\t\t| Updating Customer Data |"<<endl<<endl;
   SetConsoleTextAttribute(h,11);
  cin.ignore();
    
  while(ans!=true)
  {
  cout<<"\tEnter the name of customer whose data you want to update: ";
  getline(cin,name);
  for(int j=0;j<=i;j++)
  {
   if(name==customerName[j])
  {
    cout<<endl;
    cout<<"\tUpdated name: ";
    getline(cin,customerName[j]);
    cout<<endl;
    cout<<"\tUpdated room number: "; 
    cin>>room[j];
    cout<<endl;
    cout<<"\tUpdated room Type: ";
    cin>>type[j];
    cout<<endl;
    cout<<"\tUpdated category: ";
    cin>>category[j];
    cout<<endl;
    cout<<"\tUpdated price: ";
    cin>>price[j];
    cout<<endl;
    cout<<"\tData updated!!";
    break;
  }
  else
  {
    j;
  }
  }
  // else
  // {
  //   cout<<"\tNo such Data exists"<<endl<<endl;
  //   cout<<"\tRe-enter data!"<<endl<<endl;
  //   ans=false;
  //   cout<<"Press any key to continue--";
  //   getch();
  // }
  break;
  }
}
int adminMenu()
{
  int opt;
  system("cls");
    header();
    HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cout<<"\t\t\t\t\t\t\t\t\t| Admin Login |"<<endl<<endl;
  SetConsoleTextAttribute(h,4);
  cout<<"\tSelect one option"<<endl<<endl;
  SetConsoleTextAttribute(h,11);
  cout<<"\t1.Log In"<<endl<<endl;
  cout<<"\t2.Return to main menu"<<endl<<endl;
  cout<<"\tEnter your option: ";
  cin>>opt;
  return opt;
}
void adminLogIn()
{
  string Aname,Apassword;
  bool val=false;
  system("cls");
  header();
  HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cin.ignore();
  cout<<"\t\t\t\t\t\t\t\t\t| Admin Login |"<<endl<<endl;
   SetConsoleTextAttribute(h,11);
  while(val!=true)
  {
  cout<<"\tEnter your name: ";
  getline(cin,Aname);
  cout<<endl;
  cout<<"\tEnter your password: ";
  getline(cin,Apassword);  
  if(Aname=="Hoorab" && Apassword=="12345")
  {
    val=true;
    break;
  }
  else{
    cout<<endl<<endl;
    cout<<"\tInvalid credentials !! Please renter!!";
    val=false;
    cout<<"Press any key to continue--";
    getch();
  }
}
}
void managerActivities()
{ 
 system("cls");
  header();
  HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cout<<"\t\t\t\t\t\t\t\t| Manager Details |"<<endl<<endl;
   SetConsoleTextAttribute(h,11);
  cout<<"\tManager's name: "<<Mname<<endl<<endl;
  cout<<"\tManager's password: "<<Mpassword<<endl<<endl;
}
void customerActivities()
{
 system("cls");
  header();
  HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cout<<"\t\t\t\t\t\t\t\t| Customer Details |"<<endl<<endl;
   SetConsoleTextAttribute(h,11);
    cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"\t|Customer Name\t| Room No.\t| Room Category\t| Room type \t| Days \t| Total Bill \t|"<<endl<<endl;
  for(int j=0;j<=i;j++)
  {
    cout<<"\t|"<<customerName[j]<<"\t      |"<<room[j]<<"\t\t|"<<category[j]<<"\t\t|"<<type[j]<<"\t      |"<<days[j]<<"\t|"<<price[j]<<"\t\t|"<<endl<<endl;
    cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
  }

}
void addManger()
{
  system("cls");
    header();
    HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cout<<"\t\t\t\t\t\t\t\t| Adding Manager |"<<endl<<endl;
   SetConsoleTextAttribute(h,11);
  cout<<"\tEnter the name of new manager: ";
  cin>>manName;
  cout<<"\tSet his/her password: ";
  cin>>manPassword;
  cout<<endl;
  cout<<"\tA new manager has been added!!  :)";

}
void deleteCustomer()
  {
     string name;
 system("cls");
 header();
 HANDLE h= 
  GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(h,2);
  cin.ignore();
  cout<<"\t\t\t\t\t\t\t\t| Data Deletion |"<<endl<<endl;
   SetConsoleTextAttribute(h,11);
  for(int j=0;j<=i;j++)
  {
  while(true)
  {
  cout<<"\tEnter the name of customer whose data you want to delete: ";
  getline(cin,name);
    if(customerName[j]==name)
  {
    customerName[j]='\0';
    customerPassword[j]='\0';
    type[j]='\0';
    room[j]='\0';
    category[j]='\0';
    price[j]='\0';
    days[j]='\0';
    cout<<endl;
    cout<<"\tData deleted!!";
    break;
  }
  else
  {
    cout<<"\tNo such Data exists"<<endl<<endl;
    cout<<"\tRe-enter data!"<<endl<<endl;
    cout<<"Press any key to continue--";
    getch();
  }
  break;
  }
  }
  }



