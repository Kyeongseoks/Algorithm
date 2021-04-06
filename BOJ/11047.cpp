#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, K;
	int result;
	scanf("%d %d",&N, &K);
	
	vector<int> arr;
	int temp;

	for(int i=0; i<N; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	
	for(int i=N-1; i>=0; i--){
		result += K/arr[i];
		K %= arr[i];
	}
	printf("%d\n", result);
	
	return 0;
}
