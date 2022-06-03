#include <stdio.h>
#include <string>
#include <cmath>
#include <iostream>
using namespace std;
void powerSet(string str)
{
    int n=str.length();
    int powerSize=pow(2,n);
    printf("%d",powerSize);
    for (int counter=0;counter<powerSize;counter++)
    {
        for(int j=0;j<n;j++)
        {
        
        //printf("%d",(counter &(1<<j)));

        if((counter &(1<<j))!=0)
        {
            //printf("%c",str[j]);
            cout<<str[j];
        }
       
        }
         cout<<endl;
        
    }
    return;
}
int main()
{
    powerSet("abc");
    printf("Hello world");

    return 0;
}