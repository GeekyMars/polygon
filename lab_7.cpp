#include <iostream>
#include <locale>
using namespace std;

class Solution {
public:
	int Box(int n) {
		int sum = 1, floor = 1, tier = 1;
		while (sum < n) {
			floor += (++tier);
			sum += floor;
		}
		while (sum > n) {
			--floor;
			sum -= (tier--);
		}
		return floor + (sum < n);
	}
};
int main() {
	setlocale(LC_ALL, "Ru");
	Solution solution;
	int n;
	cout << "Введите n: ";
	cin >> n;
	cout << "Минимальное кол-во коробок: " << solution.Box(n) << " для n = " << n << endl;

	return 0;
}