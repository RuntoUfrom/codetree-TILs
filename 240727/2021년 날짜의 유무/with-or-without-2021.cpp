#include <iostream>
using namespace std;

bool isDay(int m, int d){
    switch(m){
        case 1: 
            if(d<=31)
            return true;
            break;
        case 2: 
            if(d<=30)
            return true;
            break;
        case 3: 
            if(d<=31)
            return true;
            break;
        case 4: 
            if(d<=30)
            return true;
            break;
        case 5: 
            if(d<=31)
            return true;
            break;
        case 6: 
            if(d<=30)
            return true;
            break;
        case 7: 
            if(d<=31)
            return true;
            break;
        case 8: 
            if(d<=31)
            return true;
            break;
        case 9: 
            if(d<=30)
            return true;
            break;
        case 10: 
            if(d<=31)
            return true;
            break;
        case 11: 
            if(d<=30)
            return true;
            break;
        case 12: 
            if(d<=31)
            return true;
            break;
        default :
            return false;
            break;
    }
}

int main() {
    int M,D;
    cin>>M>>D;
    if(isDay(M,D)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}