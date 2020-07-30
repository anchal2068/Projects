#include <iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct student
{
    char name[25];
    char address[50];

    int rollno;
    char classs[20];
    int age;
    long double tel;
    int marks;
    char grade[4];
};

int main()
{
    char dow;
    int arr=0;
    do{
        student stud[10];

        cout<<"Press 1 Enter Record \n";
        cout<<"Press 2 Enter Delete \n";
        cout<<"Press 3 Enter Update \n";
        cout<<"Press 4 Enter Search \n";
        cout<<"Press 5 Enter Display \n";
        cout<<"\n \t Select Option::";

        int rolchek=0;

        int sw;
        cin>>sw;

        switch(sw)
        {
        case 1:
            cout<<"\n Enter the Data of the student no "<<arr+1<<"is :\n";
            cout<<"\t Enter the Roll No= ";
            int rol2;
            int rol;

            cin>>rol;

            for(int j=0;j<=arr;j++)
            {
                rol2=rol;
                if(rol2==stud[j].rollno)
                {
                    rolchek=1;
                }
            }
            if(rolchek!=1){
                stud[arr].rollno=rol;
                cout<<"\t Enter the Name=";
                cin>>stud[arr].name;

                cout<<"\t Enter the Address=";
                cin>>stud[arr].address;

                cout<<"\t Enter the Telephone no=";
                cin>>stud[arr].tel;

                cout<<"\t Enter the Class=";
                cin>>stud[arr].classs;

                cout<<"\t Enter the Marks=";
                cin>>stud[arr].marks;

                cout<<"\t Enter the Grade=";
                cin>>stud[arr].grade;

                cout<<"\t Enter the Age=";
                cin>>stud[arr].age;
                arr=arr+1;


            }
            else
            {
                cout<<"This Record Already Entered \n";
            }
            break;

        case 2:
            cout<<"\n Enter the Roll no of the student To Delete::\n";

            cin>>rol;

            for(int j=0;j<=arr;j++)
            {
                rol2=rol;
                if(rol2==stud[j].rollno)
                {
                    stud[j].rollno='d';
                    cout<<"\t Record Deleted";
                }
            }
            break;

        case 3:
            cout<<"\n Enter the Roll no of the student To Update ::\n";

            cin>>rol;

            for(int j=0;j<=arr;j++)
            {
                rol2=rol;
                if(rol2==stud[j].rollno)
                {
                    cout<<"\t Rollno = ";
                    cout<<stud[j].rollno;
                    cout<<"\t Name = ";
                    cout<<stud[j].name;
                    cout<<"\t Address = ";
                    cout<<stud[j].address;
                    cout<<"\t Telephone no = ";
                    cout<<stud[j].tel;
                    cout<<"\t Class= ";
                    cout<<stud[j].classs;
                    cout<<"\t Marks = ";
                    cout<<stud[j].marks;
                    cout<<"\t Grade = ";
                    cout<<stud[j].grade;

            cout<<"\n\t ReEnter Data ";

            cout<<"\n\t Enter the Name= ";
            cin>>stud[j].name;

            cout<<"\n\t Enter the Address= ";
            cin>>stud[j].address;

            cout<<"\n\t Enter the Telephone no = ";
            cin>>stud[j].tel;

            cout<<"\n\t Enter the Class= ";
            cin>>stud[j].classs;

            cout<<"\n\t Enter the Marks= ";
            cin>>stud[j].marks;

            cout<<"\n\t Enter the Grade= ";
            cin>>stud[j].grade;

            cout<<"\n\t Enter the Age= ";
            cin>>stud[j].age;
                }
            }
            break;

        case 4:
            cout<<"\n Enter the Roll no of the Student To Search::";

            cin>>rol;

            for(int j=0;j<=arr;j++)
            {
                rol2=rol;
                 if(rol2==stud[j].rollno)
                {
                    cout<<"\n \t Rollno = ";
                    cout<<stud[j].rollno;
                    cout<<"\t Name = ";
                    cout<<stud[j].name;
                    cout<<"\t Address = ";
                    cout<<stud[j].address;
                    cout<<"\t Telephone no = ";
                    cout<<stud[j].tel;
                    cout<<"\t Class= ";
                    cout<<stud[j].classs;
                    cout<<"\t Marks = ";
                    cout<<stud[j].marks;
                    cout<<"\t Grade = ";
                    cout<<stud[j].grade;
            }
        }
        break;

        case 5:
            cout<<"\n";
            for(int i=0;i<1;i++)
            {
                cout<<"Rollno  ||";
                cout<<"Name    ||";
                cout<<"Address ||";
                cout<<"Tele no ||";
                cout<<"Class   ||";
                cout<<"Marks   ||";
                cout<<"Grade   ||";
                for(int k=0;k<arr;k++)
                {
                    if(stud[k].rollno!='d')
                    {
                        cout<<"\n";
                        cout<<" ";
                        cout<<stud[k].rollno;
                        cout<<" || ";
                        cout<<stud[k].name;
                        cout<<" || ";
                        cout<<stud[k].address;
                        cout<<" || ";
                        cout<<stud[k].tel;
                        cout<<" || ";
                        cout<<stud[k].classs;
                        cout<<" || ";
                        cout<<stud[k].marks;
                        cout<<" || ";
                        cout<<stud[k].grade;

                    }
                }
            }
            cout<<"\n________________________";
            break;

        default:
            cout<<"\t Wrong option Selected ";
            break;
    }

    cout<<"\n \n \t Do You Want to Continue Again [Y/N]";
    cin>>dow;
}
while(dow=='y');

return 0;
getch();
}
