#include <iostream>
using namespace std;

void array()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element" << "[" << i << "]" << "[" << j << "]" << " ";
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            else if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    cout << "Maximum element of the array : " << max << endl;
    cout << "Minimum element of the array : " << min << endl;
    // corner calculations
    int sum = arr[0][0] + arr[0][2] + arr[2][0] + arr[2][2];
    cout << "Corners are " << endl
         << arr[0][0] << " " << arr[0][2] << endl
         << arr[2][0] << " " << arr[2][2] << endl;
    cout << "Sumations of corner :" << sum;
}
int main()
{
    array();
}