// PROGRAM TO TAKE LENGTH AND BREADTH OF RECTANGLE FROM THE  USER AND DIDSPLAY ITS AREA IN INTEGER FORM

#include<iostream>
using namespace std;
int main()
{
    float len ,bdth;
    cout<<"ENTER THE LENGTH AND BREADTH OF THE RECTANGLE :  ";
    cin>>len>>bdth;
    cout<<"THE CALCULATED AREA IN INTEGER IS : "<<int(len*bdth);
    return 0;
}
