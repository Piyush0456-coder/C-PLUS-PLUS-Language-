#include <stdio.h>
int main(){
	int a,i;
	printf("Enter the value of A: ");
	scanf("%d",&a);
	if(a%2==0)		
	printf("The value is Even number %d",a);
	else
	printf("The value is Odd number %d",a);
	for(i=0; i<a;i++)
	printf("\n a :%d",i);
	return 0;
}
