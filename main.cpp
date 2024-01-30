#include <iostream>
#include "functions_to_implement.cpp"
using namespace std;


int main(){
    bool a = false;
    bool b = false;
    bool c = false;
    bool d = false;
    vector<int> test1 {1,2,3,4,5};

    if(Product(test1) == 120){
        a = true;
        cout << "Congrats you can multiply\n";
    }

    if(Sum(test1) == 15){
        b = true;
        cout << "Congrats you can add\n";
    }

    if(Sign(-1.0) == -1){
        c = true;
        cout << "you know what a negative number is\n";
    }
    if(Sign(1.0) == 1){
        d = true;
        cout << "you know what a positive number is\n";
    }
    if(a&&b&&c&&d){
        cout << "All tests passed\n";
    }
    return 1;
}