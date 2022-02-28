// Print following Pattern....
//  1   1   1   1
//      2   2   2
//          3   3
//              4

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
        int space = 1;
        while (space < row)
        {
            cout << " ";
            space = space + 1;
        }
        int col=1;
        while (col<=n-row+1)
        {
            cout << start_col;
            col = col + 1;
        }
        start_col= start_col + 1;
        cout << endl;
        row = row + 1;
    }
    
}