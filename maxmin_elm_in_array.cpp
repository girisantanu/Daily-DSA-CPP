// Maximum and Minimum Element in an Array
#include<iostream> 
using namespace std;

struct element{
        int max;
        int min;
};
element getminmax(int arr[],int n)
{
    struct element minmax;
    int i;

    if (n==1)
    {
        minmax.min=arr[0];
        minmax.max=arr[0];
        return minmax;
        
    }
    if (arr[0]>arr[1])
    {
        minmax.max=arr[0];
        minmax.min=arr[1];
    }
    else
    {
        minmax.max=arr[1];
        minmax.min=arr[0];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>minmax.max)
            minmax.max=arr[i];
        
        else if (arr[i]<minmax.min)
        {
            minmax.max=arr[i];
        }
        
        return minmax;
    }
    
    

    
}
int main()
{
    int arr[]={134,34567,5678765,434567654,56};
    int arr_size=6;

    struct element minmax=getminmax(arr,arr_size);
    
    cout<<"minimum element is "
        <<minmax.min<<endl;
    cout<<"maximum element is "
        <<minmax.max<<endl;
    
    return 0;
}
