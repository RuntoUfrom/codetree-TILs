#include <iostream>
#include  <algorithm>
using namespace std;
#define MAX 10

class Member{
    public :
        string name;
        int height;
        int weight;
        Member(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Member(){}
};

bool cmp(const Member &a, const Member &b){
    if(a.height<b.height){
        return true;
    }else if(a.height==b.height){
        if(a.weight>b.weight){
            return true;
        }
    }
    return false;
}
int main() {
    int n;
    cin>>n;
    Member arr[MAX];
    for(int i = 0; i<n ;i++){
        string tmpname;
        int tmpheight, tmpweight;
        cin>>tmpname>>tmpheight>>tmpweight;
        arr[i] = Member(tmpname, tmpheight, tmpweight);
    }
    sort(arr,arr+n,cmp);
    for(int i = 0; i<n ; i++){
        cout<<arr[i].name<<" "<<arr[i].height<<" "<<arr[i].weight<<endl;
    }
    return 0;
}