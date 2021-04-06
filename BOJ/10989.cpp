#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[10001];

int main()
{
	scanf("%d", &n);
	int temp;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &temp);
		arr[temp]++;
	}
	
	for(int i=0; i<10001; i++){
		if(arr[i]!=0)
		{
			for(int j=0; j<arr[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}
	
	return 0;
}
