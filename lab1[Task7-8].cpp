//
// Created by ABBAD on 11/09/2025.
//
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std ;
//
// // function to find the value and pushback it to te index vector
// template <typename D>
// vector <int>  find_index (vector<D> & arr , const D & key) {
//     vector <int> index ;
//     for ( int i = 0 ; i < arr.size() ; i++) {
//             if ( arr[i] == key ) {
//                 index.push_back(i) ;
//             }
//     }
//     return index ;
// }
//
// // function to print he vector
// template <typename D>
// void print(vector<D> & arr) {
//     for (int i = 0 ; i < arr.size() ; i++) {
//
//         cout << "  "<< arr[i]  ;
//     }
// }
//
// int main() {
//     cout << " First Test : (multiple occurences)"<< endl ;
//     vector <int> arr = {1,2,3,2,4,9,5,4};
//     int value = 4 ;
//     auto index = find_index(arr,value);
//     print(arr);
//     cout << "\n key to e found : "<< value << endl;
//     cout << " index found : " ;
//     print(index) ;
//
//
//     cout << "\n \n  second test : (key not present) \n ";
//     vector<int> arr2 = {1,2,3,2,9,5,};
//     auto index1 = find_index(arr2,value);
//     print(arr);
//     cout << "\n key to e found : "<< value << endl;
//
//     if (arr2.size() == 0) {
//         cout<<"empty array";
//     }
//     else if (index1.size() == 0) {
//         cout<<"no element found";
//     }
//
//     else {
//         cout << " index found : " ;
//         print(index1) ;
//     }
//
//
//     cout << "\n \n  third test : (empty) \n ";
//     vector<int> arr3 = {};
//     auto index2 = find_index(arr3,value);
//     print(arr);
//     cout << "\n key to e found : "<< value << endl;
//
//     if (arr3.size() == 0) {
//         cout<<"empty array";
//     }
//     else if (index2.size() == 0) {
//         cout<<"no element found";
//     }
//
//     else {
//         cout << " index found : " ;
//         print(index2) ;
//     }
//
//     return 0 ;
// }


#include <iostream>
#include <string>
using namespace std;


int check_pattern(const string text , const string pattern) {
    if (pattern.empty()) {
        return -1 ;
    }
    if (pattern.length() > text.length()) {
        return -1 ;
    }

    for (int i = 0 ; i <= text.length() - pattern.length() ; i++) {
        bool present = true ;
        for (int j = 0 ; j < pattern.length() ; j++) {
            if (text[i + j] != pattern[j]) {
                present = false ;
                break ;
            }
        }
        if (present == true) {
            return i ;
        }
    }
    return -1 ;
}

 void print (string text , string pattern , int value) {
    cout <<"Text : "<< text << endl;
    cout <<"Pattern : "<< pattern << endl;
    if (value == -1) {
        cout << "pattern not found " << endl ;
    }
    else {
        cout << "pattern found" <<  endl ;
    }
}

int main() {

    cout<<" First Test : (Beginning)"<<endl ;
    string text1 = "hello world programming";
    string pattern1 = "hello";
    int value = check_pattern(text1, pattern1);
    print(text1,pattern1,value);


    cout<<"\n Second Test : (End)"<<endl ;
    string text2 = "learn programming cpp";
    string pattern2 = "cpp";
    value = check_pattern(text2, pattern2);
    print(text2,pattern2,value);


    cout<<"\n Third Test : (Not Present)"<<endl ;
    string text3 = "search in this text";
    string pattern3 = "xyz";
    value = check_pattern(text3, pattern3);
    print(text3,pattern3,value);


    cout<<"\n Fourth Test : (Empty Pattern)"<<endl ;
    string text5 = "any text here";
    string pattern5 = "";
    value = check_pattern(text5, pattern5);
    print(text5,pattern5,value);
    return 0 ;
}