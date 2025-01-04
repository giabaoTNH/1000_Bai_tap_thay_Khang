#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
	while(b) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
class Frac {
public:
	int tu, mau;
	Frac() {}
	Frac(int a,int b) {tu = a;mau = b;}

	Frac operator+(const Frac &a) {
		int fi =  (tu*a.mau + a.tu*mau);
		int se = (a.mau * mau);
		int u = gcd(fi,se);
		fi /= u;
		se /= u;
		return Frac(fi,se);
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Frac a(1,2);
	Frac b(1,3);
	Frac c = a+b;
	cout << c.tu << ' ' << c.mau << '\n';
}
