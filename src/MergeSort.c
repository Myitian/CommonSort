#include <stdlib.h>
void __cdecl __merge_sort_inner(int* arr, int L, int R, int* tmp)
{
	if (L >= R)
		return;
	int M = (L + R) / 2, i = L, j = M + 1, k = L;
	__merge_sort_inner(arr, L, M, tmp);
	__merge_sort_inner(arr, j, R, tmp);
	while (i <= M && j <= R)
		if (arr[i] <= arr[j])
			tmp[k++] = arr[i++];
		else
			tmp[k++] = arr[j++];
	while (i <= M)
		tmp[k++] = arr[i++];
	while (j <= R)
		tmp[k++] = arr[j++];
	for (i = L; i <= R; i++)
		arr[i] = tmp[i];
}
void __cdecl merge_sort(int* arr, int L, int R, int* tmp)
{
	if (tmp)
		__merge_sort_inner(arr, L, R, tmp);
	else
	{
		R -= L;
		tmp = (int*)malloc(((size_t)R + 1) * sizeof(int));
		__merge_sort_inner(arr + L, 0, R, tmp);
	}
}