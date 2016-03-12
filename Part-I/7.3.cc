struct Person
{
    std::string name;
    std::string address;
    std::string name() const {return name;}
    std::string address() const {return address;} //Note that the name()
                                       // and address() do not have to
                                     // change the value of each returns
                       // "this" pointer can be defined to be a const

}
