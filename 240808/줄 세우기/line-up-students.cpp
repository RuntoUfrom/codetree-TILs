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
    //키가 더 큰 학생이 앞에 와야 합니다.
    if(a.height>b.height){
        return true;
    }
    else if(a.height ==b.height){
        if(a.weight>b.weight){
            return true;
        }
        else if(a.weight==b.weight){
            if(a.idx<b.idx){
                return true;
            }
        }
    }
    //키가 동일하다면, 몸무게가 더 큰 학생이 앞에 와야 합니다.
    return false;
    //키와 몸무게가 동일하다면, 번호가 작은 학생이 앞에 와야 합니다.
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