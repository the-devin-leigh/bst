#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void arraytotree(int array[], int i){
  int counter = 1;
  while((i+counter)<(sizeof(array)/sizeof(array[0]))){
    if(array[i+counter]>array[i] && array[i+counter]!=array[2*i+2]){ //right child
      swap(array[i+counter], array[2*i+2]);
      counter++;
    }else if(array[i+counter]<array[i] && array[i+counter]!=array[2*i+1]){ //left child
      swap(array[i+counter], array[2*i+1]);
      counter++;
    }
  }
}

void print(int array[]){
  for(int x = 0, x<(sizeof(array)/sizeof(array[0])); x++){
    cout << array[x] << " ";
  }
}

  
