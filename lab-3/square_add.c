// (x+y)2(x + y)^2(x+y)2    OR  ( x + y )2  

#include <stdio.h>

int main(){
    int x,y,result;

    printf("Enter value of x and y :");
    scanf("%d %d",&x,&y);

    result= (x + y) * (x + y);
    printf("result is : %d",result);

    return 0;
}