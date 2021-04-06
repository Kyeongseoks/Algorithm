#include <iostream>

using namespace std;

int main()
{
	int money;
	int result = 0;
	scanf("%d", &money);
	
	money = 1000-money;
	
	result += money/500;	
	money = money % 500;
	
	result += money/100;
	money = money % 100;
	
	result += money/50;	
	money = money % 50;
	
	result += money/10;	
	money = money % 10;
	
	result += money/5;	
	money = money % 5;
	
	result += money/1;	
	money = money % 1;
	
	printf("%d\n", result);
	
	return 0;
}
