#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define NUM 5

class Member{
    public:
        string name;
        int height;
        double weight;
        Member(string name, int height, double weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Member(){}
};
bool cmpname(const Member &a, const Member &b){
    if(a.name.compare(b.name)<0){
        return true;
    }
    else{
        return false;
    }
}
bool cmpheight(const Member &a, const Member &b){
    if(a.height>b.height){
        return true;
    }else{
        return false;
    }
}

void PrintInfo(Member arr[]){
    for(int i = 0; i<NUM;i++){
        cout<<arr[i].name<<" "<<arr[i].height<<" "<<arr[i].weight<<endl;
    }
}

int main() {
    Member arr[5];
    for(int i = 0; i<NUM; i++){
        string tmpname;
        int tmpheight;
        double tmpweight;
        cin>>tmpname>>tmpheight>>tmpweight;
        arr[i] = Member(tmpname,tmpheight,tmpweight);
    }
    sort(arr,arr+NUM,cmpname);
    cout<<"name"<<endl;
    PrintInfo(arr);
    cout<<endl;
    sort(arr,arr+NUM,cmpheight);
    cout<<"height"<<endl;
    PrintInfo(arr);
    return 0;
}