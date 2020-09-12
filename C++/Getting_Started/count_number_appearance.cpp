#include <iostream>

int main(int argc, char *argv[])
{
	int currVal = 0, val = 0;
	if (std:: cin >> val)
	{
	    int count = 1;
	    while (std :: cin >> val)
	    {
	        if (val == currVal)
	        {
	             count ++;
	               
	        }
	        else {
	            std :: cout << currVal << " Occurs " << count << " times " << std::endl;
	            currVal = val;
	            count = 1;
	             
	            }
	     }
	      std :: cout << currVal << " Occurs " << count << " times " << std::endl;
	      
    }
    return 0;
}