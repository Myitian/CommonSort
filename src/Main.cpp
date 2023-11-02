#include <cstdio>
#include <cstdlib>
#include <climits>
#include <ctime>
#include <random>

extern "C" {
#include "Sort.h"
}

static void rand_fill(int* arr, int l, int r, int min = 0, int max = INT_MAX)
{
	std::random_device seed;
	std::mt19937 engine(seed());
	std::uniform_int_distribution<int> dist(min, max);
	while (l <= r)
		arr[l++] = dist(engine);
}

static void print(const int* arr, int l, int r, char sep = ' ', char end = '\n')
{
	while (l < r)
	{
		printf("%d", arr[l++]);
		putchar(sep);
	}
	if (l == r)
		printf("%d", arr[l]);
	putchar(end);
}
#define L 50
int main()
{
	int  L_1 = L - 1, min = 0, max = 10;
	int arr[L], tmp[L];

	puts("Bubble Sort");
	rand_fill(arr, 0, L_1, min, max);
	print(arr, 0, L_1);
	bubble_sort(arr, 0, L_1);
	print(arr, 0, L_1);
	putchar('\n');

	puts("Optimized Bubble Sort");
	rand_fill(arr, 0, L_1, min, max);
	print(arr, 0, L_1);
	bubble_sort_optimized(arr, 0, L_1);
	print(arr, 0, L_1);
	putchar('\n');

	puts("Selection Sort");
	rand_fill(arr, 0, L_1, min, max);
	print(arr, 0, L_1);
	selection_sort(arr, 0, L_1);
	print(arr, 0, L_1);
	putchar('\n');

	puts("Insertion Sort");
	rand_fill(arr, 0, L_1, min, max);
	print(arr, 0, L_1);
	insertion_sort(arr, 0, L_1);
	print(arr, 0, L_1);
	putchar('\n');

	puts("Quick Sort");
	rand_fill(arr, 0, L_1, min, max);
	print(arr, 0, L_1);
	quick_sort_2way(arr, 0, L_1);
	print(arr, 0, L_1);
	putchar('\n');

	puts("2-way Quick Sort");
	rand_fill(arr, 0, L_1, min, max);
	print(arr, 0, L_1);
	quick_sort_2way(arr, 0, L_1);
	print(arr, 0, L_1);
	putchar('\n');

	puts("3-way Quick Sort");
	rand_fill(arr, 0, L_1, min, max);
	print(arr, 0, L_1);
	quick_sort_2way(arr, 0, L_1);
	print(arr, 0, L_1);
	putchar('\n');

	puts("Merge Sort");
	rand_fill(arr, 0, L_1, min, max);
	print(arr, 0, L_1);
	merge_sort(arr, tmp, 0, L_1);
	print(arr, 0, L_1);
	putchar('\n');
}