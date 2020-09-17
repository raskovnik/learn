#include <iostream>
using namespace std;

int fact(int val)
{
    int res = 1;
    while (val > 1)
    {
        res *= val;
        val --;
    }
    return res;
}

int main()
{
    string rsp;
    do {
            cout << "Enter a number" << endl;
            int val = 0;
            cin >> val;
            cout << val << "! is " << fact(val) << endl;
            cout << "More? Enter yes or no: " << endl;
            cin >> rsp;
    
    } while (!rsp.empty() && rsp[0] != 'n');

}