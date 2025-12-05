#include <stdio.h>

int main()
{
	int quantity[5];
	float price[5] = {50, 30, 20, 100, 75};
	float a = 0, b = 0, gst, total;
	int i;

	printf("Enter quantity of 5 items:\n");
	for(i = 0; i < 5; i++)
	{
		printf("Item %d\n: ", i);
		scanf("%d", &quantity[i]);
		a = quantity[i] * price[i];
	}

	if(a > 1000) 
	b = a * 0.10;
	else if(a > 500)
	b = a * 0.05;

	gst = (a - b) * 0.05;
	total = a - b + gst;

	printf("a:%.2f\n", a);
	printf("b:%.2f\n", b);
	printf("GST (5%%):%.2f\n", gst);
	printf("Total Bill:%.2f\n", total);
	return 0;
}
