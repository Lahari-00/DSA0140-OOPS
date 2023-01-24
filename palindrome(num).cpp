#include<iostream>
using namespace std;
int main()
{
	int n1,rem,reverse=0,num;
	cout<<"enter the number";
	cin>>num;
	n1=num;
	while(num!=0)
	{
		rem=num%10;
		reverse=reverse*10+rem;
		num/=10;
	}
	if(n1==reverse)
	{
	    cout<<"palindrome";
	}
	else
	{
		cout<<"not a palindrome";
	}
}
