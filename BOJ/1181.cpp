#include <iostream>
#include <algorithm>

using namespace std;

int N;
string data[20001];

bool compare(string a, string b)
{
	if(a.length() < b.length())
	{
		return 1;
	}
	else if(a.length() > b.length())
	{
		return 0;	
	}
	else
	{
		return a < b;
	}
}

int main()
{
	cin>>N;
	
	for(int i=0; i<N; i++)
	{
		cin>>data[i];
	}
	
	sort(data, data+N, compare);
	
	for(int i=0; i<N; i++){
		if(i>0 && data[i]==data[i-1]) continue;
		cout<<data[i]<<endl;
	}
	return 0;
}
