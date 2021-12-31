#include <stdio.h>
#include <stdlib.h>
typedef unsigned long long int lint;
void leftrotbyone(int* arr, lint N)
{
	int tmp = arr[0];
	for (lint i = 0; i < N - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[N - 1] = tmp;
}
int main() {
	//code
	int T = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		lint N = 0;
		lint D = 0;
		int* arr = (int*)malloc(N * sizeof(int));
		//	    memset(arr,0,N*sizeof(int));
		scanf("%lld%lld", &N, &D);
		for (lint j = 0; j < N; j++)
		{
			scanf("%d", &arr[j]);
		}
		int* tmp = (int*)malloc(D * sizeof(int));
		//	    memset(tmp,0,D*sizeof(int));

		for (lint k = 0; k < D; k++)
		{
			leftrotbyone(arr, N);
		}
		for (lint m = 0; m < N; m++)
		{
			printf("%d ", arr[m]);
		}
		printf("\n");
		/*
				   free(arr);
				   free(tmp);*/
	}
	return 0;
}