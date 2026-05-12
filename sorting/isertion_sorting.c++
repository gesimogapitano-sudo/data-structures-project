   // Insertion Sort Algorithm in C++
   #include <iostream>
   int main(){
   int arr[]={89,2,67,37,72,17,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp =arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    } 
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << (i + 1 == n ? '\n' : ' ');
  } 
  return 0;
    }