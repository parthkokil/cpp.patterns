// Print following Pattern....
//              1
//          1   2   1
//      1   2   3   2   1
//  1   2   3   4   3   2   1
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
        int space = n-row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col=1;
        while (col<=row)
        {
            cout<< col ;
            col = col + 1;
        }
        int start = row -1;
        while (start)
        {
            cout<<start;
            start = start -1;
        }
        
        row = row + 1;
        cout << endl;
    }
    return 0;
}