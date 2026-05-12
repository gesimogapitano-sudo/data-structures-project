
// Selection Sort Algorithm in C++

#include <iostream>

int main(){
int arr[]={89,2,67,37,72,17,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        int small=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[small])
            {
                small = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
    }
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    }
return 0;
}