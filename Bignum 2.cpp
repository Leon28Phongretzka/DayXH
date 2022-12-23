#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, int> pui;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<int> vi;
typedef vector<int>::iterator ip;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef vector<pui> vpui;
typedef vector<ul> vu;
typedef vector<string> vs;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= ll(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
const int N = 1000007;
void makeEqualAtFront(vector<int>& A, vector<int>& B)
{
    int n = A.size();
    int m = B.size();
    int diff = abs(n - m);
    if (n < m) 
    {
        for (int i = 0; i < diff; i++) 
        {
            A.insert(A.begin(), 0);
        }
    }
    else 
    {
        for (int i = 0; i < diff; i++) 
        {
            B.insert(B.begin(), 0);
        }
    }
}
   
// Function to make Integral part
// with equal digits
void makeEqualAtback(vector<int>& A, vector<int>& B)
{
    int n = A.size();
    int m = B.size();
    int diff = abs(n - m);
    if (n < m) 
    {
        for (int i = 0; i < diff; i++) 
        {
            A.push_back(0);
        }
    }
    else {
        for (int i = 0; i < diff; i++) 
        {
            B.push_back(0);
        }
    }
}
   
// Function to add the given large
// floating point number string
void findSum(string s1, string s2)
{
    int i;
    vector<int> Ints1, Ints2;
    vector<int> Fracs1, Fracs2;

    for (i = s1.length() - 1; i > -1; i--) 
    {
        // If decimal occurs break
        if (s1[i] == '.') 
        {
            break;
        }
        Fracs1.push_back(s1[i] - '0');
    }
    i--;

    for (; i > -1; i--) 
    {
        Ints1.push_back(s1[i] - '0');
    }

    for (i = s2.length() - 1; i > -1; i--) 
    {
   
        // If decimal occurs break
        if (s2[i] == '.') {
            break;
        }
        Fracs2.push_back(s2[i] - '0');
    }
    i--;
    for (; i > -1; i--) {
        Ints2.push_back(s2[i] - '0');
    }
   
    makeEqualAtFront(Fracs1, Fracs2);
    makeEqualAtback(Ints1, Ints2);
    
    int n = Fracs1.size();
    int m = Fracs2.size();
    i = 0;
    int carry = 0;
   
    while (i < n && i < m) 
    {
   
        // Traverse the Fracs1[] and
        // Fracs2[] and add the digit
        // and store the carry
        int sum = Fracs1[i]
                  + Fracs2[i]
                  + carry;
   
        Fracs1[i] = sum % 10;
        carry = sum / 10;
        i++;
    }
   
    int N = Ints1.size();
    int M = Ints2.size();
    i = 0;
   
    // Adding integer part of
    // s1 and s2
    while (i < N && i < M) {
        int sum = Ints1[i]
                  + Ints2[i]
                  + carry;
        Ints1[i] = sum % 10;
        carry = sum / 10;
        i++;
    }
    if (carry != 0)
        Ints1.push_back(carry);
   
    // Print the result by appending
    // Integer and decimal part stored
    // in Ints1[] and Fracs1[]
    for (int i = Ints1.size() - 1; i > -1; i--) {
        cout << Ints1[i];
    }
    cout << '.';
    for (int i = Fracs1.size() - 1; i > -1; i--) {
        cout << Fracs1[i];
    }
}
string mult(string a, string b)
{
    string res="";
    int n=a.size();
    int m=b.size();
    //create res is the answer
    res.assign(n+m,'0');
    for(int i=n-1; i>=0;i--)
    {
            for(int j=m-1; j>=0; j--)
            {
                int mul=(a[i]-'0')*(b[j]-'0');
                int p1=i+j, p2=i+j+1;
                int sum=mul+res[p2]-'0';
                res[p2]=sum%10+'0';
                res[p1]+=sum/10;
            }
    }
    while (res[0] == '0' && res.length() > 1)
    {
            res.erase(0, 1);
    }
    return res;
}   
// Driver Code
int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector<string> v;
        while(ss>>s)
        {
            v.push_back(s);
        }
        // cout << v[1] << endl;
        // cout << v[0] << " " << v[2];
        if(v[1]=="+") findSum(v[0],v[2]);
        // else cout << mult(v[0],v[2]);
        cout << endl;
    }
   
    return 0;
}