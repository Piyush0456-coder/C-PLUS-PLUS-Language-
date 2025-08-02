#include <stdio.h>
int main(){
	int num, i,j;
	int count=0;
	printf("Enter a number :");
	scanf("%d",&num);
	for(i=2; i<num;i++){
		if(num%i==0){
			count++;
		}		
	}
	 if(count>=1)
	 printf("\n %d is not prime number ",num);
	 else{
	 	printf("%d is  a prime number",num);
	 }
	return 0;
}
//
//#include <stdio.h>
//int main(){
//	int num, i,j;
//	printf("Enter a number: ");
//	scanf("%d",&num);	
//	if(num==2||num==3||num==5||num==7)
//	printf("%d is a prime number \n",num);
//	else if(num%2==0||num%3==0||num%5==0||num%7==0)
//	printf("%d is notttttttttt a prime number \n",num);
//	else 
//	printf("%d is a prime number\n",num);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int num, i,j;
//	printf("Enter a number: ");
//	scanf("%d",&num);	
//	for(i=2; i<=num; i++)
//	if(i==2||i==3||i==5||i==7);
////	printf("%d is a prime iber \n",i);
//	else if(i%2==0||i%3==0||i%5==0||i%7==0);
////	printf("%d is notttttttttt a prime iber \n",i);
//	else 
//	printf("%d is a prime iber\n",i);
//	return 0;
//}
