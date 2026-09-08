#include<iostream>
using namespace std;

void swap(int x,int y)
{
	
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"\n The values after swapping "<<x<<" "<<y;
}

int main()
{
	int a=10;
	int b=20;
	cout<<"\n The values before swapping "<<a<<" "<<b;
	swap(a,b);
	return 0;
	
}
