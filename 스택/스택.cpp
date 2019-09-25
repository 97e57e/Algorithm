/*
- ����
������ �����ϴ� ������ ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� �ټ� �����̴�.

push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

- �Է�
ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����.
������ �������� ���� ����� �־����� ���� ����.

- ���
����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void push(vector<int> &v, int);
void pop(vector<int> &v);
int size(vector<int> &v);
bool empty(vector<int> &v);
void top(vector<int> &v);

int main() {
	int N;

	int i;
	int num;

	string input;

	vector<int> v;

	cin >> N;

	for (i = 0;i < N;i++) {
		cin >> input;

		if (input=="push") {
			cin >> num;
			push(v, num);
		}
		else if (input == "pop") {
			pop(v);
		}
		else if (input == "size") {
			cout << size(v) << endl;
		}
		else if (input == "empty") {
			if (empty(v)) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else if (input == "top") {
			top(v);
		}
	}
}

void push(vector<int> &v, int x) {
	v.push_back(x);
}

void pop(vector<int> &v) {
	if (v.size() == 0) {
		cout << -1 << endl;
	}
	else {
		cout << v[v.size() - 1] << endl;
		v.pop_back();
	}
}

int size(vector<int> &v) {
	return v.size();
}

bool empty(vector<int> &v) {
	if (v.size() == 0) {
		return true;
	}
	else {
		return false;
	}
}

void top(vector<int> &v) {
	if(v.size()==0){
		cout << -1 << endl;
	}
	else {
		cout << v[v.size() - 1] << endl;
	}
}