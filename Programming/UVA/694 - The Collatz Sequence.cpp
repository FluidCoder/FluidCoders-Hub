/* Problem:		694 - The Collatz Sequence
** Run Time: 	0.010s 
**
** Md. Forhad Hossain
** Email: forhad.csekuet@gmail.com
** DevSkill: https://devskill.com/Home/PublicProfile/FluidCoder 
*/

#include<iostream>
using namespace std;

int calculateTerms(long long A, long long L) {
	long long terms = 1;
	while (1) {
		if (A == 1)
			return terms;
		else if (A % 2 == 0)
			A = A / 2;
		else {
			if (((3 * A) + 1) > L)
				return terms;
			else
				A = (3 * A) + 1;
		}
		terms++;
	}
}

int main() {
	long long A, L;
	int tCase = 1;
	while (cin >> A >> L) {
		if (A < 0 && L < 0)
			break;
		cout << "Case " << tCase++ << ": A = " << A << ", limit = " << L << ", number of terms = " << calculateTerms(A, L) << endl;
	}
	return 0;
}