#include<iostream>
#include<limits.h>
using namespace std;

// int main(){
// 1]
  // // array creation
  // int arr[101];
  // char ch[102];
  // bool flags[223];
  // long num[900];
  // short snum[1000];

  // cout<<"array created successfully"<<endl;

// 2]
  // int a= 5;
  // cout<<"address of a : "<< &a << endl;

  // int arr[10];
  // cout<<"Base address of arr is : "<<&arr<<endl;
  // cout<<"Base address of arr is : "<<arr<<endl;

// 3]
  // int b = 6;
  // cout<<"Size of b: "<< sizeof(b)<<endl;

  // int array[10];
  // cout<<"Size of array: "<< sizeof(array)<<endl;

// 4]
// int arr[]={1,2,3,4,5,6};

// int brr[5]={2,3,4,5,61};

// int crr[5]={2,3};

// //error
// //int drr[2]={1,6,3,9,3};

// 5]
// int arr[5] = {5,8,9,12,13};

// cout << arr[0] << endl;
// cout << arr[3] << endl;
// cout << arr[1] << endl;

// for(int i=0;i<5;i++){
//   cout<< arr[i] << endl;
// }

// 6]taking input in an Array
// int arr[6];
// cin >> arr[0];
// cin >> arr[1];
// cin >> arr[2];
// cin >> arr[3];

// cout<<"INPUT"<<endl;
// for(int i=0;i<6;i++){
//   cout<<"Enter the value for index:"<<i;
//   cin>>arr[i];
// }
// cout<<"OUTPUT"<<endl;
// for(int i=0;i<6;i++){
//   cout<<arr[i]<<endl;
// }

// 7]problem statement
// int arr[10];//creat a array
// cout<<"taking an input"<<endl;
// for(int i=0;i<10;i++){
//   //taking an input
//   cout<<"Enter the value for index"<<i<<":";
//   cin>>arr[i];
// }
// //double - up
// for(int i=0;i<10;i++){
//   arr[i]=2*arr[i];
// }
// //print 
// for(int i=0;i<10;i++){
//   cout<<"Printing after taking double"<<endl;
//   cout<<arr[i]<<'\t';
// }

// 8]problem statement
// int arr[5];
// //taking an input
// for(int i=0;i<5;i++){
//   cout<<"Enter the value for index"<<i<<":";
//   cin>>arr[i];
// }
// //calculating sum
// int sum=0;
// for(int i=0;i<5;i++){
//   sum=sum+arr[i];
// }
// cout<<"sum of elements of array is: "<<sum<<endl;

// 9]Linear search in an array
// int arr[5] = {2,4,6,8,10};
// int target = 10;

// bool flag = 0;
// //0 -> not found
// //1 -> found

// for(int i=0;i<5;i++){
//   if(arr[i] == target){
//     //found
//     flag = 1;
//     break;
//   }
// }
// if(flag == 1){
//   cout<<"Target found"<<endl;
// }
// else{
//   cout<<"target not found"<<endl;
// }
//   return 0;
// }

// 10]
// void printArray(int arr[], int size){
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" " ;
//   }
//   cout<<endl;
// }
// int main(){
//   int arr[5] = {2,4,6,8,10};
//   int size = 5;
//   //function call
//   printArray(arr , size);
// }

// 11]
// bool linearSearch(int arr[],int size,int target){
//   //present -> 1
//   //absent -> 0
//   for(int i=0;i<size;i++){
//     if(arr[i] == target){
//       //found
//       return true;
//     }
//   }
//   //not found
//   return false;
// }
// int main(){
//   int arr[6]={2,4,6,8,10,13};
//   int size = 6;
//   int target = 13;
//   int result = linearSearch(arr,size,target);
//   if(result == 1){
//     cout<<"target found"<<endl;
//   }
//   else{
//     cout<<"target not found"<<endl;
//   }
//   return 0;
// }

// 12]
// void countZeroOnes(int arr[],int size){
//   int zeroCount = 0;
//   int oneCount = 0;
//   for(int i=0;i<size;i++){
//     if(arr[i] == 0){
//       zeroCount++;
//     }
//     if(arr[i] == 1){
//       oneCount++;
//     }
//   }
//   cout << "zeroCount: "<< zeroCount << endl;
//   cout << "oneCount: "<< oneCount << endl;
// }
// int main(){
//   int arr[13] = {1,0,0,0,1,1,1,1,0,0,1,0,1};
//   int size = 13;
//   countZeroOnes(arr , size);
// }

// int main(){
//   // -2 ki power 31
//   cout << INT_MIN << endl;
//   // 2 ki power 31 minus 1
//   cout << INT_MAX << endl;

//   return 0;
// }

// int findMinimumValue(int arr[],int size){
//   // initialisation
//   int minAns = INT_MAX;

//   for(int i=0;i<size;i++){
//     if(arr[i]<minAns){
//       minAns = arr[i];
//     }
//   }
//   return minAns;
// }
// int main(){
//   int arr[7] = {10,23,4,7,25,98,3};
//   int size = 7;
//   int minimum = findMinimumValue(arr,size);
//   cout<<"Minimum answer is : "<< minimum;
// }

//Reverse an array
// void reverseArray(int arr[], int size){
//   int i;
//   int left = 0;
//   int right = size-1;

//   while(left <= right){
//     swap(arr[left],arr[right]);
//     left++;
//     right--;
//   }
//   cout<<"Reversed array is : \n";
//   while(i<size){
//     cout<<arr[i]<<" ";
//     i++;
//   }
// }

// int main(){
//   int arr[6]={10,20,30,40,50,60};
//   int size = 6;

//   reverseArray(arr,size);
// } 

//Reverse an array
// void reverseArray(int arr[], int size){
//   int i;
//   int left = 0;
//   int right = size-1;

//   while(left <= right){
//     swap(arr[left],arr[right]);
//     left++;
//     right--;
//   }
//   cout<<"Reversed array is : \n";
//   while(i<size){
//     cout<<arr[i]<<" ";
//     i++;
//   }
// }

// int main(){
//   int arr[7]={11,12,13,14,15,16,17};
//   int size = 7;

//   reverseArray(arr,size);
// } 


//Extreme print in an array
// void extremePrint(int arr[],int size){
//   int left = 0;
//   int right = size-1;

//   while(left<right){
//     cout<<arr[left]<<" ";
//     cout<<arr[right]<<" ";

//     left++;
//     right--;
//   }
// }
// int main(){
//   int arr[6]={10,20,30,40,50,60};
//   int size=6;
  
//   extremePrint(arr,size);
// }

//
// void extremePrint(int arr[],int size){
//   int left = 0;
//   int right = size-1;

//   while(left<=right){
//     if(left == right){
//       cout<<arr[left]<<" ";
//     }
//     else{
//     cout<<arr[left]<<" ";
//     cout<<arr[right]<<" ";
//     }
//     left++;
//     right--;
//   }
// }
// int main(){
//   int arr[7]={10,20,30,40,50,60,70};
//   int size=7;
  
//   extremePrint(arr,size);
// }

//