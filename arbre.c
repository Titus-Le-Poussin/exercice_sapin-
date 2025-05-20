#include <stdio.h>




int main()
{
    int LineNum;
    printf("how many line: \n");
    scanf("%d", &LineNum);
    for (int i = 0 ; i <= LineNum; i++) {
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("||");
    return 0;

    }
