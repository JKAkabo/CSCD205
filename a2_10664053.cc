#include <iostream>

using namespace std;
int main()
{
	int num, i;
	bool is_prime = true;
	cout << "Enter a positive integer: ";
	cin >> num;
	for(i = 2; i <= num / 2; i++)
	{
		if(num % i == 0)
		{
			is_prime = false;
		}
	}
	if(is_prime)
	{
		cout << num << " is a prime number." << endl;
	}
	else
	{
		cout << num << " is not a prime number" << endl;
	}
	return 0;
}
