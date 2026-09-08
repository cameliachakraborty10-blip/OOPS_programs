#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,temp,r;
	cout << "Enter a number";
	cin>> n;
	temp=n;
	
	while(temp>0)
	{
		r=temp%10;
		rev=rev*10+r;
		temp=temp/10;
	}
	if(rev==n)
	{
		cout << "Palindrome number";
	}
	else
	{
		cout << "Not palindrome number";
	}
	return 0;
}
