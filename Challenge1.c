#include <stdio.h>

//	3D Mathematics Challenge
int main()
{
	int i,j;
	printf("<!DOCTYPE html1>\n");
	printf("<mata charset=\"UTF-8\">\n");
	printf("<title>99</title>\n");
	printf("<hi>99</hi>\n");
	printf("<table>\n");
	
	printf("<th>");
	
	for(i = 1; i < 10; i++){
		printf("<th>%2d\n"i);
	}

	for(i = 1 ; i < 10; i++){
		printf("<th>%d\n",j);

		for(j = 1 ; j < 10; j++){
			printf("<td>%d\n",i*j);
		}
	}
	return 0;
}