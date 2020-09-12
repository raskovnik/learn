#include <iostream>
int main(int argc, char *argv[])
{
	int sum = 0;
	for ( int num = 1; num <= 20; num ++)
	{
	     sum += num;
	}
	std :: cout << "The sum of 1 to 20 inclusive is " << sum << std :: endl;
	return 0;
}