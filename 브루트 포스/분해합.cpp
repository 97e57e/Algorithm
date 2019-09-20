/*
- ����
� �ڿ��� N�� ���� ��, �� �ڿ��� N�� �������� N�� N�� �̷�� �� �ڸ����� ���� �ǹ��Ѵ�. � �ڿ��� M�� �������� N�� ���, M�� N�� �����ڶ� �Ѵ�. ���� ���, 245�� �������� 256(=245+2+4+5)�� �ȴ�. ���� 245�� 256�� �����ڰ� �ȴ�. ����, � �ڿ����� ��쿡�� �����ڰ� ���� ���� �ִ�. �ݴ��, �����ڰ� ���� ���� �ڿ����� ���� �� �ִ�.

�ڿ��� N�� �־����� ��, N�� ���� ���� �����ڸ� ���س��� ���α׷��� �ۼ��Ͻÿ�.

- �Է�
ù° �ٿ� �ڿ��� N(1 �� N �� 1,000,000)�� �־�����.

-���
ù° �ٿ� ���� ����Ѵ�. �����ڰ� ���� ��쿡�� 0�� ����Ѵ�.
*/

#include <iostream>

using namespace std;

int main() {
	int N;
	int test;
	int candidate;
	int i;
	int result;
	bool solved = false;
	cin >> N;

	for (i = 1; i < N; i++) {
		candidate = i;
		test = i;
		result = i;
		while (test > 0) {
			candidate += test % 10;
			test /= 10;
		}
		if (candidate == N) {
			cout << result;
			solved = true;
			break;
		}
	}

	if (!solved) cout << 0;

	return 0;
}