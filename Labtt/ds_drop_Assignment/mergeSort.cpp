#include <bits/stdc++.h>

using namespace std;
#define mx 1000
int n;
int arr[mx];

void mergeSort(int b, int e) {

	int m = (b + e) / 2;

	if (b < e) {

		mergeSort(b, m);
		mergeSort(m + 1, e);

		int l = m - b + 1, r = e - m;

		int L[l], R[r];

		for (int i = 0; i < l; i++)L[i] = arr[b + i];
		for (int j = 0; j < r; j++)R[j] = arr[m + 1 + j];
		int ii = 0, jj = 0, k = b;

		while (ii < l && jj < r)
		{
			if (L[ii] < R[jj]) {
				arr[k++] = L[ii++];
			}
			else arr[k++] = R[jj++];
		}

		while (ii < l)arr[k++] = L[ii++];
		while (jj < r)arr[k++] = R[jj++];

	}



}

int main(int argc, char const *argv[])
{

	cin >> n;

	for (int i = 0; i < n; i++)cin >> arr[i];

	mergeSort(0, n - 1);
	int i = 0;
	while (n--)cout << arr[i++] << " ";

	return 0;
}