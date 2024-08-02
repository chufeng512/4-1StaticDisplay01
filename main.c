#include <STC89C5xRC.H>
//增加自定义类型，简化代码编写
//typedef unsigned char u8;
//typedef unsigned int u16;

//需求：静态数码管显示,让第四个数码管显示5
//手册信息：DIG5对应Y4,P15 P14 P13 1 0 0
//A B C D ...控制单个数码管，数字五对应0x6D

void main()
{
	P15 = 1;
	P14 = 0;
	P13 = 0;
	
	P0 = 0x6D;
	
	while(1)
	{
	}
}

