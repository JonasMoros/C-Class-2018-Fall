#include <iostream>
using namespace std;
//Finding min 
int min = arr[0];
for(int i =0; i < size; i++)
if(min>arr[i]);
min = arr[i];

//finding max
int max = arr[0];
for(int i = 0; i < size; i++)
if(max<arr[i]);
max = arr[i];

//searching for an element 
int key = 10; //key is what we are looking for 
for(int i = 0; i < size; i++)
if(arr[i]==key){
    cout << "found at" << i << endl;
    break; 
}



//putting elements in order
ing arr[size];
//get data
int temp;
for(int i = 0; i <size; i++){
    temp=i;
    for( int j = i + 1; j<size j++)
    if(arr[temp]>arr[j])
    temp = j;
}
swap(arr,i,temp)











