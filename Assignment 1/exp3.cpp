#include <bits/stdc++.h>
using namespace std;

struct Publication
{
    string title;
    int price;
    string author;
    void getDatd()
    {
        cout << "Enter the title of the book: ";
        cin >> title;
        cout << "Enter the price of the book: ";
        cin >> price;
        cout << "Enter the author of the book: ";
        cin >> author;
    }
    void printdatd()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Author: " << author << endl;
    }
};

struct Book : Publication
{
    int count;
    void getDatd()
    {
        Publication::getDatd();
        cout << "Enter the no of pages in the book: ";
        cin >> count;
    }
    void printdatd()
    {
        Publication::printdatd();
        cout << "Page Count: " << count << endl;
    }
};

struct Ebook : Publication
{
    int time;
    void getDatd()
    {
        Publication::getDatd();
        cout << "Enter the play time of the Ebook: ";
        cin >> time;
    }
    void printdatd()
    {
        Publication::printdatd();
        cout << "Play time: " << time << " minutes." << endl;
    }
};

int main()
{
    struct Book b1;
    struct Ebook eb1;
    cout << "Enter the details of b1: " << endl;
    b1.getDatd();
    cout << "Enter the details of Eb1: " << endl;
    eb1.getDatd();
    cout << "The details of b1 are: " << endl;
    b1.printdatd();
    cout << "The details of eb1 are: " << endl;
    eb1.printdatd();
    return 0;
}