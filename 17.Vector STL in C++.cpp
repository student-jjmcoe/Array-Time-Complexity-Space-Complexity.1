#include<iostream>
#include<vector>
using namespace std;

// void fun(int arr[], int n){
//     cout<<"Array Elements : ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     // // Static memory allocation  of array
//     // int arr[5]={1,2,3,4,5};
//     // fun(arr, 5);

//     // Dynamic memory allocation of array
//     int n;
//     cin>>n;
//     int *arr = new int[n];
//     // Each element would be 0, or garbage 
//     cout<<"Taking Input"<<endl;
//     for(int i=0;i<n;i++){
//         int data;
//         cin>>data;
//         arr[i]= data;
//     }

//     //let me try to insert more items;
//     // arr[n]=80;
//     // for(int i=0;i<6;i++){
//     //     arr[n+i]= 80;
//     // }
//     fun(arr,n);

// }

// void print(vector<int>v){
//     int size = v.size();
//     for(int i=0;i<size;i++){
//         // cout << v[i] << " ";
//         cout<< v.at(i) << " ";// as same as above
//     }
//     cout<<endl;
// }

// void print(vector<char>v){
//     int size = v.size();
//     for(int i=0;i<size;i++){
//         // cout << v[i] << " ";
//         cout<< v.at(i) << " ";// as same as above
//     }
//     cout<<endl;
// }

void print(vector<char>v){
    //anither same mathod
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    // // in vector, dont tell size of vector
    // // just keep inserting ,vector will manage the allocation
    // vector<int>v; // array hi hai
    // // default with no data, 0 size
    // vector<int>arr2(5,-1);
    // //initialise with n size with specific data
    // print(arr2);

    // arr2.push_back(50);
    // print(arr2);

    // vector<int>arr3 = {1,2,3,4,5};
    // print(arr3);
    // arr3.pop_back();
    // print(arr3);

    //  vector<int>arr4{1,2,3,4,5};//another method
    //  print(arr4);

    //  // how to copy vector
    //  vector<int>arr5={1,2,3,4,5};
    //  vector<int>arr6(arr5);
    //  print(arr6);

    // while(1){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"capacity: "<<v.capacity()<<" "<<"Size: "<<v.size()<<endl;
    // }

    // // insert
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // print(v);

    // // pop -> delete
    // cout<<"After pop array: "<<endl;
    // v.pop_back();
    // print(v);

    // cout<<"After pop array: "<<endl;
    // v.pop_back();
    // print(v);

    // cout<<"After pop array: "<<endl;
    // v.pop_back();
    // print(v);

    // cout<<"After pop array: "<<endl;
    // v.pop_back();
    // print(v);
    
    // int n;
    // cin>>n;
    // cout<<"Taking input"<<endl;
    // for(int i=0;i<n;i++){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    // }
    // for(int i=0;i<10;i++){
    //     v.push_back(80);
    // }
    // cout<<"after insertion: ";
    // print(v);

    // //i want to clear the vector
    // v.clear();
    // cout<<"after clear:";
    // print(v);

    // v.push_back(50);
    // print(v);

    // v.pop_back();
    // print(v);

    vector<char>v;
    v.push_back('a');

    v.push_back('b');

    v.push_back('c');

    v.push_back('d');

    v.push_back('e');
    print(v);

    cout<<"front element: "<< v[0] << endl;
    cout<<"front element: "<< v.front() << endl;
    cout<<"end element: "<<v[v.size() - 1] << endl;
    cout<<"end element: "<<v.back() << endl;

}