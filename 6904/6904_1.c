#include <stdio.h>
#include <math.h>

int main()
{
	while(1)
	{
		int input;
		
		scanf("%d", &input);

		if(input == 0) return 0;

		int a, b;

		a = (int) sqrt(input);

		for(int i = 0; 1; i++)
		{
			b = input / (a + i);
			
			if(input % (a + i) != 0) continue;
			else
			{
				if(b > (a+i))
				{
					printf("Minimum perimeter is %d with dimensions %d x %d", ((a + i) + b) * 2, (a+i), b);
					break;
				}
				printf("Minimum perimeter is %d with dimensions %d x %d", ((a + i) + b) * 2, b, (a+i));
				break;
			}
		}
		printf("\n");

	}
}
