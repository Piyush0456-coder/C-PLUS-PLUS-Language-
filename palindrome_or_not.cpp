#include<stdio.h>
int main()
{
	int no;
	printf("Enter a number: ");
	scanf("%d",&no);
	int n, rev=0, r;
	n=no;
	while(no!=0)
	{
		r=no%10;
		rev=rev*10+r;
		no=no/10;
//		no++;
	}
	if(rev==n){
		printf("rev is %d and n is %d \n It's a palindrome number",rev,n);
	}
	else
	printf("rev is %d and no is %d \n It's not a palindrone number",rev,n);
	
	return 0;
}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char name[20];
//	printf("Enter the name :");
//	scanf("%s",&name);
//	//now loop for checking the palindrome
//	int i,j,len1=0;
//	int len = strlen(name);
//	//printf("%d",len); 
//	for(i=0, j=len-1; i<len, j>=0; i++, j--)
//	{
//		if(name[i] == name[j])
//		{
//			len1+=len;
//		}
//	}
//	if(len1==(len*len))
//	{
//		printf("%s is a palindrome",name);
//	}
//	else
//	{
//		printf("%s is not a palindrome",name);
//	}
//
//	return 0;
//}
