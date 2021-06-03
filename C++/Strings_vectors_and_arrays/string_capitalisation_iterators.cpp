#include <iostream>
using namespace std;

int main()
{
    string s("some random string");
    if (s.begin() != s.end())
    {
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;
    for (auto t = s.begin(); t != s.end() && !isspace(*t); t++)
        *t = toupper(*t);
    cout << s << endl;
    
}