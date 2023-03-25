#include <stdio.h>

int main(){
	
	int ratings[3][4];
	int i,j;
	int total = 0, count = 0;
	float avg[3] = {0};
	float high;
	
	for(i = 0; i < 3; i++){
		printf("Movie %d\n", i+1);
		
		for(j = 0; j < 4; j++){
			printf("Reviewer %d Rating: ", j+1);
			scanf("%d", &ratings[i][j]);
			
			total += ratings[i][j];
		}
		
		avg[i] = total / 4.0;
		total = 0;
	}
	
	printf("\n\n");
	for(i = 0; i < 3; i++){
		
		for(j = 0; j < 4; j++){
			printf("%d\t", ratings[i][j]);
		}
		printf("\n");
	}
	
	high = avg[0];
	
	for(i = 0; i < 3; i++){
		
		if(high < avg[i]){
			high = avg[i];
			count = i + 1;
		}
	}
	
	for (i=0 ; i<3 ; ++i){
		
		printf("Movie %d\n",i+1);
		printf("Average rating: %.2f\n",avg[i]);
	}
	printf("\n\n");

	printf("Highest rated movie is :%d",count);	
	
}
