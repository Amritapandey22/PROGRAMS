// PROGRAM TO CHECK IF AN ALPHABET IS UPPERCASE OR LOWER CASE
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"ENTER THE CHARACTER : ";
    cin>>ch;
    if (ch>='a'&& ch<='z')
        cout<<"\n THE ALPHABET IS A LOWER CASE ";
    else if (ch>='A'&& ch<='Z')
        cout<<"\n THE ALPHABET IS A UPPER CASE ";
    return 0;
}

