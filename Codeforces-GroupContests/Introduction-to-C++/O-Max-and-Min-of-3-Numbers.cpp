#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    //max
    if(a > b and a > c)
    {
        cout << a;
    }
    else if(b > a and b > c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}