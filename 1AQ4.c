#include <stdio.h>
#include <assert.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();

int main(void)
{
	
	float amount, interestRate, total;
	int i;
	
	testTotalAmount();
	
	printf("Enter Initial Amount to be invested : ");
	scanf("%f", &amount);
	
	printf("Enter Annual interest Rate(in percentage) : ");
	scanf("%f", &interestRate);
	
	for(i = 0; i < 5; i++){
		amount = findTotalAmount(calcAnnualInterest(interestRate, amount), amount);
		printf("Amount after year %d : %.2f\n", i + 1, amount);
	}
	
	
	return 0;
}

float calcAnnualInterest(float interestRate, float amount){
	
	float interest = 0, additional = 0;
	
	if(amount > 100000000)
	{
		
		additional = amount * 0.5;
	}
	
	interest = amount * interestRate / 100.0 + additional;
	return interest;
}

float findTotalAmount(float interestRate, float amount)
{
	
	float totalAmount;
	
	totalAmount = interestRate + amount;
	return totalAmount;
	
}

void testTotalAmount()
{
	
	assert(findTotalAmount(calcAnnualInterest(10, 1000), 1000) == 1100.00);
	assert(findTotalAmount(calcAnnualInterest(5, 500), 500) == 525.00);
}
