// (x−y)2(x - y)^2(x−y)2  OR   ( x - y )2  

#include<stdio.h>

int main(){

    int x,y,ans;
    
    printf("Enter value of x and y :");
    scanf("%d %d",&x,&y);

    ans= (x - y) * (x - y); 
    printf("Ans is : %d",ans);

    return 0;
}