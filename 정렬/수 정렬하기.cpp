/*
- ����
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

- �Է�
ù° �ٿ� ���� ���� N(1 �� N �� 1,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. �� ���� ������ 1,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.

- ���
ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N;
	vector<int> v;
	int input;
	int i, j;
	int temp;

	cin >> N;

	for (i = 0;i < N;i++) {
		cin >> input;
		v.push_back(input);
	}

	for (i = N-1;i > 0;i--) {
		for (j = 0;j < i;j ++ ) {
			if (v[j] > v[j+1]) {
				temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}
	}

	for (i = 0;i < N;i++) {
		cout << v[i] << endl;
	}
}