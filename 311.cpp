#include <bits/stdc++.h>
using namespace std;


class Mat {
public:
	vector<vector<int> > sp;
	int row; int col;
	Mat() {
		row = 0;
		col = 0;
	}
	Mat (int u, int v) {
		sp.resize(u,vector<int>(v,0));
		row = u;
		col = v;
	}
	void print() {
		for (int i = 0; i<row; i++) {
			for (int j = 0; j<col; j++) cout << sp[i][j] << ' ';
			cout << '\n';
		}
	}
};

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cout.tie(NULL);

	int n,m;
	cout << "Nhap n,m: " << flush;
	cin >> n >> m;
	cout << "Nhap cac gia tri cua ma tran n*m: \n" << flush;
	Mat a(n,m);		
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<m; j++) cin >> a.sp[i][j];
	}
	cout << "Ma tran: \n" << flush;
	a.print();

	return 0;
}
