#include<reg51.h>
#include"Delay.h"

sbit LED0 = P2^0;
void main()
{
	//P2=0x00;
	while(1)
	{
		unsigned char i;
		for(i=0; i<0xff; i++)
		{
			P2 = i;
			Delay();
		}
		/*
		P2 = 0x00;
		Delay();
		P2 = 0x01;
		Delay();
		P2 = 0x02;
		Delay();
		P2 = 0x04;
		Delay();
		P2 = 0x08;
		Delay();
		P2 = 0x10;
		Delay();
		P2 = 0x20;
		Delay();
		P2 = 0x40;
		Delay();
		P2 = 0x80;
		Delay();
		P2 = 0xff;
		Delay();
		P2 = 0xff;
		Delay();
		P2 = 0xff;
		Delay();
		P2 = 0xff;
		Delay();
		P2 = 0xff;
		Delay();
		P2 = 0xff;
		Delay();
		//LED0 = 0;
		*/
	}
}