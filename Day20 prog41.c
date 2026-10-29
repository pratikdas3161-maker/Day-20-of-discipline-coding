/* C program to copy a string using array */
#include<stdio.h>
int main()
{
    int n ;
    printf("ENTER Size:");
    scanf("%d",&n);
    char a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the character:");
        scanf("\n%c",&a[i]);
    }
    int m;
    printf("Enter the size of string:");
    scanf("%d",&m);
    char b[m];
    int i=0;
    while(a[i]!='\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    printf("The copied string is: %s",b);
    return 0;

}