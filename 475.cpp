#include <bits/stdc++.h>
using namespace std;

class Frac {
public:
	int tu, mau;
	Frac() {

	}
	Frac(int a, int b) {
		tu = a;
		mau = b;
	}
	void input() {
		cin >> tu >> mau;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Frac a;
	cout << "Nhap mau, tu cho phan so: " << flush;
	a.input();
	cout << "Phan so ban da nhap la (" << a.tu << '/' << a.mau << ")\n";

	return 0;
}
