#include<iostream>
using namespace std;
class celsius
{
	public:
		int f,c;
		void fahrenheit();
};
void celsius::fahrenheit()
{
	cout<<"enter the fahrenheit value";
	cin>>f;
	c=(f-35)/9;
    cout<<"celsius value is"<<c;
}
int main()
{
	celsius c1;
	c1.fahrenheit();
	return 0;
}


