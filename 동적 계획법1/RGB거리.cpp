/*
- ����
RGB�Ÿ��� ��� ������� ���� ����, �ʷ�, �Ķ��߿� �ϳ��� ĥ�Ϸ��� �Ѵ�. ����, �׵��� ��� �̿��� ���� ������ ĥ�� �� ���ٴ� ��Ģ�� ���ߴ�. �� i�� �̿��� �� i-1�� �� i+1�̰�, ù ���� ������ ���� �̿��� �ƴϴ�.

�� ���� �������� ĥ�� �� ��� ���, �ʷ����� ĥ�� �� ��� ���, �Ķ����� ��� ����� �־��� ��, ��� ���� ĥ�ϴ� ����� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

- �Է�
ù° �ٿ� ���� �� N�� �־�����. N�� 1,000���� �۰ų� ����. ��° �ٺ��� N���� �ٿ� �� ���� ��������, �ʷ�����, �Ķ����� ĥ�ϴ� ����� �־�����. ����� 1,000���� �۰ų� ���� �ڿ����̴�.

- ���
ù° �ٿ� ��� ���� ĥ�ϴ� ����� �ּڰ��� ����Ѵ�.
*/

#include <stdio.h>
#include <algorithm> 
using namespace std;

#pragma warning(disable:4996)

int main() {
	int N; //���� ��

	int i;

	int red, green, blue;

	int cost[1001][3] = {0};
	int result[1001][3] = {0};

	int answer = 0;

	scanf("%d", &N);

	for (i = 1; i <= N;i++) {
		scanf("%d %d %d", &red, &green, &blue);
		cost[i][0] = red;
		cost[i][1] = green;
		cost[i][2] = blue;
	}

	for (i = 1;i <= N;i++) {
		result[i][0] = min(result[i - 1][1], result[i - 1][2]) + cost[i][0];
		result[i][1] = min(result[i - 1][0], result[i - 1][2]) + cost[i][1];
		result[i][2] = min(result[i - 1][0], result[i - 1][1]) + cost[i][2];
	}
	
	answer = result[N][0];
	if (answer > result[N][1]) answer = result[N][1];
	if (answer > result[N][2]) answer = result[N][2];

	printf("%d", answer);

}