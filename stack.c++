#include<iostream>
using namespace std;
template <class T>
class stack{
    
    
    
    public:
    T *s;
    int top,len,size;
    stack(int);
   
    void Push(T);
    void Pop(T&);
    bool Find(int,T&);
    int Search(T);
    int length();
    bool IsEmpty();
    bool IsFull();
    void Display();
};
template<class T>
stack<T>::stack(int sz){
    size=sz;
    top=-1;
    len=0;
    s=new T[sz];
}
template<class T>
void stack<T>::Push(T element){
    if(top==size-1){
        cout<<"Invalid position";
        return;
    }
    top++;
    s[top]=element;
    len++;
}
template<class T>
void stack<T>::Pop(T& element){
    if(top==-1){
        cout<<"Stack underflows";
        return;
    }
    element=s[top];
    top--;
    len--;
}
template<class T>
bool stack<T>::Find(int pos,T& element){
    if(pos<1||pos>len){
        cout<<"invalid position";
        return false;
    }
    element=s[pos=1];
    return true;
}
template<class T>
int stack<T>::Search(T element){
    for(int i=0;i<=top;i++){
        if(element==s[i]){
            return i+1;
        }
    }
    return -1;
}
template<class T>
void stack<T>::Display(){
    for(int i=0;i<=top;i++){
        cout<<s[i]<<" ";
    }
}
template<class T>
bool stack<T>::IsEmpty(){
    if(top==-1){
        return true;
    }
    return false;
}
template<class T>
bool stack<T>::IsFull(){
    if(top==size-1){
        return true;
    }
    return false;
}
int main(){
    stack<int>st(6);
    int x;
    
    
    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(40);
    st.Push(50);
    st.Push(60);
    st.Display();
    cout<<"\nThe position at which you have to pop"<<endl;
    
    st.Pop(x);
    cout<<"The element popped is "<<x<<endl;
    st.Pop(x);
    cout<<"The element popped is "<<x<<endl;*
    st.Display();
    
    if(st.Find(2,x)){
        cout<<"\nelement found "<<x;
    }
    if(st.Search(10)){
        cout<<"\nelement found";
    }
    
    if(st.IsEmpty()){
        cout<<"\nStack is empty";
    }
    if(st.IsFull()){
        cout<<"\nStack is full";
    }
    return 0;
}