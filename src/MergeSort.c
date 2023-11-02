void _cdecl merge_sort(int* arr, int* tmp, int L, int R)
{
	if (L >= R)
		return;
	int M = (L + R) / 2, i = L, j = M + 1, k = L;
	merge_sort(arr, tmp, L, M);
	merge_sort(arr, tmp, j, R);
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