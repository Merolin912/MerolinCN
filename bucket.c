#include<stdio.h>
void main()
{
int incoming,outgoing,buff_size,n,store=0;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter the buffer size:");
scanf("%d",&buff_size);
printf("Enter the outgoing rate:");
scanf("%d",&outgoing);
while(n!=0)
{
printf("incoming packet:");
scanf("%d",&incoming);
if(incoming<=(buff_size-store))
{
store+=incoming;
}
else
{
printf("%d packets dropped\n",incoming-(buff_size-store));
printf("Buffer size %d out of %d\n",store,buff_size);
store=buff_size;
}
store=store-outgoing;
printf("After outgoing %d packets left in buffer\n",(store));
n--;
}
}
