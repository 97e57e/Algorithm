/*
- ����
fibonacci(3)�� ȣ���ϸ� ������ ���� ���� �Ͼ��.

fibonacci(3)�� fibonacci(2)�� fibonacci(1) (ù ��° ȣ��)�� ȣ���Ѵ�.
fibonacci(2)�� fibonacci(1) (�� ��° ȣ��)�� fibonacci(0)�� ȣ���Ѵ�.
�� ��° ȣ���� fibonacci(1)�� 1�� ����ϰ� 1�� �����Ѵ�.
fibonacci(0)�� 0�� ����ϰ�, 0�� �����Ѵ�.
fibonacci(2)�� fibonacci(1)�� fibonacci(0)�� ����� ���, 1�� �����Ѵ�.
ù ��° ȣ���� fibonacci(1)�� 1�� ����ϰ�, 1�� �����Ѵ�.
fibonacci(3)�� fibonacci(2)�� fibonacci(1)�� ����� ���, 2�� �����Ѵ�.
1�� 2�� ��µǰ�, 0�� 1�� ��µȴ�. N�� �־����� ��, fibonacci(N)�� ȣ������ ��, 0�� 1�� ���� �� �� ��µǴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

- �Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.

�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, N�� �־�����. N�� 40���� �۰ų� ���� �ڿ��� �Ǵ� 0�̴�.

- ���
�� �׽�Ʈ ���̽����� 0�� ��µǴ� Ƚ���� 1�� ��µǴ� Ƚ���� �������� �����ؼ� ����Ѵ�.
*/

#include <stdio.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int T;
	int input;

	int i, j;

	int zero[41] = { 1,0,0, };
	int one[41] = { 0,1,0, };

	scanf("%d", &T);

	for (i = 0;i < T;i++) {
		scanf("%d", &input);
		if (input == 0) {
			printf("%d %d\n", 1, 0);
		}
		else if (input == 1) {
			printf("%d %d\n", 0, 1);
		}
		else {
			for (j = 2;j <= input;j++) {
				zero[j] = zero[j - 1] + zero[j - 2];
				one[j] = one[j - 1] + one[j - 2];
			}
			printf("%d %d\n", zero[input], one[input]);
		}
		for (j = 2;j < 40;j++) {
			zero[j] = 0;
			one[j] = 0;
		}
		
	}
}