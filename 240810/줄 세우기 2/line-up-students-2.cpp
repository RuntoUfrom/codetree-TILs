#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000
class Student{
    public:
        int height;
        int weight;
        int index;
        Student(int height, int weight, int index){
            this->height = height;
            this->weight = weight;
            this-> index = index;
        }
        Student(){}
};

bool cmp(const Student &a, const Student &b){
    if(a.height!=b.height){
        return a.height<b.height;
    }else{
        if(a.weight>b.weight){
            return true;
        }else{
            return false;
        }
    }
}

int main() {
    int n;
    cin>>n;
    Student arr[MAX];
    int studentIndex = 1;
    for(int i = 0;i<n; i++){
        int tmpheight,tmpweight;
        cin>>tmpheight>>tmpweight;
        arr[i] = Student(tmpheight,tmpweight,studentIndex);
        studentIndex++;
    }
    sort(arr,arr+n,cmp);
    //키, 몸무게, 그리고 번호
    for(int i = 0; i<n; i++){
        cout<<arr[i].height<<" "<<arr[i].weight<<" "<<arr[i].index<<endl;
    }
    return 0;
}