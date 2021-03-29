#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[100005],brr[100005];
int max(int A, int B)
{
	return A > B ? A : B;
}
int main()
{
	int N,Money=-1001;
	int i;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	brr[0] = arr[0];

	for (i = 1; i < N; i++)
	{
		brr[i] = max((brr[i-1]+arr[i]), arr[i]);

		if (Money < brr[i])
		{
			Money = brr[i];
		}
	}

	printf("%d", Money);

	return 0;
}

