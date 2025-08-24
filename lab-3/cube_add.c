// (x+y)3(x + y)^3(x+y)3    OR   ( x + y )3  

#include<stdio.h>

int main(){

    int x,y,result;

    printf("Enter value of x and Y :");
    scanf("%d %d",&x,&y);

    result=(x + y) * (x + y) * (x + y);
    printf("result is :%d",result);

    return 0;
}