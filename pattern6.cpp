/* Pattern to print is ...
    *
    **
    ***
    ****
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number :" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*  ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}