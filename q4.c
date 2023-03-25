#include <stdio.h>

int main(void){
	
	FILE *cfPtr;
	char ployaltyName[5];
	char loyaltyName[5];
	int loyaltyNumber, ployaltyNumber, flag = 0;
	int i;
	
	cfPtr = fopen("loyalty.dat", "a+");
	
	if(cfPtr == NULL){
		printf("File can't be open");
		return -1;
	}
	
	for(i = 0; i < 5; i++){
		
		printf("Enter the name: ");
		scanf("%s", loyaltyName); 
		
		printf("%s", "Enter the number: ");
		scanf("%d", &loyaltyNumber);
		
		fscanf(cfPtr, "%d %s\n", &ployaltyNumber, &ployaltyName);
		
		while(!feof(cfPtr)){
		
			if(ployaltyNumber == loyaltyNumber){
				flag = 1;
			}
			
			fscanf(cfPtr, "%d %s\n", &ployaltyNumber, &ployaltyName);	
		}
		
		if(flag == 0){
			fprintf(cfPtr, "\n%d %s", loyaltyNumber, loyaltyName);
		}		
	}
				
	fclose(cfPtr);
	return 0;
}
