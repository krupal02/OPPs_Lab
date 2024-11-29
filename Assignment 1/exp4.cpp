#include <bits/stdc++.h>
using namespace std;

struct Customer
{
    string name;
    int number_of_calls;
    float bill_amount;

    void input_data()
    {
        cout << "Enter customer's name: ";
        getline(cin, name);
        cout << "Enter number of calls made: ";
        cin >> number_of_calls;
    }

    void compute_bill()
    {
        if (number_of_calls <= 100)
        {
            bill_amount = 200;
        }
        else if (number_of_calls <= 150)
        {
            bill_amount = 200 + (number_of_calls - 100) * 0.60;
        }
        else if (number_of_calls <= 200)
        {
            bill_amount = 200 + 50 * 0.60 + (number_of_calls - 150) * 0.50;
        }
        else
        {
            bill_amount = 200 + 50 * 0.60 + 50 * 0.50 + (number_of_calls - 200) * 0.40;
        }
    }

    void output_data()
    {
        cout << "Customer's Name: " << name << endl;
        cout << "Telephone Bill Amount: Rs. " << bill_amount << endl;
    }
};

int main()
{
    Customer customer;

    customer.input_data();
    customer.compute_bill();
    customer.output_data();

    return 0;
}