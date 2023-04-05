#include <iostream>

using namespace std;

struct MinMax
{
    int min;
    int max;
};

MinMax getMinMax(int arr[],int n)
{
    struct MinMax mm;
    int i;
    if(n==1)
    {
        mm.min = arr[0];
        mm.min = arr[0];
        return mm;
    }
    
    if(arr[0]<arr[1])
    {
        mm.min = arr[0];
        mm.max = arr[1];
    }
    else
    {
        mm.min = arr[1];
        mm.min = arr[0];
    }
    for(i=2;i<n;i++)
    {
        if(arr[i]>mm.max)
            mm.max = arr[i];
        else if(arr[i]<mm.max)
            mm.min = arr[i];
        
    }
    
    return mm;
}

int main()
{
    int arr[] = {1,5,3,7,2,8,4,9};
    int n = 8;
    struct MinMax mm = getMinMax(arr,n);
    
    cout<<"Min = "<<mm.min<<endl;
    cout<<"Max = "<<mm.max<<endl;

    return 0;
}
