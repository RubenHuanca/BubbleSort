#include <iostream>
#include <vector>
using namespace std;

void loadV(vector<int> *v, int n){  // v: Pass by Pointer
    for(int i=0; i<n; i++){        
        int tmp = rand() % n;  // in the range 0 to n-1
        v->push_back(tmp);
    }
}

void printV(vector<int> v){ // v: Passing by Value
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); ++it){
        cout<<*it<<", ";
    }
    cout<<endl;
}

void bubbleSort(vector<int> &v, int n){ // v: Pass by Reference
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(v[j] > v[j+1]){
                int temp = v[j+1];
                v[j+1] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main(){
    int n=10;
    vector<int> v;
           
    loadV(&v,n);
    printV(v);
    bubbleSort(v,n);    
    printV(v);

    return 0;
}