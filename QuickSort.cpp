#include <stdio.h>
#include <iostream>
#include <algorithm>

int a[10] = {3, 5, 6, 9, 1, 2, 4, 8, 10, 7};

void QuickSort(int *a, int start, int end)
{
	int temp;
	int key = start;
	int i = start + 1;
	int j = end;
	
	if(i >= j)
	{
		return;
	}
	
	while(i <= j){
		while(a[key] >= a[i])
		{
			i++;
		}
		while(a[key] <= a[j] && j > start)
		{
			j--;
		}
		if(i > j)
		{
			temp = a[key];
			a[key] = a[j];
			a[j] = temp;
			
		}
		else
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	QuickSort(a, start, j-1);
	QuickSort(a, j+1, end);
}


int main()
{
	QuickSort(a, 0, 9);
	int i;
	for(i=0; i<10; i++){
		printf("%d ", a[i]);
	}
	return 0;	
}
