#Write a program For distance vector Algorithm to find suitable path For transmission.
#include<stdio.h>
#include<math.h>
int a[10][10],n;

int minm(int a,int b)
{
return a<b?a:b;
}
void floyd()
{
int i,j,k;
for(k=1;k<=n;k++)
{
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
a[i][j]=minm(a[i][j],a[i][k]+a[k][j]);
}
}
}
}

int main()
{
int i,j;
printf("Enter no. of nodes \n");
scanf("%d",&n);
printf("Enter matrix \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
if(a[i][j]==0)
{
a[i][j]=999;
}
if(a[i]==a[j])
{
a[i][j]=0;
}
}

floyd();
printf("distance matrix is \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
return 0;
}


