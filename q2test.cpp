#include <iostream>
using namespace std;

void maxSlidingWindow(int arr[], int size, int k)
{
	if (k == 1) {
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
		return;
	}
	int p = 0,q = k - 1,t = p,max = arr[k - 1];
	while (q <= size - 1) {
		if (arr[p] > max)
			max = arr[p];

		p++;
		if (q == p && p != size) {
			cout << max << " ";
			q++;
			p = t++;
			if (q < size)
				max = arr[q];
		}
	}
    cout << endl;
}

int main()
{
	int arr[] = { 1, 3, -1, -3, 5, 3, 6, 7};
	int size = sizeof(arr) / sizeof(arr[0]);
	int K = 3;

	maxSlidingWindow(arr, size, K);

	return 0;
}
