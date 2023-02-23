#include <iostream>
#include <vector>

using namespace std;

void swap(int& a, int& b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m; cin >> n >> m;
	auto d = vector<int>(n);
	for (auto i = 0; i < n; ++i) {
		d[i] = i + 1;
	}

	while (0 < (m--)) {
		int a, b; cin >> a >> b;
		if (a != b) {
			swap(d[a - 1], d[b - 1]);
		}
	}

	for (const auto& x : d) {
		cout << x << ' ';
	}

	return 0;
}