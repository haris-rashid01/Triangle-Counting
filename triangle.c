#include <stdio.h>
int main(){
    int num = 0;
    printf("Enter any Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("%d", j);
        }
    printf("\n"); 
    }
    

    return 0;
}