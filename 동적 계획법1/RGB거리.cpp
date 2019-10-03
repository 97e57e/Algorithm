/*
- 문제
RGB거리에 사는 사람들은 집을 빨강, 초록, 파랑중에 하나로 칠하려고 한다. 또한, 그들은 모든 이웃은 같은 색으로 칠할 수 없다는 규칙도 정했다. 집 i의 이웃은 집 i-1과 집 i+1이고, 첫 집과 마지막 집은 이웃이 아니다.

각 집을 빨강으로 칠할 때 드는 비용, 초록으로 칠할 때 드는 비용, 파랑으로 드는 비용이 주어질 때, 모든 집을 칠하는 비용의 최솟값을 구하는 프로그램을 작성하시오.

- 입력
첫째 줄에 집의 수 N이 주어진다. N은 1,000보다 작거나 같다. 둘째 줄부터 N개의 줄에 각 집을 빨강으로, 초록으로, 파랑으로 칠하는 비용이 주어진다. 비용은 1,000보다 작거나 같은 자연수이다.

- 출력
첫째 줄에 모든 집을 칠하는 비용의 최솟값을 출력한다.
*/

#include <stdio.h>
#include <algorithm> 
using namespace std;

#pragma warning(disable:4996)

int main() {
	int N; //집의 수

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