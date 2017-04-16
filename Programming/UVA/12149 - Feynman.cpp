/* Md. Forhad Hossain
** Email: forhad.csekuet@gmail.com
** DevSkill: https://devskill.com/Home/PublicProfile/FluidCoder 
*/

#include<iostream>
using namespace std;

#define MAX_SIZE 101
int series[MAX_SIZE + 10000];

int main() {
	int n;
	series[1] = 1;
	for (int i = 2; i < MAX_SIZE; i++) {
		series[i] = (i*i) + series[i - 1];
	}
	while (cin >> n) {
		if (n == 0)
			break;
		cout << series[n] << endl;
	}
	return 0;
}