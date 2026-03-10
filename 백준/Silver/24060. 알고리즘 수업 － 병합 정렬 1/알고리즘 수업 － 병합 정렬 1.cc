#include <iostream>
#include <vector>

using namespace std;

int N, K;
int counter = 0;
int answer = -1;

void merge_arr(vector<int>& arr, vector<int>& tmp, int p, int q, int r)
{
    int i = p;
    int j = q + 1;
    int t = p;

    while (i <= q && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            tmp[t++] = arr[i++];
        }
        else
        {
            tmp[t++] = arr[j++];
        }
    }

    while (i <= q)
    {
        tmp[t++] = arr[i++];
    }

    while (j <= r)
    {
        tmp[t++] = arr[j++];
    }

    for (int idx = p; idx <= r; idx++)
    {
        arr[idx] = tmp[idx];
        counter++;

        if (counter == K)
        {
            answer = arr[idx];
        }
    }
}

void merge_sort(vector<int>& arr, vector<int>& tmp, int p, int r)
{
    if (p >= r) return;

    int q = (p + r) / 2;
    merge_sort(arr, tmp, p, q);
    merge_sort(arr, tmp, q + 1, r);
    merge_arr(arr, tmp, p, q, r);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    vector<int> arr(N);
    vector<int> sorted_arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    merge_sort(arr, sorted_arr, 0, N - 1);

    cout << answer;
    return 0;
}