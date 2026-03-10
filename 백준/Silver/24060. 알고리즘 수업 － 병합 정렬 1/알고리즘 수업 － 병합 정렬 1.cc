#include <iostream>

using namespace std;

int N, K;
int A[500001] = { 0 };
int sorted_arr[500001] = { 0 };
int counter = 0;

void merge(int* A, int p, int q, int r)
{
    int i = p;
    int j = q + 1;
    int t = 0;
    while (i <= q && j <= r)
    {
        if (A[i] <= A[j])
        {
            sorted_arr[t++] = A[i++];
        }
        else
        {
            sorted_arr[t++] = A[j++];
        }
    }
    while (i <= q)
    {
        sorted_arr[t++] = A[i++];
    }
    while (j <= r)
    {
        sorted_arr[t++] = A[j++];
    }

    i = p;
    t = 0;
    while (i <= r)
    {
        A[i++] = sorted_arr[t++];
        counter++;
        if (counter == K)
        {
            cout << A[i - 1];
        }
    }
}

void merge_sort(int* A, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    merge_sort(A, 0, N - 1);
    if (counter < K)
    {
        cout << -1;
    }

    return 0;
}