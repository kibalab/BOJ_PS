#include <stdio.h>
int main()
{
	while(1)
	{
		int input;

		scanf("%d", &input);

		for(int i = 2; 1; i++)
		{
			int minY = 9999999, minX;
			float y = i+input/i;
			if((y - (int)y) > 0) continue;
			else
			{
				if(minY > y)
				{
					minY = y;
					minX = i;
					continue;
				}
				printf("Minimum perimeter is %d with dimensions %d x %d", i * 2, i, i);
				break;
			}
		}
		break;
	}

}
