/* 
   对侯捷版auto_ptr仿写list iterator
   list iterator功能应该有:
       构造析构赋值取值, 重载*与->

*/

template <class T>
class listiter{
public:
    explicit listiter(T* p = 0) : pointee(p){}     // ctor
    template <class U>
    listiter(listiter<U>& rhs) : pointee(rhs.release()){}  // cp ctor
    ~listiter(){ delete pointee;}                  //destructor

    template <class U>
    listiter<T>& operator = (listiter<U>& rhs){      //cp assignment
        if(this != &rhs) reset(rhs.release());     //destroy rhs if they point to different
        return *this;
    }
//overloading
    T& operator*() const {return *pointee;}           //*
    T operator->() const {return pointee;}           //->
    T get() const {return pointee;}                  //.get()

    T operator++() const {
        pointee = pointee -> next();
        return pointee; 
    }
    T operator++(int){
        listiter temp = *this;
        ++*this;
        return temp;
    }

    bool operator==(const listiter& i) const{
        return pointee == i.pointee;
    }
    bool operator!=(const listiter& i)const{
        return pointee != i.pointee;
    }
private:
    T* pointee;    
}
