#include <stdio.h>

//	‚R‚c”Šw‚Ì‰Û‘è
int main()
{
	printf("<!DOCTYPE html1>\n");
	printf("<mata charset=\"UTF-8\">\n");
	printf("<title>99</title>\n");
	printf("<hi>99</hi>\n");
	printf("<table>\n");
	
	printf("<th>");
	for(int i = 1; i < 10; i++)
	{
		printf("<th>%2d\n"i);
	}

	for(int j = 1 ; j < 10; j++)
	{
		printf("<th>%d\n",j);

		for(int k = 1 ; k < 10; k++)
		{
			printf("<td>%d\n",j*k);
		}
	}
	return 0;
}