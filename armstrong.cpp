#include<iostream>
using namespace std;
int main()
{
	int n,n1,sum=0,rem;
	cout<<"enter the number";
	cin>>n;
	n1=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n/=10;
	}
	if(n1==sum)
	{
		cout<<"armstrong";
	}
	else
	{
		cout<<"not a armstrong";
	}
	return 0;
}
