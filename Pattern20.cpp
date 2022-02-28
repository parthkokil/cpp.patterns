// Print following Pattern....
// -  -  -  *  
// -  -  *  *
// -  *  *  *
// *  *  *  *                        where n = 4;
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number :" << endl;
    cin >> n;
    int row =1;
    while (row<=n)
    {
        int space = n -row; // there are n-row spaces...
        while (space)
        {
            cout << " ";
            space = space - 1 ; // spaces are decrementing .....
        }
        int col=1;
        while (col<=row)
        {
            cout << "*" ;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    
}