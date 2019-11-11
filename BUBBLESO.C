#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,temp;
clrscr();
printf("how many elements:");
scanf("%d",&n);
printf("enter the element of array:");
for(i=0;i<=n-1;i++)
{
scanf("%d",a[i]);
}
for(j=0;j<=n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
printf("element of array after sorting are:\n");
for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
}
getch();
}