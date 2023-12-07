#include<stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);


    /*
     * If  num modulo division 9 is 0 
     * and num modulo division 7 is 0 then
     * the number is divisible by 9 and 7 both
     */
    if((num % 9 == 0) && (num %   7 == 0))
    {
        printf("Number is divisible by 9 and 7");
    }
    getch();
}
