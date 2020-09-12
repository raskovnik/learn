#include <iostream>
int main(int argc, char *argv[])
{
	int sum = 0, num = 1;
	while ( num <= 10) 
	{
	    sum += num;
	    num ++;
	}
	std::cout << "The sum of 1 to 10 inclusive is " << sum << std:: endl;
	return 0;
}