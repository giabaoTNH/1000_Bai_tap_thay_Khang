#include <bits/stdc++.h>
using namespace std;

struct Node {
	int val;
	Node* next;
};

Node* nodes[10000]; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Node* first = new Node();
	nodes[1] = new Node();
	nodes[1]->val = 1;
	nodes[1]->next = NULL;
	nodes[0] = new Node();
	nodes[0]->val = 2;
	nodes[0]->next = nodes[1];
	first = nodes[0];
	nodes[2] = new Node();
	nodes[2]->val = 400;
	nodes[2]->next = first;
	first = nodes[2];

	Node* cur = first;
	while (cur != NULL) {
		cout << cur->val << endl;
		cur = cur->next;
	}
	cout << "end" << endl;

	first = nodes[2]->next;
	cur = first;
	while (cur != NULL) {
		cout << cur->val << endl;
		cur = cur->next;
	}


	return 0;
}

