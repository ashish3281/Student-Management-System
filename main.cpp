#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;

void enter()
{
    system("cls");
int choice;
cout<<"How many students data do you want to enter: ";
cin>>choice;
if(total==0)
{
total=total+choice;
for(int i=0;i<choice;i++)
{
    cout<<"*****************************************"<<endl<<endl;
    cout<<"Enter data of student: "<<i+1<<endl<<endl;
    cout<<"Enter name : ";
    cin>>arr1[i];
    cout<<"Enter roll number : ";
    cin>>arr2[i];
    cout<<"Enter class : ";
    cin>>arr3[i];
    cout<<"Enter section : ";
    cin>>arr4[i];
    cout<<"Enter phone number : ";
    cin>>arr5[i];
}
}
else{
    for(int i=total;i<total+choice;i++)
{
    cout<<"*****************************************"<<endl<<endl;
    cout<<"Enter data of student: "<<i+1<<endl<<endl;
    cout<<"Enter name : ";
    cin>>arr1[i];
    cout<<"Enter roll number : ";
    cin>>arr2[i];
    cout<<"Enter class : ";
    cin>>arr3[i];
    cout<<"Enter section : ";
    cin>>arr4[i];
    cout<<"Enter phone number : ";
    cin>>arr5[i];
}
total=total+choice;
}
}
void show()
{
    system("cls");
    for(int i=0;i<total;i++)
    {
        cout<<"*****************************************"<<endl<<endl;
        cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name : "<<arr1[i]<<endl;
        cout<<"Roll Number : "<<arr2[i]<<endl;
        cout<<"Class : "<<arr3[i]<<endl;
        cout<<"Section : "<<arr4[i]<<endl;
        cout<<"Phone Number : "<<arr5[i]<<endl;
    }

}
void search()
{
    system("cls");
    string rollno;
 cout<<"Enter roll number of student which you want to search: ";
 cin>>rollno;
 for(int i=0;i<total;i++)
 {
 if(rollno==arr2[i])
 {
      cout<<"*****************************************"<<endl<<endl;
        cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name : "<<arr1[i]<<endl;
        cout<<"Roll Number : "<<arr2[i]<<endl;
        cout<<"Class : "<<arr3[i]<<endl;
        cout<<"Section : "<<arr4[i]<<endl;
        cout<<"Phone Number : "<<arr5[i]<<endl;
 }
 }

}
void update()
{
    system("cls");
 string rollno;
 cout<<"Enter roll number of student which you want to search: ";
 cin>>rollno;
 for(int i=0;i<total;i++)
 {
 if(rollno==arr2[i])
 {

      cout<<"*****************************************"<<endl<<endl;
      cout<<"Previous data "<<endl<<endl;
        cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name : "<<arr1[i]<<endl;
        cout<<"Roll Number : "<<arr2[i]<<endl;
        cout<<"Class : "<<arr3[i]<<endl;
        cout<<"Section : "<<arr4[i]<<endl;
        cout<<"Phone Number : "<<arr5[i]<<endl;
        cout<<"*****************************************"<<endl<<endl;
        cout<<"\nEnter new data"<<endl;
        cout<<"Enter name : ";
    cin>>arr1[i];
    cout<<"Enter roll number : ";
    cin>>arr2[i];
    cout<<"Enter class : ";
    cin>>arr3[i];
    cout<<"Enter section : ";
    cin>>arr4[i];
    cout<<"Enter phone number : ";
    cin>>arr5[i];

 }
 }

}
void deletedata()
{
    system("cls");
 int a;
 cout<<"Press 1 to delete full record"<<endl;
 cout<<"Press 2 to delete specific record"<<endl;
 cin>>a;
 if(a==1)
 {
     total=0;
     cout<<"All record is deleted"<<endl;
 }
 else
{
    string rollno;
    cout<<"Enter rollno which you want to delete "<<endl;
    cin>>rollno;
    for( int i=0;i<total;i++)
    {
        if(rollno==arr2[i])
        {
            for(int j=i;j<total;j++)
            {
                arr1[j]=arr1[j+1];
                arr2[j]=arr2[j+1];
                arr3[j]=arr3[j+1];
                arr4[j]=arr4[j+1];
                arr5[j]=arr5[j+1];
            }
            total--;
            cout<<"Your required record is deleted...!!"<<endl;
        }
    }
 }
}
int main()
{
    int value;
    cout<<"\n\n\t\t\tWELCOME TO STUDENT MANAGEMENT SYSTEM BY ASHISH"<<endl;
    cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    while(true)
    {

cout<<"**********************************************************"<<endl;
    cout<<"Press 1 to enter the data"<<endl;
    cout<<"Press 2 to show the data"<<endl;
    cout<<"Press 3 to search the data"<<endl;
    cout<<"Press 4 to update the data"<<endl;
    cout<<"Press 5 to delete the data"<<endl;
    cout<<"Press 6 to exit the data"<<endl;
cout<<"**********************************************************"<<endl;
    cin>>value;
    switch(value)
    {
    case 1:
        enter();
        break;
    case 2:
        show();
        break;
    case 3:
        search();
        break;
    case 4:
        update();
        break;
    case 5:
        deletedata();
        break;
    case 6:
         system("cls");
        cout<<"\n\n\t\t\tTHANKS FOR visiting"<<endl;
        cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~"<<endl;
        exit(0);
        break;
    default:
        cout<<"INVALID INPUT"<<endl;
        break;
    }

    }
}
