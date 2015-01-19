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
* ������         : Delay10ms
* ��������		   : ��ʱ��������ʱ10ms
* ����           : ��
* ���         	 : ��
*******************************************************************************/
void Delay10ms(unsigned int c)   //��� 0us
{
    unsigned char a,b;
    for(;c>0;c--)
        for(b=38;b>0;b--)
            for(a=130;a>0;a--);
}