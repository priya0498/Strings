#include<iostream>
using namespace std;
int main()
{
    char str[100]
    gets(str);
    string rev="";
    for(int i=str.length()-1; i>0; i--)
    {
        rev=rev+str[i];

    }   
    cout<<rev;
    return 0;
}