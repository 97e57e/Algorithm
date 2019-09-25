/*
- 문제
정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 다섯 가지이다.

push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.

- 입력
첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다.
문제에 나와있지 않은 명령이 주어지는 경우는 없다.

- 출력
출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
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