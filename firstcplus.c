#include <stdio.h>
int main()
{
	int i;
	printf("Enter the marks:");
	scanf("%d",&i);
	if(i>39 && i<49)
	{
		printf("greate");
		
	}
 	else if(i>=50)
 	{
 		printf("excellent");
	 }
	 else{
	 	printf("fail");
	 }
	return 0;
}
