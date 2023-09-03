#include <stdio.h>
  #include <iostream>
 using namespace std;
 int loop_for (){
//from here we will initialise the for loop
int a;
cout << " how much numbers you want to print";
cin >> a;
int  i;

for (i = 0; i < a; i++)
{
   /* code */

   cout << i; 
}


 };
 
 
 
 int main (){
    cout << " hey bro! lets do for and while loops";
cout << loop_for();

 }