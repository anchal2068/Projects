#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

static int p=0;
class a
{

    char busn[5],arrival[10],depart[10],from[15],to[15],seat[8][4][10];

public:
    void install();
    void allotment();
    void empty();
    void show();
    void avail();
    void position(int i);
}
bus[10];
void vline(char ch)
{

    for(int i=80;i>0;i--)
        cout<<ch;
}

void a::install()
{

    cout<<"Enter Bus no.:-";
    cin>>bus[p].busn;
    printf("\n");
    cout<<"Departure time:-";
    cin>>bus[p].depart;
    printf("\n");
    cout<<"Arrival time:-";
    cin>>bus[p].arrival;
    printf("\n");
    cout<<"from:-";
    cin>>bus[p].from;
    printf("\n");
    cout<<"To:-";
    cin>>bus[p].to;

    bus[p].empty();
    p++;
}

void a::allotment()
{
    int seat;
    char number[5];
    top:

        cout<<"Bus no:-";
        cin>>number;

        int n;
        for(n=0;n<=p;n++)
        {

            if(strcmp(bus[n].busn,number)==0)
                break;
        }
        while(n<=p)
        {

            cout<<"Seat number:-";
            cin>>seat;
            if(seat>32)
            {

                cout<<"\n There are only 32 seats available in this bus.";

            }
            else{
                if(strcmp(bus[n].seat[seat/4][(seat%4)-1],"Empty")==0)
                {

                    cout<<"Enter passenger's name:-";
                    cin>>bus[n].seat[seat/4][(seat%4)-1];
                    break;
                }
                else
                    cout<<"The seat no. is already reserved";
            }
        }
        if(n>p)
        {

            cout<<"Enter correct bus no.\n";
            goto top;
        }
}

void a::empty()
{
    for(int i=0;i<8;i++)
    {

        for(int j=0;j<4;j++)
        {

            strcpy(bus[p].seat[i][j],"Empty");
        }
    }
}

void a::show()
{

    int  n;
    char number[5];

    cout<<" Enter Bus no.:-";
    cin>>number;

    for(n=0;n<=p;n++)
    {

        if(strcmp(bus[n].busn,number)==0)
            break;
    }
    while(n<=p)
    {

        vline('*');
        cout<<"\nBus no:\t"<<bus[n].busn
        <<"\nDeparture time:"<<bus[n].depart
        <<"\t\tArrival time: "<<bus[n].arrival
        <<"\n From:\t"<<bus[n].from
        <<"\t\t To:\t\t"<<bus[n].to<<"\n";

        vline('*');
        bus[0].position(n);
        int a=1;
        for(int i=0;i<8;i++)
        {

             for(int j=0;j<4;j++)
        {
            a++;
            if(strcmp(bus[n].seat[i][j],"Empty")!=0)
                cout<<"\n The seat no."<<(a-1)<<" is reserved for " <<bus[n].seat[i][j]<<".";
        }
    }
    break;
}
if(n>p)
    cout<<"Enter correct bus no.:";
}

 void a::position(int l)
{

    int s=0;p=0;
    for(int i=0;i<8;i++)
    {
        cout<<"\n";
        for(int j=0;j<4;j++)
        {
            s++;
            if(strcmp(bus[l].seat[i][j],"Empty")==0)
            {
                cout.width(5);
                cout.fill(' ');
                cout<<s<<".";
                cout.width(10);
                cout.fill(' ');
                cout<<bus[l].seat[i][j];
                p++;
            }
            else
            {
                cout.width(5);
                cout.fill(' ');
                cout<<s<<".";
                cout.width(10);
                cout.fill(' ');
                cout<<bus[1].seat[i][j];
            }
        }
    }
    cout<<"\n\n There are "<<p<<"seats empty in bus no:"<<bus[1].busn;
}

void a::avail()
{
	for(int n=0;n<p;n++)
	{
		vline('*');
		cout<<"Bus no: \t"<<bus[n].busn<<"\t\tArrival time: \t"<<bus[n].arrival<<" \t\tDeparture time: \t"
		<<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"
		<<bus[n].to<<"\n";
		vline('*');
		vline('_');
	}

}

int main()

    {


        system("cls");
        int w;
        while(1)
        {
            //system ("cls");
            cout<<"\n\n\n\n\n";

            cout<<"***********BUS RESERVATION SYSTEM************";
            cout<<"\n\n";

            cout << "             1.Install";

            cout << "             2.Reservation";

            cout << "             3.Show";
            cout << "             4.Buses available";
            cout << "             5.Exit";
            cout << "             Enter your choice:-";

            cin>>w;
            switch(w)
            {



         case 1:
               bus[p].install();

               break;

          case 2:
               bus[p].allotment();

               break;



           case 3:
               bus[0].show();

               break;

           case 4:
           	    bus[0].avail();
				   break;
           case 5:
               exit(0);
            }

       }
        return 0;
    }

