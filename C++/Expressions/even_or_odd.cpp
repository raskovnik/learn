#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number to test" << endl;
    int val = 0;
    cin >> val;
    if (val % 2 == 0)
        cout << val << " is an even number" << endl;
    else
    {
        cout << val << " is an odd number" << endl;
    }
    
    return 0;
}

