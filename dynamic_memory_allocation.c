#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i;
	printf("Enter the length of n: ");
	scanf("%d",&n);
	int* ptr;
	ptr = (int*) malloc(n*sizeof(int));
	int* p = ptr;

	for(i=1; i<=n; i++){
		printf("Enter the element's[%d]: ",i);
		scanf("%d",&(*ptr));
		ptr++;
	}
	for(i=1; i<=n; i++){
		printf("%d ",(*p));
		p++;
	}
	
	
	return 0;
}
