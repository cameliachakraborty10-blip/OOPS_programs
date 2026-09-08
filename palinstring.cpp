#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str,rev="";
	int i;
	cout<<"Enter the string";
	cin>>str;
	for(int i=str.length()-1;i>=0;i--)
	{
		rev+=str[i];
	}
	if(rev==str)
	{
		cout<<"Palindrome string";
	}
	else
	{
		cout<<"Not palindrome string";
	}
	return 0;
}
