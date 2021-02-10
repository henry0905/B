#include <stdio.h>
#include <math.h>

/*
To run code:
$ gcc sin.c -o sin.exe
$ sin.exe
*/

#define PI 3.14159265

int main () {
    // Give the parameters
   double x, ret, val;
    // Set input
    printf("Enter the degree: ",&x);
    scanf("%lf", &x);
   val = PI / 180;
   ret = sin(x*val);
   printf("The sine of %lf is %lf degrees \n", x, ret);
   int a =3, b=4; 
  // int c;
   //c = ++a + b++;
  // printf("++a %d \n",++a);
  // printf("a++ %d \n",a++);
    //printf("++b %d \n",++b);
   printf("b++ %d \n",b++);
   // printf("c ne %d \n", c);
   printf("check\n");
   printf("check code\n");
   return(0);


}