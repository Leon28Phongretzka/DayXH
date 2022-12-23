// C++ program to find Sum of two
// large Floating-point numbers

#include <bits/stdc++.h>
using namespace std;

// Function to make fractional part
// with equal digits
void makeEqualAtFront(vector<int>& A,
					vector<int>& B)
{
	int n = A.size();
	int m = B.size();
	int diff = abs(n - m);

	if (n < m) {
		for (int i = 0; i < diff; i++) {
			A.insert(A.begin(), 0);
		}
	}
	else {
		for (int i = 0; i < diff; i++) {
			B.insert(B.begin(), 0);
		}
	}
}

// Function to make Integral part
// with equal digits
void makeEqualAtback(vector<int>& A,
					vector<int>& B)
{
	int n = A.size();
	int m = B.size();
	int diff = abs(n - m);

	if (n < m) {
		for (int i = 0; i < diff; i++) {
			A.push_back(0);
		}
	}
	else {
		for (int i = 0; i < diff; i++) {
			B.push_back(0);
		}
	}
}

// Function to add the given large
// floating point number string
void findSum(string s1, string s2)
{

	int i;

	// To store the integer and
	// fractional part of numbers
	vector<int> Ints1, Ints2;
	vector<int> Fracs1, Fracs2;

	// Separating integer and
	// fractional part of s1
	for (i = s1.length() - 1; i > -1; i--) {

		// If decimal occurs break
		if (s1[i] == '.') {
			break;
		}
		Fracs1.push_back(s1[i] - '0');
	}

	i--;
	for (; i > -1; i--) {
		Ints1.push_back(s1[i] - '0');
	}

	// Separating integer and
	// fractional part of s2
	for (i = s2.length() - 1; i > -1; i--) {

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

	// Making number of digits in
	// fractional and Integer
	// part equal
	makeEqualAtFront(Fracs1, Fracs2);
	makeEqualAtback(Ints1, Ints2);

	// Adding fractional parts of
	// s1 and s2
	int n = Fracs1.size();
	int m = Fracs2.size();
	i = 0;
	int carry = 0;

	while (i < n && i < m) {

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

// Driver Code
int main()
{
	string str1
		= "584506134.87368350839565308";
	string str2
		= "30598657.2330473560587475634983";

	findSum(str1, str2);

	return 0;
}
