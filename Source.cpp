
#include <iostream>

using namespace std;




int sum_of(int arry[]/*just an array*/, int i/*current elenent*/, int x /*number of elements*/)
{
    if (i == x-1)
    {
        return arry[i];
    }
    else
    {
        return arry[i] + sum_of(arry, i+1, x);
    }
    
    
    
}

int main()
{int arr[3] = { 1,2,3};
    cout << sum_of(arr, 0, 3);

    return 0;
}
