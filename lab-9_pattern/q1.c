// Right Half Pyramid (Reverse Numbers)

// 1
// 21
// 321
// 4321
// 54321

#include<stdio.h>

 int main(){

    for(int i=1; i<=5; i++){
        for(int j = i;j>=1;j--){
            printf("%d",j);
        }
         printf("\n");
    }
    return 0;
}
