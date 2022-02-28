// Print following Pattern....
//  1   2   3   4
//      1   2   3
//          1   2
//              1

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
        int space = 1;
        while (space < row)
        {
            cout << " ";
            space = space + 1;
        }
        int col=1;
        int start_col= 1;
        while (col<=n-row+1)
        {
            cout << start_col;
            start_col= start_col + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    
}
