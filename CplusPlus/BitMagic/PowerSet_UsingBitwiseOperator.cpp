//import all header 
#include <stdio.h>
#include <string>
#include <cmath>
#include <iostream>

//namespace for better code readability
using namespace std;
void powerSet(string str)
{
    //get the string length =3 for "abc"
    int n=str.length();
    //get the 2^n power value to iterate fom 0 to 2^n -1 
    int powerSize=pow(2,n);

    // loop through powersize which is 8 for string abc
    for (int counter=0;counter<powerSize;counter++)
    {
        //loop through each bit position
        for(int j=0;j<n;j++)
        {
        // check the set bit position and print the char
        if((counter &(1<<j))!=0)
        {
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