#include <STC89C5xRC.H>
//�����Զ������ͣ��򻯴����д
//typedef unsigned char u8;
//typedef unsigned int u16;

//���󣺾�̬�������ʾ,�õ��ĸ��������ʾ5
//�ֲ���Ϣ��DIG5��ӦY4,P15 P14 P13 1 0 0
//A B C D ...���Ƶ�������ܣ��������Ӧ0x6D

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

