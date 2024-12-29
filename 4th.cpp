#include <iostream>
using namespace std;
int cal(int n)
{
    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int noteCount[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        if (n >= notes[i])
        {
            noteCount[i] = n / notes[i];
            n -= noteCount[i] * notes[i];
        }
    }
    cout << "Minimum number of notes required: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (noteCount[i] != 0)
        {
            cout << notes[i] << " taka: " << noteCount[i] << endl;
        }
    }
}
int items()
{
    int sales_unit[10];
    int quantity[10];
    int totalSales = 0;
    int totalquantity = 0;
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Day " << j + 1 << endl;
            cout << "Enter the sales unit price of item " << i + 1 << " ";
            cin >> sales_unit[i];
            if ((sales_unit[i] < 0) || (sales_unit[i] > 1000))
            {
                cout << "Items value can't be 0 or above 100" << endl;
                cout << "Again enter the sales unit price of item " << i + 1 << " ";
                cin >> sales_unit[i];
            }
            cout << "Enter the quantity : ";
            cin >> quantity[i];
            totalSales += sales_unit[i] * quantity[i];
            totalquantity += quantity[i];
        }
        cout << "Total sales :" << totalSales << endl;
        cout << "Average quantity " << totalquantity / 10 << endl;
    }
    cal(totalSales);
    return totalSales;
}
int main()
{
    items();

    return 0;
}