#include <iostream>
using namespace std;

int main() 
{
	int count = 0 , n;
	
	
	cout<<"Enter value of N : ";
	cin>>n;
	int original = n;
	
	while(n != 0)
	{
		n = n / 10;
		count++;
	}
	cout<<"The number of digits in "<< original <<" is : "<<count<<endl;
	
	return 0;
}
