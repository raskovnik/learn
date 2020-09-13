#include <iostream>
using namespace std;

int main()
{
    double obj = 3.14, *pd = &obj;
    void *pv = &obj;
    pv = pd;

    cout << pd << endl;
    cout << pv << endl;
    return 0;
    
}