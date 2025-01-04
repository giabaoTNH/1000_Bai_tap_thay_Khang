#include <bits/stdc++.h>
using namespace std;

struct node {
	int val;
	node* next;
};

vector<node*> N;
node* first = new node();

void add(int val) {
	node* n = new node();
	n->val = val;
	n->next = first;
	first = n;
	N.push_back(n);	
	cout << "Added " << val << endl;
}
void print() {
	node* cur = new node();
	cur = first;
	while(cur != NULL) {
		cout << cur->val << "->";
		cur = cur->next;
	}
	cout << "NULL";
	cout << endl;
}

void remove(int val) {
	if (first->val == val) {
		cout << "Deleted " << val << endl;
		first = first->next;
		return;
	}
	node* cur1 = first;
	node* cur2 = first->next;
	while(cur2 != NULL) {
		if (cur2->val == val) {
			cur1->next = cur2->next;
			cout << "Deleted " << val << endl;
			return;
		}
		cur1 = cur1->next;
		cur2 = cur2->next;
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	first->val = 1;
	first->next = NULL;
	N.push_back(first);
	cout << "Init: 1->NULL" << endl;
	
	add(4);
	add(3);
	print();
	add(5);
	print();
	remove(5);
	print();
	add(9);
	print();
	remove(1);
	print();

	return 0;
}
