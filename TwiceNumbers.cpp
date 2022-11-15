#include <iostream>
#include <array>

using namespace std;
void TwiceNum()
{
    array<int,10>MyIntArray;
    for(int i = 0;i<10;i++)
    {
      MyIntArray[i] = 2 * i;
        cout<<MyIntArray[i]<<endl;
        
    }
    
    cout<<"Size of array is "<<MyIntArray.size()<<endl;
}
int main()
{
    TwiceNum();

}