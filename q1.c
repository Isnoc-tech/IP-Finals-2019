#include <stdio.h>

int main(){
	
	int pizzaType, noPizza;
	char size, creditCard, loyaltyCustomer, onlineOrder;
	float costPizza = 0, discount = 0, netAmount = 0, total = 0;
	
	printf("Input pizza type: ");
	scanf("%d", &pizzaType);

	
	while (pizzaType != -1){
		
		if(pizzaType == 1 || pizzaType == 2){
			
			printf("Input the pizza size : ");
			scanf("%s", &size);	
			
			if(size == 'M' || size == 'L'){
				
				printf("Input the number of pizzas: ");
				scanf("%d", &noPizza);
					
				
				if(pizzaType == 1){
					
					if(size == 'M'){
				
						costPizza = 975.00 * noPizza;
					}
					
					else{
						costPizza = 1720.00 * noPizza;
					}					
				}
				else if(pizzaType == 2){
					if(size == 'M'){
				
						costPizza = 1000.00 * noPizza;
					}
					
					else{
						costPizza = 1820.00 * noPizza;
					}
				}	

			}
			
			else{
				printf("Invaild type of pizzas\n");
			}
				
		}
		else{
			printf("Invaild Pizza type\n");
		}
		
		total += costPizza;
		
		printf("\n\nInput pizza type: ");
		scanf("%d", &pizzaType);

		
	}
	
	printf("Are you paying by credit card (Y/N): ");
	scanf("%*c%c", &creditCard);
	
	printf("Are you a loyalty customer (Y/N: ");
	scanf("%*c%c", &loyaltyCustomer);
	
	printf("Is this an online order (Y/N): ");
	scanf("%*c%c", &onlineOrder);
	
	if(creditCard == 'Y' || creditCard == 'y'){
		
		discount = total * 20 / 100.0;
	}
	
	else if(loyaltyCustomer == 'Y' || loyaltyCustomer == 'y'){
		
		discount = total * 15 / 100.0;
	}
	
	else if(onlineOrder == 'Y' || onlineOrder == 'y'){

		discount = total * 5 / 100.0;
	}		
	
	netAmount = total - discount;
	
	printf("Total bill amount: %.2f\n", total);
	printf("Discount: %.2f\n", discount);
	printf("Net amount: %.2f\n", netAmount);	
	
	return 0;
}
