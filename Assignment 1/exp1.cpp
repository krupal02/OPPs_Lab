#include <bits/stdc++.h>
using namespace std;

struct post
{
    float weight;
    float cost;

    float calc(float weight)
    {
        float cost = 0.0;
        if (weight <= 50)
        {
            cost = (weight / 10) * 0.50;
        }
        else if (weight <= 150)
        {
            cost = (50 / 10) * 0.50;
            cost += ((weight - 50) / 10) * 0.40;
        }
        else if (weight <= 400)
        {
            cost = (50 / 10) * 0.50;
            cost += (100 / 10) * 0.40;
            cost += ((weight - 150) / 10) * 0.25;
        }
        else
        {
            cost = (weight / 1000) * 25;
        }
        return cost;
    }
};

int main()
{
    post Postage;
    cout << "Enter weight of letter in grams: ";
    cin >> Postage.weight;

    Postage.cost = Postage.calc(Postage.weight);
    cout << "Postage to be paid: Rs. " << Postage.cost << endl;

    return 0;
}