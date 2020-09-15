#include <iostream>
using namespace std;

int main()
{
    string s, s1;
    cout << "Enter two strings separated by whitespace: " << endl;
    cin >> s >> s1;
    if (s == s1)
        cout << s << " is equal to " << s1 << endl;

    if (s != s1)
        cout << s << " is not equal to " << s1 << endl;
        
    if (s.size() < s1.size())
        cout << s << " is shorter than " << s1 << endl;

    if (s.size() > s1.size())
        cout << s << " is longer than " << s1 << endl;

}