#include <stdio.h>
int main(){
	int a,b;
	char str[10];
	printf("Enter Your name:: ");
	scanf("%[^\n]s",&str);
	printf("Name = %s \n",str);
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);	
	printf("\nBefore swaping value of a = %d \t b = %d",a,b);
	a = a^b;
	b = a^b;
	a = b^a;
	printf("\n\nAfter swaping value of a = %d \t b = %d",a,b);
	return 0;
}
