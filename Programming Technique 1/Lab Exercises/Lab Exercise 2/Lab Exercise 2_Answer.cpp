/*
ANGELA NGU XIN YI
A24CS0226
SECTION 3
14 NOVEMBER 2024
*/

#include <iostream>
using namespace std;

int main ()
{
	char ans;
	
	do{
	int num=0;
	int digit = 0;
	int sum = 0;
	
	cout << "Enter an integer number: ";
	cin >> num;
	
	do
	{
		digit = num%10;
		sum = sum + digit;
		num = num/10;
		if(num>0)
		cout << digit << " + " ;
		else
		cout << digit << " = " <<sum<<endl;
	}while (num>0);

	cout << sum ;

	
	if (sum%2==0)
	{
		if((sum%3==0)&&(sum%4==0)&&(sum%5==0))
		{
			cout << " is an even number & multiples of 3, 4 and 5"<<endl;
		}
		else if ((sum%3==0)&&(sum%4==0))
		{
			cout << " is an even number & multiples of 3 and 4"<<endl;
		}
		else if ((sum%4==0)&&(sum%5==0))
		{
			cout << " is an even number & multiples of 4 and 5"<<endl;
		}
		else if (sum%3 == 0)
		{
			cout << " is an even number & multiples of 3"<<endl;
		}
		else if (sum%4 == 0)
		{
			cout << " is an even number & multiples of 4"<<endl;
		}
		else if (sum%5 == 0)
		{
			cout << " is an even number & multiples of 5"<<endl;
		}
		else
		{
			cout << " is an even number"<<endl;
		}
	}
	else
	{
		if ((sum%3==0)&&(sum%5==0))
		{
			cout << " is an odd number & multiples of 3 and 5"<<endl;
		}
		else if (sum%3 ==0)
		{
			cout << " is odd number & multiples of 3"<<endl;
		}
		else if (sum%5 ==0)
		{
			cout << " is odd number & multiples of 5" <<endl;
		}
		else
		{
			cout << " is odd number"<<endl;
		}
	}
	cout << "Do you want to start another calculataion? Enter Y or N. " ;
	cin >> ans;
	cout << endl << endl << endl;
	}while (ans=='Y');
	
	return 0;
	
}
