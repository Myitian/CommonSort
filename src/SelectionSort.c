void __cdecl selection_sort(int* arr, int L, int R)
{
	for (int i = L; i < R; i++)
	{
		int min = arr[i];
		int min_i = i;
		for (int j = i + 1; j <= R; j++)
			if (arr[j] < min)
			{
				min_i = j;
				min = arr[j];
			}
		if (min_i != i)
		{
			int tmp = arr[i];
			arr[i] = arr[min_i];
			arr[min_i] = tmp;
		}
	}
}