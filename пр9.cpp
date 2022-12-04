#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    const int n = 9;
    int arr[n];
    int arr2[n];

    cout << "Enter values: " << endl;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i + 1 << "] = " << endl;
        cin >> arr[i];
    }

    cout << endl;

    cout << "Negative array values index: " << endl;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            arr2[j] = j + 1;
            cout << "arr[" << arr2[j] << "]" << endl;
        }
    }


    system("pause");
    return 0;
}
