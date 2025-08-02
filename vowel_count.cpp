#include <stdio.h>

#include <string.h>
int main(){
	char input[20];
	int count=0;
	printf("Enter the string here->>>>>>>");
	gets(input);
	
	int len= sizeof(input);
	
	for(int i=0; i<len;i++){
//		printf("%c \t",input[i]);
		if(input[i]=='a'||input[i]=='e'||input[i]=='i'|input[i]=='o'||input[i]=='u')
		{
			count = count+1;
		}
		
	}
	printf("Total vowels in %s is %d",input,count);
	return 0;
}

//
//#include <stdio.h>
//int main(){
//	string in;
//	char input[100];
//	int count=0;
//	printf("Enter the string here->>>>>>>");
//	scanf("%s",&input);
//	int len= sizeof(input);
//	
//	for(int i=0; i<len;i++){
////		printf("%c \t",input[i]);
//		if(input[i]=='a'||input[i]=='e'||input[i]=='i'|input[i]=='o'||input[i]=='u')
//		{
//			count = count+1;
//		}
//		
//	}
//	printf("Total vowels in %s is %d",input,count);
//	return 0;
//}
