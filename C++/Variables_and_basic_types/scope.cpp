#include <iostream>
using namespace std;

int reused = 42;
int main()
{
    int unique = 0;
    cout << "Global " <<  reused << " " << unique << endl;

    int reused = 0;
    cout << "local " << reused << " " << unique << endl;

    cout << "Global " <<::reused << " " << unique << endl;
}