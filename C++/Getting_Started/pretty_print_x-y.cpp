#include <iostream>
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;
	std :: cout << "Enter two numbers:" << std :: endl;
	std :: cin >> n1 >> n2;
	while (n2 != n1)
	{
	    std :: cout << n2 << std :: endl;
	    n2 --;
	}
	return 0;
}