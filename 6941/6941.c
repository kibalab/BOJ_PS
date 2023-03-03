#include <stdio.h>
int main()
{
	int startDay, dayDuration;

	scanf("%d %d", &startDay, &dayDuration);

	printf("Sun Mon Tue Wed Thr Fri Sat\n");

	for(int i = 1; i < startDay + dayDuration; i++)
	{
		if(i < startDay)
		{
			printf("   ");
		}
		else
		{
			printf("%3d", i - startDay + 1);
		}
		if(i - startDay >= dayDuration) {printf("\n"); return 0;}
		printf(i%7 == 0 ? "\n" : " ");
	}
}
