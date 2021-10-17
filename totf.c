# 8051-microcontoller-2-
To code two LED's on and two LED's off alternatively 
#include<reg51.h>
void delay(unsigned int count)
{
unsigned int i;
while(count)
{
i=115;
while(i>0)
i--;
count--;
}
}
void main()
{
while(1)
{
p2=0xcc;
delay(1000);
p2=0x33;
delay(1000);
}
}
