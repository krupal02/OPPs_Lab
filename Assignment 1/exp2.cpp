#include <bits/stdc++.h>
using namespace std;

struct item
{
    int n, m, p;
    float cost, discount, tax, total;

    float price(int n, int m, int p)
    {
        cost = 1500 * n + 200 * m + 450 * p;
        discount = 0.05 * 1500 * n + 0.10 * 200 * m + 0.15 * 450 * p;
        tax = 0.10 * (cost - discount);
        total = cost - discount + tax;
        return total;
    }
};

int main()
{
    item i;
    cout << "Enter number of miners, toasters and fans : ";
    cin >> i.n >> i.m >> i.p;
    i.total = i.price(i.n, i.m, i.p);

    cout << "Amount to be paid : " << i.total << endl;
    return 0;
}