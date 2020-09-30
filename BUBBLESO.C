#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
long long int n;
printf("Enter the number of elements of array \n");
scanf("%lld",&n);
long long int a[n],i,j,temp;
printf("enter the element of array\n");
for(i=0;i<n;i++)
{
scanf("%lld",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("element of array after sorting are:\n");
for(i=0;i<=n-1;i++)
{
printf("%lld\n",a[i]);
}
return 0;
}
