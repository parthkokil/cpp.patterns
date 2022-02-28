// Print following Pattern....
// A    B   C
// B    C   D
// C    D   E   
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number :" << endl;
    cin >> n;
    int row =1;
    while (row <= n)
    {
        int col = 1;
        char start_ch = 'A' + row + col - 2;
        while (col<=n)
        {
            cout << start_ch;
            start_ch = start_ch + 1;
            col = col + 1;
        }
        cout << endl ;
        row = row + 1;
    }
    
}