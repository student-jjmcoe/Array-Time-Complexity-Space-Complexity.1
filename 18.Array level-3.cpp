#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

//4]
void printArray(int arr[][4], int row, int col){
    // Rowwise access
    cout<<"Rowwise approach"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

    // // Columnwise access 
    // cout<<"columnwise approach"<<endl;
    // for(int i=0;i<col;i++){
    //     for(int j=0;j<row;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }  

}

// 6] to find target element
bool findTarget(int arr[][4], int row, int col, int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                //Target found
                return true;
            }
        }
    }
    //target not found
    return false;
}

//7] to find Maximum
int findMax(int arr[][4], int row, int col){
    int maxAns = INT_MIN;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] > maxAns){
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

//8] to find minimum 
int findMin(int arr[][4], int row, int col){
    int minAns = INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(minAns > arr[i][j]){
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}


//9] to find row wise sum
int rowWiseSum(int arr[][4], int row, int col){
    int sum = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum = sum + arr[i][j];
        }
    }
    return sum;
}

//10] doing transpose
int transpose(int arr[][4], int row, int col){
    int i,j;
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main(){
    // 1]// creation of 2D array
    // int arr[5][10];

    // 2]// initialization of an 2D array
    // int brr[3][4]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    // };
    // 3]// initialization of an 2D array another method
    // int crr[][4]={
    //     {1,5,6,3},
    //     {34,5,78,2},
    //     {11,22,33,44},
    // };

    // //4]function call
    // int arr[3][4]={
    //                 {1,2,3,4},
    //                 {5,6,7,8},
    //                 {9,10,11,12},
    //               };
    
    // int row=3;
    // int col=4;

    // printArray(arr, row, col);

// //5]
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<"Enter the row input for Row index:"<<i<<" "<<"Column index:"<<j<<"=";
//             cin>>arr[i][j];
//         }
//     }
//     printArray(arr, row, col);

// // 6]
// int arr[][4]={
//                {12,2,34,1},
//                {10,32,60,7},
//                {11,22,33,44},
//              };
// int row=3;
// int col=4;
// int target=33;

// cout<<"found or not: "<< findTarget(arr, row, col, target)<<endl;

// // 7]
// cout<<"maximum is : "<< findMax(arr, row, col)<<endl;


// // 8]
// cout<<"minimum is : "<< findMin(arr, row, col)<<endl;

// // 9]
// cout<<"Rowise sum: "<<rowWiseSum(arr, row, col)<<endl;

// // 10]
// cout<<"printing before transpose"<<endl;
// printArray(arr, row, col);

// cout<<"Doing transpose"<<endl;
// transpose(arr, row, col);

// cout<<"After Transpose"<<endl;
// printArray(arr, row, col);

// 11]
int arr[5];
vector<int>v(5);

cout<<"Size of vector : "<<v.size()<<endl;

cout<<"printing vector:"<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<' ';
}


    return 0;
}