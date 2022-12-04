#include<iostream>
#include<string.h>
using namespace std;
int total=0;
class Car
{
  public:
       char name[20];
       string model,color;
       int days;
       float price;
void addrecord();
void dellrecord();
void display();
void srchbyname();
void srchbymodel();
void srchbycolor();
void updaterecord();
///MANAGE PROJECT
void mang()
{
     int numb;
          Car obj1;
          cout<<endl<<endl;
          cout<<"                  These are the following options to manage data          "<<endl<<endl;
         cout<<"press 1 to add record"<< endl;
         cout<<"press 2 to delete record"<< endl;
         cout<<"press 3 to update record"<< endl;
         cout<<"press 4 to display"<< endl;
         cout<<"press 5 to exit"<<endl;
         cin>>numb;
    switch(numb)
         {
             case 1:
                   obj1.addrecord();
                     break;

             case 2:
                    obj1.dellrecord();
                    break;
             case 4:
                    obj1.display();
                    break;

            case 3:
                   obj1.updaterecord();
                   break;
           default:
                   break;
         }

}
///SEARCH OF RECORD
void srch()
{
        int srch;
        cout<<endl<<endl;
        cout<<"                  These are the following options to search data          "<<endl<<endl;
        cout<<"press 1 to search by name"<< endl;
        cout<<"press 2 to search by color"<< endl;
         cout<<"press 3 to search by model"<< endl;
         cout<<"press 4 to exit"<<endl;
          cin>>srch;
          switch(srch)
          {
              case 1:
              srchbyname();
              break;
           case 2:
               {
                srchbycolor();
               }

               break;
           case 3:
              {
              srchbymodel();
              }
            break;
           default:
                 break;
          }
}
///Report of Project
void report()
{
    cout<<"total no of persons whose data is stored:"<<total<<endl;

}

};///END OF CLASS
Car obj1[100];
int main()
{
Car obj;

cout<<"                   =================================================================="<<endl<<endl;
cout<<"                                Welcome To Rent a Car Management System              "<<endl<<endl;
cout<<"                   =================================================================="<<endl<<endl;



     while(1)
  { int no;
        cout<<endl<<endl;
        cout<<"\npress 1 to manage record"<< endl;
         cout<<"press 2 to search record"<< endl;
         cout<<"press 3 to report of record"<< endl;
         cout<<"press 4 to exit"<< endl;
       cin>>no;
      system("cls");

   switch(no)
      {case 1:
           {
          obj.mang();
          break;}
     case 2:
         {
             obj.srch();
             break;
         }
      case 3:
           {obj.report();
             break;
      }
      case 4:
          exit(0);
        break;
     }}

return 0;
}///END OF MAIN

///ADD RECORDS
void Car::addrecord()
   {
           int nx;
      cout<<"Enter no of records you want to enter"<<endl;
      cin>>nx;
      for(int i=0;i<nx;i++)
      {
       cout<<"enter name of person:";
       cin>>obj1[i].name;
       cout<<"enter model of car:";
       cin>>obj1[i].model;
       cout<<"enter color of car:";
       cin>>obj1[i].color;
       cout<<"enter price of car:";
       cin>>obj1[i].price;
       cout<<"enter the days for rent:";
       cin>>obj1[i].days;

        total++;
      }
}
void Car::updaterecord()
   {
      int pos;
      cout<<"Enter the position where you want to update data:";
      cin>>pos;
      cout<<"Enter name of person"<<endl;
      cin>>name;
       strcpy(obj1[pos].name,name);
       cout<<"enter model of car:";
       cin>>model;
       obj1[pos].model=model;
       cout<<"enter color of car:";
       cin>>color;
       obj1[pos].color=color;
       cout<<"enter price of car:";
       cin>>price;
       obj1[pos].price=price;
       cout<<"enter the days for rent:";
       cin>>days;
       obj1[pos].days=days;

}

///DELETE RECORDS
void Car::dellrecord()
{  char namee[20];
    cout<<"Enter name you want to delete record"<<endl;
    cin>>namee;
    int i;
    for( i=0;i<total;i++)
      {
       if(strcmp(obj1[i].name,namee)==0)
           {
             cout<<"Founded and successfully deleted"<<endl;
             strcpy(obj1[i].name,obj1[i+1].name);
             obj1[i].model=obj1[i+1].model;
             obj1[i].price=obj1[i+1].price;
             obj1[i].color=obj1[i+1].color;
             obj1[i].days=obj1[i+1].days;
            total--;

            }
       }
}
///DISPLAY RECORDS
void Car:: display()
{
    int j;
  for( j=0;j<total;j++)
  {
      cout<<"name of person:";
       cout<<obj1[j].name<<endl;
       cout<<"model of car:";
       cout<<obj1[j].model<<endl;
       cout<<"color of car:";
       cout<<obj1[j].color<<endl;
       cout<<"price of car:";
       cout<<obj1[j].price<<endl;
       cout<<"Days for rent:";
       cout<<obj1[j].days<<endl;

  }
}
                            ///SEARCHING FUNCTIONS
///SEARCH BY NAME
void Car::srchbyname()
    {
    char Name[20];
    cout<<"Enter name to search its record"<<endl;
    cin>>Name;
    int k;
    for( k=0;k<total;k++)
  {
      if(strcmp(obj1[k].name,Name)==0)
     {
        cout<<"Record is founded"<<endl;
       cout<<" name of person:";
       cout<<obj1[k].name<<endl;
       cout<<"Model of car:";
       cout<<obj1[k].model<<endl;
       cout<<"Color of car:";
       cout<<obj1[k].color<<endl;
       cout<<"Price of car:";
       cout<<obj1[k].price<<endl;
       cout<<"Days for rent:";
       cout<<obj1[k].price<<endl;
     }

  }
}
///SEARCH BY MODEL
void Car::srchbymodel()
{
    string mmodel;
     cout<<"Enter  model of car to search its record"<<endl;
    cin>>mmodel;
    int k;
    for( k=0;k<total;k++)
  {
    if(obj1[k].model==mmodel)
     {
      cout<<"Record is founded"<<endl;
      cout<<" name of person:";
       cout<<obj1[k].name<<endl;
       cout<<"Model of car:";
       cout<<obj1[k].model<<endl;
       cout<<"Color of car:";
       cout<<obj1[k].color<<endl;
       cout<<"Price of car:";
       cout<<obj1[k].price<<endl;
       cout<<"Days for rent:";
       cout<<obj1[k].days<<endl;
     }
  }
}
///SEARCH BY COLOR
void Car::srchbycolor()
{
     string CColor;
     cout<<"Enter Color of car to search its record"<<endl;
    cin>>CColor;
    int k;
    for( k=0;k<total;k++)
  {
     if(obj1[k].color==CColor)
     {
       cout<<"Record is founded"<<endl;
       cout<<"name of person:";
       cout<<obj1[k].name<<endl;
       cout<<"Model of car:";
       cout<<obj1[k].model<<endl;
       cout<<"Color of car:";
       cout<<obj1[k].color<<endl;
       cout<<"Price of car:";
       cout<<obj1[k].price<<endl;
       cout<<"Days for rent:";
       cout<<obj1[k].days<<endl;
     }
  }
}
