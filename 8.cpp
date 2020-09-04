
// PROGRAM TO DISPLAY TOTAL MARKS AND PERCENTAGE OBTAINED BY A STUDENT

#include<iostream>
using namespace std;
int main()
{
    float m1=78,m2=45,m3=62;
    cout<<"THE MARKS OBTAINED BY ROBIN ARE AS  : "<<m1<<"\t"<<m2<<"\t"<<m3<<"\n";
        float total=m1+m3+m2;

    cout<<"THE TOTAL MARKS ARE : "<<total<<"\n";
    float perc=(total/300)*100 ;

     cout<<"THE TOTAL PERCENTAGE IS : "<<perc<<"\n";
     return 0;



}
