void __cdecl insertion_sort(int* arr, int L, int R)
{
	for (int i = L; i < R; i++)
	{
		int tmp = arr[i + 1], j;
		for (j = i; j >= L && arr[j] > tmp; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = tmp;
	}
}