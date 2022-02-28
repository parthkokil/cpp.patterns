/*   Pattern to Print is ...
        *****
        *****
        *****
        *****
        *****                i.e. 5 x 5.

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number :" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}