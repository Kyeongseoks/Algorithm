#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> a ;
	a.push_back(1);
	a.push_back(4);
	a.push_back(1);
	a.push_back(2);
	a.push_back(4);
	
	for(int x : a){
		cout<<x<<' ';
	}
}
