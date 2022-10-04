// C++ implementation
#include <bits/stdc++.h>
using namespace std;
 
// Convert the number to Lth
// base and print the sequence
void convert_To_Len_th_base(int n,
                            int arr[],
                            int len,
                            int L)
{
    // Sequence is of length L
    for (int i = 0; i < L; i++) {
        // Print the ith element
        // of sequence
        cout << arr[n % len] << " ";
        n /= len;
    }
    cout << endl;
}
 
// Print all the permuataions
void print(int arr[],
           int len,
           int L)
{
    // There can be (len)^l
    // permutations
    for (int i = 0; i < (int)pow(len, L); i++) {
        // Convert i to len th base
        convert_To_Len_th_base(i, arr, len, L);
    }
}
 
// Driver code
int main()
{
    int arr[] = { 1, 2, 3 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int L = 2;
 
    // function call
    print(arr, len, L);
 
    return 0;
}