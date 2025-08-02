#include <stdio.h>
union data{
	int i;
	float f;
	char c[5];
};
struct emp{
	char name[10];
	int emp_id;
	int emp_salary;
};
int main(){
	int i;
	struct emp e1[2];
	for(i=0; i<2; i++){
		printf("Enter the value of name:");
		scanf("%[^\n]s",&e1[i].name);
		printf("Enter ID:");
		scanf("%d",&e1[i].emp_id);
		printf("Enter salary: ");
		scanf("%d",&e1[i].emp_salary);
	}
	for(i=0; i<2; i++){
		printf("\nName: %s",e1[i].name);
	}
	return 0;
}
