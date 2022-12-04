#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    const int n = 9;
    int arr[n];
    int arr2[n];

    cout << "Enter array values: " << endl;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i + 1 << "] = ";
        cin >> arr[i];
    }

    cout << endl;

    cout << "Negative array values index: " << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr2[i] = i + 1;
            cout << "arr[" << arr2[i] << "]" << endl;
        }
    }


    system("pause");
    return 0;
}
