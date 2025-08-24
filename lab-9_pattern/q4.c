// Inverted Right Half Pyramid (1 to 5).

// 12345
// 2345
// 345
// 45
// 5

#include <stdio.h>

int main()
{

    int i, j;
    for (i=1;i<=5;i++)
    {
        for (j=i;j<=5;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
