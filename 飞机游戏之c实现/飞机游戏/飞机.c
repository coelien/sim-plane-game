#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>
int main()
{
	int i, j;
	int x = 5, y = 10,y0=10;
	int v = 1;
	int isfire = 0;
	int iskilled = 0;
	char c='d';
	
while (c!='@')
	{
		system("cls");
		//�ȷ���ʾ
		printf("\t|--------score--------|\n");
		printf("\t|            %03d      |\n", 100 * iskilled); 
		if (iskilled==1)
		{
			printf("exellent!!any type to exit\n");
			_getch();
			return 0;
		}
		//�ƶ��İ�
		if (iskilled == 0)                                                                         //��ʾ�У����ⲻ�ذɣ�
		{
			for (j = 0; j < y0; j++)
			printf(" ");
			printf("  +\n");
			y0 += v;
			if (y0 == 0 || y0 == 50)
			v = -v;
		}         
		//��ʾ���⣨����                                                      
		if (isfire == 0)                                                                       
		{
			
			for (i = 1; i < x; i++)
			{
				printf("\n");
			}
		}                     
		else
		{
		     for (i = 0; i < x; i++)
				{
					for (j = 0; j < y; j++)
					printf(" ");
					printf("  |\n");
				}
				if (y ==y0)
					iskilled = 1;
				isfire = 0;
		}
		//��ʾ�ɻ�
		for(j=0;j<y;j++)                                                                         
		printf(" ");
		printf("  *\n");
		for (j = 0; j<y; j++)
		printf(" ");
		printf("*****\n");
		for (j = 0; j<y; j++)
		printf(" ");
		printf(" * *\n");
	    //�ж��Ƿ�������
		if (_kbhit())                                              
		{
			c = _getch();
			if ('w' == c)
				x--;
			if ('d' == c)
				y++;
			if ('s' == c)
				x++;
			if ('a' == c)
				y--;
			if(' '==c)
			isfire=1;
		}
 }
	return 0;
}