// Inverted Right Half Pyramid (1 and 0 Alternating)

// 10101
// 1010
// 101
// 10
// 1

#include <stdio.h>

int main()
{

    int i, j;
    for (i=5;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }

    return 0;
}
