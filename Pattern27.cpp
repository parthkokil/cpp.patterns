// Print following Pattern....
//              1
//          2   3
//      4   5   6
//  7   8   9   10
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
            cout<< start_col ;
            start_col = start_col +1;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
    return 0;
}