#include <iostream>
#include <vector>
#include <string>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
using namespace std;

//int main() {
//	fast;
//	int count = 0, min = 51,Su,Ad=0;
//	string A, B;
//	cin >> A >> B;
//	Su = B.size() - A.size() + 1;
//	if (Su == 0) {
//		for (int i = 0; i < A.size(); i++) {
//			if (A[i] != B[i]) count++;
//		}
//		cout << count;
//		return 0;
//	}
//	while (Su--) {
//		count = 0;
//		for (int i = 0; i < A.size(); i++) {
//			if (A[i] != B[i+Ad]) count++;
//		}
//		Ad++;
//		if (min > count) min = count;
//	}
//	cout << min;
//}