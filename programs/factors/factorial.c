#include <stdio.h>

long fact(int n){
    if( n == 0 || n == 1){
        return 1;
    } else {
        return n * fact(n-1);
    }

}
int main() {
int number ;
printf("type the factorial digit you want \n");
scanf("%d",&number);
printf("%ld",fact(number));
return 0;
};