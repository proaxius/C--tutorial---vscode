__________________________________________________________________________________________________________________________________

aaaaaaa                  2222222 
a    aa                 22     22  ***
   aaaa      ==========       22   ***
 aa  aa      ==========     222    ___
aa   aa                   222      *** 
aaaaaaaa                2222222222  *
                                   *    

chapter 3 in this chapter we are gonna study variables and types
variables & types
variable are like little words or a element which stores values or some data in them
and type defines the type of data a variable holds for example 
lets say
a = 2;
here a is variable (like a small element which holds data) and 2 is data but those who have done programming before know this is a int type data variable , well how we know this cause every data type has some features that can be seen to fin dout what type of data-type it is lets say just like above
in a program if user used this a = 2; piece of code and he wants to store more data like this he would have done this before somewhere in program 
int a { this line suggests we want variable a to store int type value dont worry if you cant understand int type that would just mean you are new this sort of stuff and you will learn gradually with time }

default keywords for var type and their useage are as follow ,{ iam not including all of them and different compilers have their own less or more default keywords}
not all of them are char type but some of them are 
  ,alignas  ,alignof   ,and  ,and_eq  ,asm  ,auto  ,bitand  ,bitor ,bool  ,break  ,case catch ,char  ,char16_t  ,char32_t  ,class  ,coml  ,const ,constexpr  ,const_cast  ,continue  ,decltype  ,default  ,delete  ,do   ,double  ,dynamic_cast  ,else  ,snum  ,explicit  ,export  ,extern  ,fasle  ,float  ,for  ,friend  ,got  ,if  ,inline  ,int  ,long  ,mutable  ,namespace  ,new  ,noexcept  ,not  ,not_eq  ,nullptr  ,operator  ,or  ,or_eq  ,private  ,protected  ,public  ,register  ,reiinterpret_cast  ,return  ,short  ,signed  ,sizeof  ,static  ,static_assert  ,static_cast  ,struct  ,switch  ,tempalte  ,this  ,thread_local  ,throw  ,true  ,try  ,typedef  ,typeid  ,typename  ,union  ,unsigned  ,using  ,virtual  ,void  ,volatile  ,wchar_t  ,while  ,xor  ,xor_eq
  these are the keywords that we will study about

   oooo           
  oo  oo n nnn   eeee 
  oo  oo nn  nn ee__ee important thing i forgot to mention
  oo  oo nn  nn ee                
   oooo  nn  nn  eeee

  ------------
 ------------
 ----                      ++         ++   
 ----                      ++         ++                         
 ----                   ++++++++   ++++++++              
 -------------          ++++++++   ++++++++  is a case sensitive language which means in c++ or c or                
  ------------             ++         ++          any case sensitive language cout or Cout or COUT or cOut are
                           ++         ++           completly different

                           be alert and type carefully whatever you are typing cause it might give you a useless heache sometime if something wrong typed then its a hassle to find out what it is in small programs it is easy but in complex and bigger code structure it is hard to find out what it is and where it is
 short note structure of data types with assigned keywords and size structure


 character types { char type or string type we can say}
   char     |  1byte    | 8bits   |
   char16_t |  2byte    | 16bits  |
   char32_t |  4byte    | 32bits  |
   wchar_t  |max character supported


                     111
ii                 11111
     __________   11 111
ii   ==========      111
ii   __________      111
ii   ==========      111
ii                11111111 


 integer type { signed } = integer type signed
 ___________|___________|_________| 
        char| 1byte     | 8bits   |
 short int  |2bytes>char|16bits   |
        int |2bytes     |16bits   |
_long  int  |4bytes     |32bits   |
2*long int _|8bytes_____|64bits___| 



  __ _             _                                                                                                
 / _| | ___   __ _| |_                                                                                              
| |_| |/ _ \ / _` | __|                                                                                             
|  _| | (_) | (_| | |_                                                                                              
|_| |_|\___/ \__,_|\__|                                                                                             
                                                                                                                  
Floating types
float       |           |         |
double      |           |         |
long double_|___________|_________|


| |__   ___   ___ | | ___  __ _ _ __                                                                                
| '_ \ / _ \ / _ \| |/ _ \/ _` | '_ \                                                                               
| |_) | (_) | (_) | |  __/ (_| | | | |                                                                              
|_.__/ \___/ \___/|_|\___|\__,_|_| |_|                                                                              
                                                                                                             

BOOL        |           |         |
____________|___________|_________|

\ \   / / _ \_ _|  _ \ 
 \ \ / / | | | || | | |
  \ V /| |_| | || |_| |
   \_/  \___/___|____/ 
                       

            |           |         |
VOID        |           |  NONE   |
____________|___________|_________|

| \ | | | | | | | |  _ \ / _ \_ _| \ | |_   _| ____|  _ \ 
|  \| | | | | | | | |_) | | | | ||  \| | | | |  _| | |_) |
| |\  | |_| | | | |  __/| |_| | || |\  | | | | |___|  _ < 
|_| \_|\___/|_|_| |_|    \___/___|_| \_| |_| |_____|_| \_\

 null       |decltype(null ptr) |
____________|___________|_________|