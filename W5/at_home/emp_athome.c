#include <stdio.h>

#define SIZE 4

struct employee{
	int id;
	int age;
	double salary;
};

int main(void){
	int input=0,i,valid_emp=0,input_update,input_remove;
	struct employee emp[SIZE]={{0}};

	printf("---=== EMPLOYEE DATA ===---\n");
      

	
	do{
	       
		printf("\n");
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
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
		
		case 3: printf("\nUpdate Employee Salary\n");
			printf("======================\n");
			printf("Enter Employee ID: ");
			scanf("%d",&input_update);
			
			
			for(i=0;i<SIZE;i++){
			       
				if(emp[i].id == input_update){
				printf("The current salary is %.2lf\n",emp[i].salary);
				printf("Enter Employee New Salary: ");
				scanf("%lf",&emp[i].salary);
				}
			}break;

		case 4 :
			printf("\nRemove Employee\n");
			printf("===============\n");
			printf("Enter Employee ID: ");
			scanf("%d",&input_remove);

			for(i=0;i<SIZE;i++){

				if(emp[i].id == input_remove){

				emp[i].id = 0;
				valid_emp--;
				}
			   
			}
		     printf("Employee %d will be removed\n",emp[i].id);
		     break;          
		     default :  if(input !=0){
				printf("\nERROR: Incorrect Option: Try Again\n");
				}
		      break;
			
		     }
		}


	}while(input != 0 );
      
       printf("\nExiting Employee Data Program. Good Bye!!!\n");

	return 0;
}
