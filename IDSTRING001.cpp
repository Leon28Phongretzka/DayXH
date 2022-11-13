
 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
     int t;
     cin >> t;
     for (int k = 0; k < t; k++)
     {
         string s1, s2;
         cin >> s1 >> s2;
         if (s1 == "" || s2 == "")
         {
             cout << 0 << endl;
             continue;
         }
         if (s1 == s2)
         {
             cout << 1 << endl;
             continue;
         }
         int index = s2.find(s1);
         if (index == -1)
             cout << -1 << endl;
         else
             cout << index << endl;
     }
     return 0;
}