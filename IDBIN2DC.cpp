#include <iostream>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string bin;
        cin >> bin;
        cout << stoi(bin, 0, 2) << (t>0?"\n":"");
    }
}