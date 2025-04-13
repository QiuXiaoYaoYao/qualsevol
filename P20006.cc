#include <iostream>
using namespace std;

int prefixada ()
{
    char c;
    cin >> c;
    if (c >= '0' && c <= '9') return c-'0';

    int a1 = prefixada();
    int a2 = prefixada();

    if (c == '+') return a1+a2;
    else if (c == '-') return a1-a2;
    else if (c == '*') return a1*a2;
    else return 0;
}

int main()
{
    int solucio = prefixada();
    cout << solucio << endl;
}