#include <iostream>
using namespace std;

    void Print10(){
        for(int i = 0; i<10; i++){
            cout<<"*";
    }}
    
int main() {

    for(int i = 0; i<5; i++){
        Print10();
        cout<<endl;
    }
    return 0;
}