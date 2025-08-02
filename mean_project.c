#include <stdio.h>
int main(){
    //SIMPLE MEAN FOR FIXI VALUE IF CONTINOUS DATA IS GIVEN
	float mean=0;
	int n,i;
	
	//STEP 1 ENTER THE VALUE OF N
	printf("Enter the value of n: ");
	scanf("%d",&n);
	//all variable use in the code 
	int xi[n], fi[n],fixi[n];
	int class_int1[n],class_int2[n];     
	float sumof_fixi=0, sumof_fi=0;
	
	
	//STEP 2 ENTER THE VALUE OF CLASS INTERVAL (FOR CONTINOUS DATA)
	printf("\nEnter the value of class: \n");
	for(i=0; i<n; i++){
		printf("Write the value then press Enter button class[%d]:: ",i+1);
		scanf("%d %d",&class_int1[i],&class_int2[i]);
	}
	


	//STEP 3 for getting the xi BY XI = CLASS2 + CLASS1/2
	
	for(i=0; i<n; i++){		
		xi[i] = (class_int2[i]+class_int1[i])/2;
	}

	//STEP 4 FOR GETING INPUR FROM USER OF fi
	printf("\n\nEnter the value of f (fi): \n");	
	for(i=0; i<n; i++){
		printf("Write the value then press Enter button f[%d]:: ",i+1);
		scanf("%d",&fi[i]);
		sumof_fi += fi[i];
	}
	//STEP 5 FOR GETING FIXI BY FI*XI
	for(i=0; i<n; i++){
		fixi[i] =  fi[i]*xi[i];  
	}
	
	
	
	//STEP 6 FOR PRINTING ALL THE ELEMENTS IN A TALBLE STRUCTURE AT CONSOLE.SCREEN
	//here is the printing of table value in console screen
	printf("\n----------------------------------------------\n");
	printf("class ");				//PRINTING OF CLASS INTERVALS
	for(i=0; i<n; i++){
		printf("%d-%d ",class_int1[i],class_int2[i]);
	}
	printf("\n----------------------------------------------\n");
	printf("xi      ");					//PRINTING OF XI VALUES
	for(i=0; i<n; i++){
		printf("%d ",xi[i]);
	}
	printf("\n----------------------------------------------\n");
	printf("fi      ");				//PRINTING OF FI VALUES
	for(i=0; i<n; i++){
		printf("%d ",fi[i]);
	}
	printf("\n----------------------------------------------\n");
	printf("fixi    ");				//PRINTING OF FIXI
	for(i=0; i<n; i++){
		printf("%d ",fixi[i]);
		sumof_fixi += fixi[i];
	}
	printf("\n----------------------------------------------");
	printf("\n----------------------------------------------");
// 	printf("\nTHe value of summation of fixi is %f",sumof_fixi);
// 	printf("\nTHe value of summation of fi is %f",sumof_fi);
// 	mean = sumof_fixi/sumof_fi;
// 	printf("\nthe new value is %f",sumof_fi/sumof_fi);
// 	printf("\n MEAN :::::: %f",mean);	
	
	return 0;
}
