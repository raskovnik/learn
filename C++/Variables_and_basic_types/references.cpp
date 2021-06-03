#include <iostream>
using namespace std;

int main()
{
    int ival = 1024;
    int &refVal = ival;

    cout << "Initial value " << ival << " referenced value " << refVal << endl;
}