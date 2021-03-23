
/* Write a program to reverse an array or string
    GOG link : https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
    
   
*/

/* Noob way 
TC : O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[7] = {0};

    for(int i=0;i<7;i++){
        arr2[6-i] = arr1[i];
    }

    cout<<"original array is ";
    
    for(int i=0;i<7;i++){
        cout<<arr1[i]<<" ";
    }

    cout<<"\n" ;

    cout<<"reversed array is ";
    
    for(int i=0;i<7;i++){
        cout<<arr2[i]<<" ";
    }
}

// M2 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int temp;

    cout<<"original array is ";
    
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n" ;

    for(int i=0;i<7/2;i++){
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }

    cout<<"reversed array is ";
    
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}

//M3 

#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;
     
    int temp = arr[start]; 
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1); 
}     
 
 
/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
} 
 
/* Driver function to test above functions */
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    // To print original array
    printArray(arr, 6);
     
    // Function calling
    rvereseArray(arr, 0, 5);
     
    cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    printArray(arr, 6);
     
    return 0;
}