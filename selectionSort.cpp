//基础代码 
#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n){ 
  for(int i = 0 ; i < n ; i ++){
    int minIndex = i;
    for(int j = i + 1 ; j< n ; j ++ ){
      if( arr[j] < arr[minIndex] )
        minIndex = j;
    }
   swap( arr[i], arr[minIndex] );
  }

}
  

int main() {

  int a[5] = {5,4,2,3,1};
  selectionSort(a, 5);
  for(int i = 0; i < 5; i ++ )
    cout<<a[i]<<" ";
  cout<<endl;

  return 0;
}



