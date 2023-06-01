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
				printf("두 문자열이 동일합니다.\n");
				break;
			}			
		}
		else
		{
			printf("두 문자열이 동일하지 않습니다.\n");
			break;
		}
		cnt++;
	}
	system("pause");
}