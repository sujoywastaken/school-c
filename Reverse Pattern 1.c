#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter Limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n+1-i;j>=1;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
        printf("\n");
    }
    getch();

}
