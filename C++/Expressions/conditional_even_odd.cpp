#include <iostream>
using namespace std;

int main()
{
    int val;
    cout << "Enter a number :" << endl;
    cin >> val;
    cout << val << " is " << ((val % 2 == 0) ? "even": "odd") << endl;
}