int main()
{

double dval ;
double *pd = &dval;                          //正确
double *pd2 = pd;                              //正确

int *pi = pd;                                       //错误, pi的类型  和 pd 的类型不匹配
pi = &dval;                                       //错误, 把 double 型对象的地址赋值给int型指针

}
