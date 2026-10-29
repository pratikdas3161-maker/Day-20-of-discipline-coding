/* Program to print elements of an array until null character is encountered */
#include<stdio.h>
int main()
{
    int a[6] = {1, 2, 3 ,4, 5,'\0'};
    int i = 0;
    while(a[i] != '\0')
    {
        printf("%d ", a[i]);
        i++;
    }
    return 0;
}