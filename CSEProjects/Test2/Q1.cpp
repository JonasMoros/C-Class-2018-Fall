//Jonas Moros 
//C++
#include <iostream>
#include <vector>

using namespace std;

int* mergeArrays(int arr1[], int arr2[], int s1, int s2, int result[]){
    int swapchanged = -1;
    int x = s1 + s2;
    for(int i = 0; i < s1; i++){//sets result array at i equal to array1 at i
        result[i]=arr1[i];
    }
    for(int t = 0; t < s2; t++){//sets result array at index t plus s1 equal to array2 at i 
        result[t+s1] = arr2[t];
        
    }
    // for(int i =0; i < (s1+s2); i++){
    //     cout << result[i] << " ";
    // }
    for(int index = 0; index < x-1; index++){//sorts array 
        for(int t = 0; t < (x-index-1); t++)
        if(result[t] > result[t+1]){
            swapchanged = result[t+1];
            result[t+1] = result[t];
            result[t] = swapchanged;
        }
    }

    

    return result;
}




int main(){
    //Test case 1
    int size1 = 10;//test1
    int size2 = 5;//test1
    int array1[size1] = {2, 5, 10, 15, 20, 22, 25, 33, 45, 67,};//Test1
    int array2[size2] = {6, 7, 12, 18, 29,};//Test1

    //Test case 2
    // int size1 = 5;
    // int size2 = 0;
    // int array1[size1] = {1,7,9,11,15};
    // int array2[size2] ={};

    //Test case 3
    // int size1 = 4;
    // int size2 = 8;
    // int array1[size1] = {8,9,10,11};
    // int array2[size2] = {1,15,16,67,77,81,85,87};


    int x = size1 + size2;
    int* result = new int[size1+size2];
    
    mergeArrays(array1,array2,size1,size2,result);//calls function
        cout << "Resulting Array: {";
    for(int index = 0; index < x; index++){
        cout << "," << result[index];
    }   
    cout << "}";
    //cout << result[]

   
    
return 0;
}