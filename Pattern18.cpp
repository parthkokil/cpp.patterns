// Print following Pattern....
// D
// C    D
// B    C   D
// A    B   C   D
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number :" << endl;
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        int col=1;
        char start_ch = 'A' + n - row;
        while (col<=row)
        {
            cout << start_ch;
            col = col + 1;
            start_ch = start_ch + 1;
        }
        cout << endl;
        row = row + 1;
    }
    
}