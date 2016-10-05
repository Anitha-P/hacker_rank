#include<stdio.h>
int main(void)
{
int m=21,cturn,yturn,temp=0;
do
{
printf("pick up the matchsticks(1-4)...........\n");
scanf("%d",&yturn);
if(yturn>4)
{
printf("pick only maximum of 4 TRY AGAIN !");
break;
}
cturn=5-yturn;
printf("CPU's turn.........\n CPU picks %d\n",cturn);
m=m-(cturn+yturn);
printf("available   %d\n",m);
if(m==1)
{
  break;
}
}while(m>=1);
printf("CPU WON");
return 0;
}
