#include <REGX51.H>
#include <intrins.h>

#define GPIO_LED P2
sbit K1=P0^0;
void Delay10ms();

void main()
{
	unsigned int i,j;
	j=0x01;

	while(1)
	{
		GPIO_LED = j;

	}
}

/*******************************************************************************
* 函数名         : Delay10ms
* 函数功能		   : 延时函数，延时10ms
* 输入           : 无
* 输出         	 : 无
*******************************************************************************/
void Delay10ms(unsigned int c)   //误差 0us
{
    unsigned char a,b;
    for(;c>0;c--)
        for(b=38;b>0;b--)
            for(a=130;a>0;a--);
}