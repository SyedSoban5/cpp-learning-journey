#include <iostream>
using namespace std;

int main() 
{
	double num1 , num2 , result = 0;
	char op;
	
	while (true)
	{
	cout<<"Enter Num1 : ";
	cin>>num1;
	
	cout<<"\nEnter Operator + , - , * and / : ";
	cin>>op;
	
	cout<<"\nEnter Num2 : ";
	cin>>num2;
	
	switch (op)
	{
		case '+':
			result = num1 + num2;
			cout<<"\n"<<num1<<" + "<<num2<<" = "<<result<<endl;
			break;
		case '-':
			result = num1 - num2;
			cout<<"\n"<<num1<<" - "<<num2<<" = "<<result<<endl;
			break;
		case '*':
			result = num1 * num2;
			cout<<"\n"<<num1<<" * "<<num2<<" = "<<result<<endl;
			break;
		case '/':
			if(num2 != 0)
			{
				result = num1 / num2;
				cout<<"\n"<<num1<<" / "<<num2<<" = "<<result<<endl;
			}
			else
			{
				cout<<"Invalid....Num2 should be grater than zero "<<endl;
			}
			break;
		default:
			cout<<"Invalid Operator! Please use +, -, *, or /"<<endl;
			continue;
			
	}
}
	return 0;
}
