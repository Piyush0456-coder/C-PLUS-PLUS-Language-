#include <stdio.h>
int main(){
    //ASSUMED MEAN FOR FIXI VALUE IF CONTINOUS DATA IS GIVEN
	float mean=0;
	int n,i;
	
	//STEP 1 ENTER THE VALUE OF N
	printf("Enter the value of n: ");
	scanf("%d",&n);
	//all variable use in the code 
	int A;	//for assumed mean (A,d)
	int xi[n], fi[n],fidi[n],di[n];
	int class_int1[n],class_int2[n];     
	float sumof_fidi=0, sumof_fi=0;
	
	
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
	//step 5 for A value
	//FOR TAKING THE MIDDLE VALUE OF X TO A
	//FOR EVEN OR ODD NUMBERS
	if(n%2==1){
		A = xi[(n+1)/2-1];		//for giving the middle value of x to A(assumed value )
	}
	else if(n%2==0){
		A = xi[(n/2)-1];  	//for giving the middle value of x to A
	}
	//STEP 6 FOR GETING DI 
	for(i=0; i<n; i++){
		di[i] =  xi[i]-A;  
	}
	//for geting the fidi
	for(i=0; i<n; i++){
		fidi[i] =  fi[i]*di[i];  
	}
	
	
	
	//STEP 7 FOR PRINTING ALL THE ELEMENTS IN A TALBLE STRUCTURE AT CONSOLE.SCREEN
	//here is the printing of table value in console screen
	printf("\n----------------------------------------------\n");
	printf("class ");				//PRINTING OF CLASS INTERVALS
	for(i=0; i<n; i++){
		printf("|%d-%d  |",class_int1[i],class_int2[i]);
	}
	printf("\n----------------------------------------------\n");
	printf("xi      ");					//PRINTING OF XI VALUES
	for(i=0; i<n; i++){
		printf("|%d |",xi[i]);
	}
	printf("\n----------------------------------------------\n");
	printf("fi      ");				//PRINTING OF FI VALUES
	for(i=0; i<n; i++){
		printf("|%d |",fi[i]);
	}
		
	printf("\n----------------------------------------------\n");
	//printing of di
	printf("di(xi-A)    ");				//PRINTING OF DI
	for(i=0; i<n; i++){
		printf("|%d |",di[i]);
		
	}
	printf("\n----------------------------------------------\n");
	//printing of fidi
	printf("fidi    ");				//PRINTING OF FIXI
	for(i=0; i<n; i++){
		printf("|%d |",fidi[i]);
		sumof_fidi += fidi[i];
	}
	printf("\n----------------------------------------------");
	printf("\n----------------------------------------------");
	//step 7 To print the values and getting 
	// the value of summation of(fixi, fi) for mean
	
	
	
	printf("\n the value of A= %d",A);
 	printf("\nTHe value of summation of fidi :: %f",sumof_fidi);
 	printf("\nTHe value of summation of fi :: %f",sumof_fi);
 	printf("\n----------------------------------------------");
 	printf("\n----------------------------------------------");
 	printf("\n");
 	printf("\n----------------------------------------------");
	printf("\n----------------------------------------------");
 	printf("\n Assumed mean = A + (sumof_fidi/sumof_fi)");
 	printf("\n Assumed mean = %d + (%d/%d)",A,sumof_fidi,sumof_fi);
	mean = A + (sumof_fidi/sumof_fi);
 	
// 	step 8 for printing the mean
 	printf("\n MEAN :::::: %f",mean);	
	
	return 0;
}

