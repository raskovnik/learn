#include <iostream>
using namespace std;

int main()
{
    string x("x");
    string s("Hello World");
    for (auto &c : s)
        c = toupper(x[0]);
    cout << s << endl;

}