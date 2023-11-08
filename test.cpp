#include<stdio.h>
int main()
{
	const float jpy = 127.65;
	const float british = 0.79;
	
	float exchange_rate,USD;
	printf("ENter USD : $");
	scanf("%f",&USD);
	
	exchange_rate = (USD/10);
	printf("Exchange rate = %0.0f$\n",exchange_rate);
	USD = USD - exchange_rate;
	
	float JAP = (USD*1/2*jpy);
	float BRT = (USD*1/2*british);
	
	printf("JPY = %0.0f\n ",JAP);
	printf("BRT = %0.2f\n ",BRT);
	
	
	
	return 0;
}
