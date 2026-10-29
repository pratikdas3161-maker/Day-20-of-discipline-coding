/* Program to read and print a string */
#include<string.h>
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    char a[n];
    printf("-----------Enter a string-------------------");
    scanf("\n%s",a);
    printf("\nThe string is: %s",a);
    return 0;


}