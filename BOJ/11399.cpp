#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	
	vector<int> a;
	for(int i=0; i<N; i++){
		int temp;
		scanf("%d", &temp);
		a.push_back(temp);

	}
	
	sort(a.begin(), a.end());
	
	int result = 0;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<=i; j++){
			result = result + a[j];
		}
	}
	printf("%d\n", result);
	

	return 0;
}
