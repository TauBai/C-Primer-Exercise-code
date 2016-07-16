// now support non-class pointer like int*,const int*    by jjhou

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
struct iterator_traits<I>{
    typedef I::value_type value_type;
}
template <class T>
struct iterator_traits<T*>{
    typedef T value_type;
}
template <class T>
struct iterator_traits<const T*>{
    typedef T value_type;
}



template <class I>
typename  iterator_traits<I>::value_type func(I ite){
    return *ite;
}
