#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int num;
    int mul, sub;
    int sum, div;
    printf("\n====================================\n");
    printf(" -: AGE Magic Game :-");
    printf("\n====================================\n");
    printf(":- Remind your age in your mind :- \n");
    printf(" :- Now multiply in age by 4 :- \n");

    printf(":- Now add 110 to the answer :- \n");
    printf(":- Now substract 70 to the answer :- \n");
    printf(":- Now divide the number by 2 :- \n");

    printf("\n====================================\n");
    printf(" -: Now Enter the Answer :-");
    printf("\n====================================\n");
    scanf("%d", &num);
    sub = num - 20;
    div = sub / 2;
    printf("\n====================================\n");
    printf("| Your Age is :- %d |", div);
    printf("\n====================================\n");
    return 0;
}