//CREATED BY RAHUL TIMBALIYA
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j;
    clrscr();
    gotoxy(40,13);
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    printf("enter a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);
    }
    }
    printf("parint elements.....\n");
    for(i=0;i<3;i++)
    {
    printf("\n");
    for(j=0;j<3;j++)
    {
    printf("%d\t",a[i][j]);
    }
    }
    getch();
}
