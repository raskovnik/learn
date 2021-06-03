#include <iostream>
using namespace std;

int main()
{
    int i = 1024, i2 = 2048;
    int &r = i, r2 = i2;

    cout << "Initial " << i << "," << i2 << " referenced " << r << "," << r2 << endl;

}