#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,A;
    printf("enter the value of side a:");
    scanf("%f",&a);
    printf("enter the value of side b:");
    scanf("%f",&b);
    printf("enter the value of side c:");
    scanf("%f",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        
    s=(a+b+c)/2;//semi perimeter
    A=sqrt(s*(s-a)*(s-b)*(s-c));
printf(" it is a valid triangle area=%f",A);
    }
    else{
        printf("it is an invalid triangle so area not defined");
    }
    return 0;
}