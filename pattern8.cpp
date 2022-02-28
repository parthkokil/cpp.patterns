/* Pattern to print is ...
    1
    23
    456
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number :" << endl;
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count = count +1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}