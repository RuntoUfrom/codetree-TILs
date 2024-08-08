#include <iostream>
#include<algorithm>
using namespace std;
#define MAX 1000

class Student{
    public:
        int height;
        int weight;
        int idx;
        Student(int height,int weight, int idx){
            this->height = height;
            this->weight = weight;
            this->idx = idx;
        }
        Student(){}
};

bool cmp(const Student&a, const Student &b){
    if(a.height!=b.height)[
        return a.height>b.height;
    ]
    if(a.weight!= b.weight){
        return a.weight>b.weight;
    }
    return a.idx<b.idx;
}
int main() {
    int n;
    cin>>n;
    Student arr[MAX];
    int studentidx = 1;
    for(int i = 0; i<n; i++){
        int tmpheight,tmpweight;
        cin>>tmpheight>>tmpweight;
        arr[i] = Student(tmpheight,tmpweight,studentidx);
        studentidx++;
    }
    sort(arr,arr+n,cmp);
    for(int i = 0; i<n; i++){
        cout<<arr[i].height<<" "<<arr[i].weight<<" "<<arr[i].idx<<endl;
    }

    return 0;
}