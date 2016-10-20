#include<stdio.h>
#include<conio.h>
void main()
{
int amount,a=0,b=0,c=0,d=0,e=0,count=0;
clrscr();
printf("\n Enter the amount:");
scanf("%d",&amount);
printf("\n rupees %d (*currency notes are 500,100,50,10,1)",amount);
while(amount>=500)
{
a=amount/500;
amount=amount%500;break;
}
while(amount>=100)
{
b=amount/100;
amount=amount%100;
break;
}
while(amount>=50)
{
c=amount/50;
amount=amount%50;
break;
}
while(amount>=10)
{
d=amount/10;
amount=amount%10;
break;
}
while(amount>=1)
{
e=amount/1;
amount=amount%1;
break;
}
count=a+b+c+d+e;
printf("\n (%d*500)+(%d*100)+(%d*50)+(%d*10)+(%d*1)",a,b,c,d,e);
printf("\n  count= %d currency notes",count);
getch();
}

