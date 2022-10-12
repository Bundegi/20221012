#include <iostream>
#include <vector>
#include <string>
#include <cmath>

#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
using namespace std;

int main() {
	fast;
	int N, sum = 0;
	cin >> N;
	if (N < 100) {
		cout << N;
		return 0;
	}
	while (N > 100) {
		int M = N;
		int count = 0;
		vector<int> Array;
		while (M != 0) {
			Array.push_back(M % 10);
			M /= 10;
		}
		int Def = Array[0] - Array[1];
		for (int i = 1; i < Array.size()-1; i++) {
			int DDef = Array[i] - Array[i + 1];
			if (Def == DDef) count++;
		}
		if (count == Array.size() - 2) sum++;
		N--;
	}
	cout << sum + 99;
}