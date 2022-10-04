#include <iostream>
#include <cmath>
 
using namespace std;
 
#define max 1000
 
int n;// Số nguyên dương nhập vào
int primeArray[max];// Mảng chứa số nguyên tố < n
int mark[max] = { 0 };// Mảng đánh dấu
int result[max] = { 0 };// Mảng lưu kết quả
int size = 0;// Cỡ của mảng primeArray
 
bool isPrime( int n )// Hàm kiểm tra số nguyên tố
{
    if ( n < 2 ) return false;
    for ( int i = 2; i <= sqrt( (long double)n ); ++i )
        if ( n%i == 0 ) return false;
    return true;
}
 
void inputPrime( int n, int &size, int primeArray[] )// Nhập các số nguyên tố < n vào mảng primeArray
{
    for ( int i = 2; i < n; ++i )
        if ( isPrime( i ) ) primeArray[size++] = i;
}
 
void show( int a[], int size )
{
    for ( int i = 1; i < size; ++i )
        cout << a[i] << " ";
    cout << endl;
}
 
int sumArray( int a[], int size )// Tính tổng trong mảng
{
    int sum = 0;
    for ( int i = 0; i < size; ++i )
        sum += a[i];
    return sum;
}
 
void Try( int i )
{
    for ( int j = 0; j < size; ++j )
        if ( !mark[j] && result[i-1] < primeArray[j] )
        {
            mark[j] = 1;
            result[i] = primeArray[j];
           
            if ( sumArray( result, i + 1 ) == n ) show( result, i + 1 );
            else Try( i + 1 );
 
            mark[j] = 0;
            result[i] = 0;
        }
}
 
int main()
{
    int tt; cin >> tt;
    while(tt--)
    {
        cin >> n;
    inputPrime( n, size, primeArray );
    Try( 1 );
    }

}