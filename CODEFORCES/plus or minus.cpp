#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
 
    while (n > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "+"<<endl;
        }
        else
        {
            cout << "-"<<endl;
        }
        n--;
    }
}