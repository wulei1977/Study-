#include <reg51.h>
#include <intrins.h>

#define GPIO_LED P2 //P2口另取名为GPIO_LED

void Delay10ms(unsigned int);

// Header:
// File Name: 
// Author:
// Date:
void main()
{
	unsigned char n;
	GPIO_LED = 0x01;
	while(1)
	{
		for(n=0;n<7;n++)
		{
			GPIO_LED = _crol_(GPIO_LED, 1);//左位移
			Delay10ms(50);
		}
		for(n=0;n<7;n++)
		{
			GPIO_LED = _cror_(GPIO_LED, 1);//右位移
			Delay10ms(50);
		}
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