// hellow welcome to chaoter3
#include <iostream>
using namespace std;
int main()
{
    int a;
    a = 2;
    cout << a << endl;
    /*<<endl is used to move to next line some use "\n" but as
     effeciency endl i srecommended enl doesnt hold any memory
      while "/n" used 1 byte as it is a character */
    cout << a + 2 << endl;
    cout << a * 10;
    // lets try other variable types
    // char
    string name;

    /* and now with this lets learn how to take input form user keyboard

    for that we will use cin >> { variable to which input will be stored}*/
    cin >> name;
    // there is one thing  if you give any spaces in input only first string will be taken  as input others will be ignored

    /*for reference cout >> { pronounce it as cout == C __ out just like telling c to give output }
    and just like that pronounce cin << { as cin == c __ in} just like telling c to take input  */

    // lets out the input i'll use out for output as abbreviation
    cout << name << endl;
    // lets see what size holds our string

    int strng_size = name.size();
    cout << "size of var is " << strng_size << endl;
    /*now as for above only first string will be captured and outed but if you want a paragrah or comment lik esomething to be saved
    there comes .getline() function this is a member of istream header lets utilize it but us eit with char type
    lets take input
    cin.getline() >> name if we used it as like this it is not going to work we need to specify character length
    first comes var then comes character length*/
    string name2;
    cout << "type somethingyou wanna say " << endl;
    cin.clear(); // this is for flushing previous cin input
    cin.sync();  // getline function has some problems with whitespaces and old input leftovers

    getline(cin >> ws, name2); // here ws is used eat up all the whitespaces left over and makes 2nd input possible ifnot used program will use previous input leftovers

    cout << name2 << endl;
    // now using float { float an double are alike just size difference}
    float FLOAT;
    float some_number;
    cout << " enter a number between 1 to 4" << endl ;
    cin >> some_number;
    FLOAT =  some_number /5;
    cout << FLOAT << endl;
    //now bool
//bool are the easiest yet most hard pain you can only pass 0 or 1 or work around it mostly used in comparing
    bool ans;
   int age;
   cout << " type your age" << endl;
   cin.clear();
   cin.sync();
    cin >> age;
// here is an example of else statement
    if ( age >= 18 )
    {
 cout << " YOu are a an adult kid";
    } else {
      cout <<" you are a kid read something else";  
    }
     
    cout << " reaching end";
    return 0;
}
