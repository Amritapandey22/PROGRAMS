// PROGRAM TO PRINT A PATTERN
#include<iostream>
 #include<cstdlib>
using namespace std;



 void printstar(int n)
 { int i;
for(i=0;i<n;i++)
{
    cout<<"*";
}
 cout<<"\n";
}
int main()
{
int i,j,k=2;
for(i=6;i>=2;i--)
{for(j=k;j<=6; )
{
    k++;

    if(abs(i-j)==0)
    cout<<"*\n";
    else
    printstar(abs(i-j));
    break;

}

}


    return 0;
}
