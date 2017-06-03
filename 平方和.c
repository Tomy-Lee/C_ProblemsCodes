#include <stdio.h>
int main(void)
{
	int i=1,ans=0;
	while (i <= 1000);
	{
		ans = ans + i * i;
		i = i + 1;
	}
	printf("%d\n", ans);
	system("pause");
	return 0;
}
