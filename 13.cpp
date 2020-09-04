
#include<iostream>
using namespace std;
// PROGRAM TO TAKE INPUT VALUES FROM USER UNTIL q IS PRESSED AND DISPLAY THE AVG AND PRODUCT OF THE NUMBERS ENTERED

int main()
{
    int i,prod=1,sum=0,n;
    float avg;
    char ch='q';

     int p=int(ch);
    for(int g=0;g!=p;g++)
    {
    cout<<"\nENTER THE VALUE (press q to terminate )  : ";
    cin>>i;

    prod*=i;
    sum+=i;
    n++;
    }


        cout<<"PROGRAM TERMINATED \n";






 avg=sum/n;
 cout<<"\n THE PRODUCT OF THE NUMBERS ENTERED IS \t"<<prod;
 cout<<"\n THE AVERAGE OF THE ENTERED NUMBERS IS \t"<<avg;
    return 0;
}

