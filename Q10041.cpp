#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> num;

int main()
{
    int n, r, s;
    cin >> n;
    while (n--)
    {
        cin >> r;
        num.clear();
        for (int i = 0; i < r; i++)
        {
            cin >> s;
            num.push_back(s);
        }
        sort(num.begin(), num.end());
        int mid = num[r / 2];
        int sum = 0;
        for (int i = 0; i < r; i++)
        {
            sum += abs(num[i] - mid);
        }
        cout << sum << endl;
    }

    return 0;
}