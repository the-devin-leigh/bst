#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void arraytotree(int array[], int i, int counter){ //counter = 1 (to start)
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
  /*for(int x = 0, x<(sizeof(array)/sizeof(array[0])); x++){
    cout << array[x] << " ";
    }*/

  for(int x = 0; x<(sizeof(array)/sizeof(array[0])); x++){
    for(int j = 0; j < pow(2,x); j++){
      cout << array[j] << " ";
    }
    cout << endl;
  }
}

int main(){
  //code here
  char* input = new char[10];

  cout << "File or Manual input?" << endl;
  cin.get(input, 10);
  cin.clear();
  cin.ignore(100, '\n');

  if(strcmp(input, "file") == 0){

  }

  if(strcmp(input, "manual" == 0){
    int i = 0;
    int lol = 0;
    char* exitCon = new char[10];
    cout << "How many numbers will you enter? " << endl;
    cin >> exitCon;
    cin.clear();
    cin.ignore(100, '\n');
    int harray[atoi(exitCon)]; //set array size to int number
    while(lol != atoi(exitCon)){
      char* num = new char[10];
      cout << "Enter a number between 1 and 1000: ";
      cin >> num;
      cin.clear();
      cin.ignore(100, '\n');
      harray[i] = atoi(num);
      i++;
      lol++;
    }
      
}

  
