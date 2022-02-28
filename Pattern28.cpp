#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter any number :" << endl;
    cin >> n;
    int row = n;
    while (row>=1)
    {
        int space = 0;
        while (space < n - row)
        {
            cout << " ";
            space = space + 1;
        }
        int col=n-row+1;
        while (col<=n)
        {
            cout << col;
            col = col + 1;
        }
        cout << endl;
        row = row - 1;
    }
}