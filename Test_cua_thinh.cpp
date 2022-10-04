#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) 
    {
		string x;
		getline(cin, x);
		string s = "";
		for (int i = 8; i <= 12; i++) 
        {
			s += x[i];
		}
        //cout << s << endl;
		if (s[0] == '?') 
        {
			if (s[1] == '?' || (s[1] >= '0' && s[1] <= '3')) 
            {
				s[0] = '2';
			}
			else if (s[1] >= '4' && s[1] <= '9') 
            {
				s[0] = '1';
			}
		}
		else 
        {
			if (s[0] == '2' && s[1] == '?') 
            {
				s[1] = '3';
			}
			else if(s[0]<'2'&&s[1]=='?') 
            {
				s[1] = '9';
			}
		}
		if (s[1] == '?') s[1] = '3';
		if (s[3] == '?') s[3] = '5';
		if (s[4] == '?') s[4] = '9';
		cout << "\"" << s << "\"" << endl;
	}
}