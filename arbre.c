#include <stdio.h>

int main()
{
    int LineNum;

    printf("how many line: \n");
    scanf("%d", &LineNum);

    for (int i = 1 ; i <= LineNum; i++) {

        for (int k = 1; k <= LineNum - i; k++){
            printf(" ");
            }



        for (int j = 2; j <= 2 * i; j++){
            printf("*");

            }
        
        printf("\n");

    }
    printf("||")
    ;
    return 0;

    }
