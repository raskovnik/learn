#include <iostream>
using namespace std;

int main()
{
    string rsp;
    do{
        cout << "Enter two strings to compare:";
        string s1 = 0, s2 = 0;
        cin >> s1 >> s2;
        if (s1.size() < s2.size())
            cout << s2 << " is less than " << s2 << endl;
        if (s1.size() > s2.size())
            cout << s1 << " is less than " << s1 << endl;
        cout << "More? Enter two strings:" << endl;
        cin >> rsp;
    }while (!rsp.empty() && rsp[0] != 'n');
}