#include<stdio.h>
int main()
{
int amt;
float bal;
scanf("%d",&amt);
scanf("%f",&bal);
if(amt%5==0 && ((float)amt+0.5)<bal)
printf("%.2f",bal-0.50-(float)amt);
else
printf("%.2f",bal);
return 0;
}
