#include<stdio.h>
int main()
{
	int units;
	float amount,charge,totalamount;
	printf("enter total units");
	scanf("%d",&units);
	if(units<=50)
	{
		amount=units*2.5;
		charge=20;
	}
	else if(units<=100)
	{
		amount=units*3.0;
		charge=30;
	}
	else if(units<=150)
	{
		amount=units*3.5;
		charge=40;
	}
	else if(units<=200)
	{
		amount=units*4.0;
		charge=50;
	}
	else
	{
		amount=units*5.0;
		charge=50;
	}
	totalamount=amount+charge;
	printf("electricity bill=%2f",totalamount);
	return 0;
}
