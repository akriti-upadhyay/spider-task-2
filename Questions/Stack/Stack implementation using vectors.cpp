//stack template class implementation using vectors

#include <vector>
#include <iostream>
using namespace std;

template<typename T>
class Stack{
        vector<T> v;              //stack
    public:
        void push(T ele){
            v.push_back(ele);
        }
        void pop(){
            if(!isEmpty())
                v.pop_back();
        }
        T top(){
            return v[v.size()-1];
        }
        bool isEmpty(){
            return v.size()==0;
        }
};

int main() {
	Stack<char> s;
    int size;
    cin>>size;
    for(int i=1; i<=size; i++){
        s.push('A'+i);
    }
    while(!s.isEmpty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
