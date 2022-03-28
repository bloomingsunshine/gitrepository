#include <iostream>
using namespace std;
class animals {
    public:
        virtual void cry() {};
};
class dog :public animals
{
    public:
        void cry() 
    {
            cout<<"汪汪汪"<<endl;
    }
};
class cat :public animals
{
public:
    void cry()
    {
        cout <<"喵喵喵"<< endl;
    }
};
void fun(animals* ptr)
{
    ptr->cry();
}
void main()
{
    cat Cat;
    dog Dog;
    fun(&Cat);
    fun(&Dog);
}

