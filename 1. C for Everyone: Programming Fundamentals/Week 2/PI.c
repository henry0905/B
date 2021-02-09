#include<stdio.h>
#define PI 3.14159
int main(void)
{ 

    int radius; float a;
    printf("Enter radius: ",&radius);
    scanf("%d", &radius);
    a=4*radius*radius*radius*PI/3;
    printf("volume is : %9.6f \n\n", a );
    return 0;
}