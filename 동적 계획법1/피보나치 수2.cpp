/*
- ����
�Ǻ���ġ ���� 0�� 1�� �����Ѵ�. 0��° �Ǻ���ġ ���� 0�̰�, 1��° �Ǻ���ġ ���� 1�̴�. �� ���� 2��° ���ʹ� �ٷ� �� �� �Ǻ���ġ ���� ���� �ȴ�.

�̸� ������ �Ẹ�� Fn = Fn-1 + Fn-2 (n>=2)�� �ȴ�.

n=17�϶� ���� �Ǻ���ġ ���� �Ẹ�� ������ ����.

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597

n�� �־����� ��, n��° �Ǻ���ġ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

-�Է�
ù° �ٿ� n�� �־�����. n�� 90���� �۰ų� ���� �ڿ����̴�.

-���
ù° �ٿ� n��° �Ǻ���ġ ���� ����Ѵ�.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n;
	int i;
	long long answer=0;

	vector<long long> fib;

	fib.push_back(0);
	fib.push_back(1);

	cin >> n;
	if (n == 1) {
		answer = 1;
	}
	else {
		for (i = 2;i <= n;i++) {
			fib.push_back(fib[i - 2] + fib[i - 1]);
		}
		answer = fib[fib.size()-1];
	}

	cout << answer;

}
