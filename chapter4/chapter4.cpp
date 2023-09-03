#include <iostream>
#include <stdio.h>
using namespace std;
 int main(){
    //lets try escape codes
    cout << " \athis\tis\tchapter\t4" << endl;
    //now lets try operators
    //best way lets create a simple calculator
cout <<" this is a simple calculator" << endl;
cout <<  "for add pred 1"<< endl;
cout <<  "for sub pred 2"<< endl;
cout <<  "for div pred 3"<< endl;
cout << "for prod pred 4"<< endl;
int add , sub , div , prod , input, num1 , num2 ;
add = 1;
sub = 2;
div = 3;
prod = 4;

    cin >> input ;
    
    if ( input == 1){
      cout<<"this is addition"<<endl;
      cin.clear();
      cin.sync();
      cout<<"type number 1"<<endl;
      cin>>num1;
      cout<<"type number 2"<<endl;
      cin>>num2;
      cout<< num1 + num2;
      
    } else if(input == 2){
      cout<<"this is subtraction"<<endl;
            cin.clear();
      cin.sync();
      cout<<"type number 1"<<endl;
      cin>>num1;
      cout<<"type number 2"<<endl;
      cin>>num2;
      cout<< num1 - num2;
    } else if(input == 3){
      cout<<"this is divide"<<endl;
            cin.clear();
      cin.sync();
      cout<<"type number 1"<<endl;
      cin>>num1;
      cout<<"type number 2"<<endl;
      cin>>num2;
      cout<< num1 / num2;
    } else if (input == 4){
      cout<<"this is multiply"<<endl;
            cin.clear();
      cin.sync();
      cout<<"type number 1"<<endl;
      cin>>num1;
      cout<<"type number 2"<<endl;
      cin>>num2;
      cout<< num1 * num2;
    } else  {
      cout<<"Input is not correct exiting now"<<endl;
      return 0; 
    }

 }
