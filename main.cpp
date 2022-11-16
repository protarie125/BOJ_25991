#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto sum = double{ 0 };
	while (0 < (n--)) {
		double x;
		cin >> x;
		sum += pow(x, 3);
	}

	cout << fixed << setprecision(9) << pow(sum, 1.0 / 3);

	return 0;
}