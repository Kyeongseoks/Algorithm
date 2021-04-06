#include <iostream>
#include <algorithm>
using namespace std;

int number, data[1000001];

int main()
{
	scanf("%d", &number);
	
	for(int i=0; i<number; i++){
		scanf("%d", &data[i]);
	}
	
	sort(data, data+number);
	
	for(int i=0; i<number; i++){
		printf("%d\n", data[i]);
	}
	return 0;	
}
