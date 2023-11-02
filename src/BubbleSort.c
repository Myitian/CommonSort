void __cdecl bubble_sort(int* arr, int L, int R)
{
	int tmp;
	for (int i = L; i < R; i++)
		for (int j = R; j > i; j--)
			if (arr[j] < arr[j - 1])
			{
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
}
void __cdecl bubble_sort_optimized(int* arr, int L, int R)
{
	int tmp;
	char flag;
	for (int i = L; i < R; i++)
	{
		flag = 0;
		for (int j = R; j > i; j--)
			if (arr[j] < arr[j - 1])
			{
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
				flag = 1;
			}
		if (!flag)
			break;
	}
}