// Print following Pattern....
//              1
//          2   2
//      3   3   3
//  4   4   4   4
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number :" << endl;
    cin >> n;
    int row = 1;
    int start_col= 1;
    while (row<=n)
    {
        int space = n-row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col=1;
        while (col<=row)
        {
            cout << start_col;
            col = col + 1;
        }
        start_col= start_col + 1;
        cout << endl;
        row = row + 1;
    }
    
}