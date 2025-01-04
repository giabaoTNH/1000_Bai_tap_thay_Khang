#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;cin >> n;
	cout << "A.\n";
	int d = n-1;
	for (int i = 1; i<=n; i++) {
		for (int j = 1; j<=d; j++) cout << ' ';
		for (int j = 1; j<=i*2-1; j++) cout << '*';
		d--;
		cout << endl;
	}
	cout << "B.\n";
	d = n-2;
	for (int i = 1; i<=n-1; i++) cout << ' ';
	cout << '*' <<'\n';
	for (int i = 2; i<=n-1; i++) {
		for (int j = 1; j<=d; j++) cout << ' ';
		cout << '*';
		for (int j = 2; j<i*2-1; j++) cout << ' ';
		cout << '*';
		d--;
		cout << endl;
	}
	for (int i = 1; i<=n*2-1; i++) cout << '*';
	cout << endl;
	

	return 0;
}
