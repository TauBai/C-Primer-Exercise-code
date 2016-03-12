class Person
{
friend std::istream &read(std::istream&, Person&);
friend std::ostream &print(std::istream& , const Person&);

public:    
    Person() = default ;
    Person(const std::string &s1,const std::string &s2) : 
                name(s1), address(s2){}
    Person(std::istream&);
    std::string name()const{return name;}
    std::string address()const{return address;}

private:
    std::string name;
    std::string address;


};
std::istream &read(std::istream&, Person&);
std::ostream &print(std::istream& , const Person&);


std::istream &read(std::istream& is, Person& one)
{
    is >> one.name >> one.address;
    return is;
}

std::ostream &print(std::ostream& os, Person& one)
{
    os << one.name() << " " << one.address();
    return os;
}

Person(std::istream & is) 
{
    read(is , *this);     //use this to access the object as a whole
}
