void __cdecl swap(int* arr, int p1, int p2)
{
	int tmp = arr[p1];
	arr[p1] = arr[p2];
	arr[p2] = tmp;
}
void __cdecl quick_sort(int* arr, int L, int R)
{
	if (L >= R)
		return;
	int v = arr[L], i = L;
	for (int j = L + 1; j <= R; j++)
		if (arr[j] < v)
			swap(arr, ++i, j);
	swap(arr, L, i);
	quick_sort(arr, L, i - 1);
	quick_sort(arr, i + 1, R);
}
void __cdecl quick_sort_2way(int* arr, int L, int R)
{
	if (L >= R)
		return;
	int v = arr[L], i = L, j = R;
	while (1)
	{
		while (i <= R && arr[i] <= v)
			i++;
		while (j >= L + 1 && arr[j] > v)
			j--;
		if (i > j)
			break;
		swap(arr, i, j);
		i++;
		j--;
	}
	swap(arr, L, j);
	quick_sort_2way(arr, L, j - 1);
	quick_sort_2way(arr, j + 1, R);
}
void __cdecl quick_sort_3way(int* arr, int L, int R)
{
	if (L >= R)
		return;
	int v = arr[L], lt = L, gt = R + 1, i = L + 1;
	while (i < gt)
		if (arr[i] < v)
			swap(arr, i++, ++lt);
		else if (arr[i] > v)
			swap(arr, i, --gt);
		else
			i++;
	swap(arr, L, lt);
	quick_sort_3way(arr, L, lt - 1);
	quick_sort_3way(arr, gt, R);
}