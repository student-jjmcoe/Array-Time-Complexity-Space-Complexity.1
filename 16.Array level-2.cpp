#include<iostream>
using namespace std;

// int getUnique(int arr[],int n){
//     int ans = 0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[9] = {2,10,11,13,10,2,15,13,15};
//     int n = 9;

//     int uniqueOne = getUnique(arr , n);
//     cout <<"Unique element is : "<< uniqueOne << endl;
// }

// int main(){
//     int arr[3] = {10,20,30};
//     int n = 3;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i]<<","<<arr[j]<<endl;
//         }
//     }
// }

// int main(){
//     int arr[3] = {10,20,30};
//     int n = 3;
    
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             cout<<arr[i]<<","<<arr[j]<<endl;
//         }
//     }
// }

// int main(){
//     int arr[3] = {10,20,30};
//     int n = 3;
    
//     for(int i=0;i<n;i++){
//         for(int j=2;j>=0;j--){
//             cout<<arr[i]<<","<<arr[j]<<endl;
//         }
//     }
// }

// int main(){
//     int arr[4] = {1,2,3,4};
//     int n = 4;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=0;k<n;k++){
//             cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//             }
//         }
//     }
// }


// int sortZeroOne(int arr[] , int n){
//     int zeroCount = 0;
//     int oneCount = 0;
//     int i = 0;

//     for(i=0;i<n;i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         if(arr[i]==1){
//             oneCount++;
//         }
//     }
//     // method 1
//     // for(i=0;i<zeroCount;i++){
//     //     arr[i]=0;
//     // }
//     // for(int j=i;j<n;j++){
//     //     arr[j]=1;
//     // }

//     // method 2
//     int index=0;
//     while(zeroCount--){
//         arr[index]=0;
//         index++;
//     }
//     while(oneCount--){
//         arr[index]=1;
//         index++;
//     }
// }

// int main(){
//     int arr[15]={0,1,0,1,0,1,1,1,0,0,1,1,0,0,1};
//     int n=15;

//     sortZeroOne(arr , n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Right Shift by 1
// void rightShiftArray(int arr[] , int n){
//     //step1 storing last element 
//     int temp = arr[n-1];
    
//     //step2
//     //shift -> arr[i] = arr[i-1]
//     for(int i = n-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     //step3 copy temp into 0th index
//     arr[0] = temp;
// }
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int n = 5;

//     rightShiftArray(arr , n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//left shift by1 
// void leftShiftArray(int arr[] , int n){
//     //step1
//     int temp = arr[0];

//     //step2
//     for(int i=0;i<n;i++){
//         arr[i]=arr[i+1];
//     }
//     //step3
//     arr[n-1]=temp;
// }
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int n=5;

//     leftShiftArray(arr , n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Right Shift by 2
// void rightShiftArray(int arr[] , int n){
//     //step1 storing last element 
//     int temp1 = arr[n-1];
//     int temp2 = arr[n-2];
    
//     //step2
//     //shift -> arr[i] = arr[i-1]
//     for(int i = n-1;i>0;i--){
//         arr[i]=arr[i-2];
//     }
//     //step3 copy temp into 0th index
//     arr[0] = temp2;
//     arr[1] = temp1;
// }
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int n = 5;

//     rightShiftArray(arr , n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//left shift by 2 
void leftShiftArray(int arr[] , int n){
    //step1
    int temp1 = arr[0];
    int temp2 = arr[1];

    //step2
    for(int i=0;i<n;i++){
        arr[i]=arr[i+2];
    }
    //step3
    arr[n-1]=temp2;
    arr[n-2]=temp1;
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;

    leftShiftArray(arr , n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}