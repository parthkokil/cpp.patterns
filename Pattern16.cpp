// Print following Pattern...
//  A
//  B   C
//  D   E   F
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    int row = 1;
    char start_ch='A';
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout << start_ch;
            start_ch = start_ch + 1;
            col = col +1;
        }
        cout<<endl;
        row = row + 1;
    }
    
}