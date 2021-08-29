#include<iostream>
using namespace std;
int main()
{
    char str[50];
    int count=0,i;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        count++;
    }
    cout<<count+1;
    return 0;
}