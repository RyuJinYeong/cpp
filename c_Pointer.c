#include<stdio.h>

int main()
{
	char a[10];
	char b[10];
	char *ap = a;
	char *bp = b;
	int cnt = 0;

	gets(a);
	gets(b);


	while (1)
	{
		if (*(ap + cnt) == *(bp + cnt))
		{
			if (*(ap + cnt) == NULL)
			{
				printf("�� ���ڿ��� �����մϴ�.\n");
				break;
			}			
		}
		else
		{
			printf("�� ���ڿ��� �������� �ʽ��ϴ�.\n");
			break;
		}
		cnt++;
	}
	system("pause");
}