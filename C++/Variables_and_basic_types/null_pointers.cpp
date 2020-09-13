#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *p1 = nullptr;
    int *p2 = 0;
    int *p3 = NULL;

    cout << "Initialized pointer  using nullptr: " << p1 << endl;
    cout << "Initialized pointer  using *x = 0: " << p2 << endl;
    cout << "Initialized pointer  using NULL: " << p3 << endl;

}
