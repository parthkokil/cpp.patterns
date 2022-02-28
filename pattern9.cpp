/* Pattern to print is ...
    1
    23
    345
    4567
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
        // int value=row;
        while (col <= row)
        {
            cout << row + col - 1;  //cout << value;
            // value = value +1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}