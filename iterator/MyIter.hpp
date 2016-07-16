// do not support non-class type 
//                           --by jjhou

template <class T>
struct MyIter{
    typedef T value_type;
    T* ptr;
    MyIter(T* p = 0):ptr(p){}
    T& operator*()const{
        return *ptr;
    }
    T operator->()const{
        return ptr;
    }
}

template <class I>
typename  I::value_type func(I ite){
    return *ite;
}
