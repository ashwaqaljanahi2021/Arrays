#include <iostream>
using namespace std;

void arrayFun( )
{
    const int Size = 10;
    int array[Size];
    for(int i = 0; i<Size;i++)
    {
        array[i] = i + 1;
    }
    for(int i = 0;i<Size;i++)
    {
        cout<<array[i]<<endl;
    }
}
int main()
{
arrayFun();
}