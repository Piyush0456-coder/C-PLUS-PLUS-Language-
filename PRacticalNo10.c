//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	FILE *ptr;
//	FILE *ptr2;
//	//FIrst is a reading pointer
//	ptr = fopen("1.txt","r");
//	// second is writing pointer
//	ptr2 = fopen("1(copyFile).txt","w");
//	
//	char str[100];
//	fgets(str,100,ptr);
//	fprintf(ptr2,str);
////	printf("First file text is: %s\n",str);
////	printf("Second File(copayFile) text is:%s",str);
//	printf("\n");
//	if(ptr==NULL){
//		printf("File is not created ERROR !");
//	}
//	else{
//		printf("FIle is created !");
//	}
//	printf("\n");
//	if(ptr2==NULL){
//		printf("CopyFile is not created ERROR !");
//	}
//	else if(ptr2!=NULL){
//		printf("CopyFIle is created !");
//	}
//	fclose(ptr);
//	fclose(ptr2);
//	return 0;
//}





#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *ptr;
	FILE *ptr2;
	//FIrst is a reading pointer
	ptr = fopen("1.txt","r");
	
	
	char str[100];
	while(fscanf(ptr,"%s ",str)==1){
		printf("%s ",str);
	}
	printf("\n");
	if(ptr==NULL){
		printf("File is not created ERROR !");
	}
	else{
		printf("FIle is created !");
	}
	printf("\n");
	
	fclose(ptr);
	 
	return 0;
}
