#include <iostream>
using namespace std;

int main()
{
    string rsp;
    do{
        cout << "Please enter two values" << endl;
        int val1 = 0, val2 = 0;
        cin >> val1 >> val2;
        cout << "The sum of " << val1 << " and " << val2
             << " is: " << val1 + val2 << "\n\n"
             << "More? Enter yes or no: ";
        cin >> rsp;

    }while (!rsp.empty() && rsp[0] != 'n');
}