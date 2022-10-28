#include <stdio.h>

int main()
{
	int start, end, max;
	printf("Enter start, end, and max in this format: <start> <end> <max>");
	scanf("%d %d %d", &start, &end, &max);
	
	int i, sum = 0;
	for(i  = start; i < end; i++)
	{
		sum += i;
		if(sum > max){
			break;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
