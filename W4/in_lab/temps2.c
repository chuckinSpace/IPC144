#include <stdio.h>


int main(void){

	int size,i;
	int high[size],low[size];

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");



	do{

		 printf("Please enter the number of days, between 3 and 10, inclusive: ");
		 scanf("%d",&size);

		 if( (size < 3 ) || ( size > 10) ){

			 printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: "); 
			 scanf("%d",&size);
		 }

	 }while (( size < 3 || size > 10 ));

	printf("\n");

	for(i=0;i<size;i++){
		
		printf("Day %d - High: ",i+1);
		scanf("%d",&high[i]);
		printf("Day %d - Low: ",i+1);
		scanf("%d",&low[i]);

	}

	printf("\n");
	printf("Day Hit Low\n");
       
	for(i=0;i<size;i++){

		
		 printf("%d   %d    %d\n",i+1,high[i],low[i]);

	}




	return 0;
}
