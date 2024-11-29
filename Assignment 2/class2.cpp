#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int admNo;
    string name;
    float marksEng, marksMaths, marksSci, total;

    inline float compute(float marksEng, float marksMaths, float marksSci) const
    {
        return marksEng + marksMaths + marksSci;
    }

public:
    void readData()
    {
        cout << "Enter Admission Number: ";
        cin >> admNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter marks in English: ";
        cin >> marksEng;
        cout << "Enter marks in Mathematics: ";
        cin >> marksMaths;
        cout << "Enter marks in Science: ";
        cin >> marksSci;

        total = compute(marksEng, marksMaths, marksSci);
    }

    void showData() const
    {
        cout << "Admission Number: " << admNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks in English: " << marksEng << endl;
        cout << "Marks in Mathematics: " << marksMaths << endl;
        cout << "Marks in Science: " << marksSci << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Student s1;
    s1.readData();
    s1.showData();

    return 0;
}