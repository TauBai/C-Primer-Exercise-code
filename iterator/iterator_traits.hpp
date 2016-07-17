#include <cstddef>
template <class I>
struct iterator_traits<I>{
    typedef typename I::value_type      value_type;
    typedef typename I::difference_type difference_type;
    typedef typename I::pointer         pointer;
    typedef typename I::reference       reference;
    typedef typename I::iterator_category iterator_category;
}

//partial specialize non-class type

template <class I>
struct iterator_traits<I*>{
    typedef I value_type;
    typedef ptrdiff_t difference_type;
//here we can figure out why we have to seperate const type
    typedef I* pointer;              
    typedef I& reference;
    
    typedef random_access_iterator_tag iterator_category;
}
template <class I>
struct iterator_traits<const I*>{
    typedef I value_type;
    typedef ptrdiff_t difference_type;
//here we can figure out why we have to seperate const type
    typedef const I* pointer;
    typedef const I& reference;
    
    typedef random_access_iterator_tag iterator_category;
}


// function count()
template <class I , class T>
typename iterator_traits<I>::difference_type 
count(I first, I last, const T& value){
    typename iterator_traits<I>::difference_type n = 0;
    for(; first != last; ++first){
        if(*first == value)
            ++n;
    }
    return n;
}
