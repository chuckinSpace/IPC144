#include <stdio.h>

#define SIZE 2

struct employee{
	int id;
	int age;
	double salary;
};

int main(void){
	int input=0,i,valid_emp=0;
	struct employee emp[SIZE]={{0}};

	printf("---=== EMPLOYEE DATA ===---\n");

	do{
	       
		printf("\n");
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n");
		printf("\nPlease select from the above options: ");
		scanf("%d",&input);

	switch(input){

		case 1:
			printf("\nEMP ID  EMP AGE EMP SALARY");
			printf("\n");
			printf("======  ======= ==========");
			printf("\n");
			for(i=0;i<SIZE;i++){
				if(emp[i].id > 0){
				printf("%6d%9d%11.2lf",emp[i].id,emp[i].age,emp[i].salary);
				printf("\n");
				}
			}break;
		
		case 2: 
			for(i=0;i<SIZE;i++){
				if(emp[i].id > 0){
				valid_emp ++;
				}
			printf("\nAdding Employee\n");
			printf("===============\n");
			if(valid_emp >= SIZE){
				printf("ERROR!!! Maximum Number of Employees Reached\n");
			}else{
			       
			       
				printf("Enter Employee ID: ");
				scanf("%d",&emp[i+valid_emp].id);
				printf("Enter Employee Age: ");
				scanf("%d",&emp[i+valid_emp].age);
				printf("Enter Employee Salary: ");
				scanf("%lf",&emp[i+valid_emp].salary);

					 
 
		     }break;
		
		   

		default : printf("\nExiting Employee Data Program. Good Bye!!!\n");
			  break;
			
		     }
		}


	}while(input != 0 );

     

	return 0;
}
