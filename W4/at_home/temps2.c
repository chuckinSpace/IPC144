#include <stdio.h>

#define NSIZE 10

int main(void){

	int size,i,max=0,min=40,total_high=0,total_low=0,total,number_days;
	int high[NSIZE],low[NSIZE];
	float average=0;
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
	printf("Day  Hi  Low\n");
       
	for(i=0;i<size;i++){

		
		 printf("%d    %d    %d\n",i+1,high[i],low[i]);

	}

	for(i=0;i<size;i++){

		if(max<high[i]){

			max = high[i];
			
		}

		if(min>low[i]){

			min = low[i];
			

		}
	}
	
	printf("\n");
	printf("The highest temperature was %d, on day %d\n",max,i);
	printf("The lowest temperature was %d, on day %d\n",min,i);
	
	do{

		 printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
		 scanf("%d",&number_days);
		 
		  if( (number_days > 0 &&  number_days < 5 )){
			 total_high=0;
			 total_low=0;
			 
			for(i=0;i<number_days;i++){
				total_high += high[i];
				total_low += low[i];
				
			 }
		    total = (total_low + total_high);
		    average = (float)total / (float)(number_days * 2);
	     //     printf("The average temperature up to day %d is: %.2f\n",number_days,average);
		  
		  }else if(number_days == 0 || number_days > 4){
			printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d",&number_days);
		  
		  }
		  if( (number_days > 0 &&  number_days < 5 )){
			 total_high=0;
			 total_low=0;
			 
			for(i=0;i<number_days;i++){
				total_high += high[i];
				total_low += low[i];
				
			 }
		  total = (total_low + total_high);
		  average = (float)total / (float)(number_days * 2);
		  printf("\nThe average temperature up to day %d is: %.2f\n",number_days,average);
		  

		  }else if(number_days < 0){
			printf("\nGoodbye!\n");
		  }
	}while(number_days > 0 && number_days < 5);
	       
	 

       return 0;
}
