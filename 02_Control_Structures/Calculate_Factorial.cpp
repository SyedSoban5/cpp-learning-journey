#include <iostream>
using namespace std;

int main() 
{
	int n;
	unsigned long long factorial = 1;
	
	cout<<"Enter value you want factorial:";
	cin>>n;
	
	if (n <= 0)
	cout<<"Factorial is not valid for zero and negative values."<<endl;
	
	else 
	{
		for (int i=1 ; i<=n ; i++)
		factorial *= i;
		
		cout<<"Factorial of "<<n<<"is:"<<factorial<<endl;
	}
	return 0;
}
