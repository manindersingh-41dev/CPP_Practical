#include <iostream>

using namespace std;


// + -> 5+4, 4.1+5.44
// complex -> 5+3i + 2+2i


class comp
{
    private:
        int real, imag;

    public:
        comp(int r, int i)
        {
            real = r;
            imag = i;   
        }

        comp(){}

        friend comp operator + (const comp &obj1, const comp &obj2);
        friend void display(const comp &obj);

};

comp operator + (const comp &obj1, const comp &obj2)
{
    comp result;
    result.real = obj1.real + obj2.real;
    result.imag = obj1.imag + obj2.imag;
    return result;

}

void display(const comp &obj)
{
    cout<<obj.real<<" + "<<obj.imag<<"i"<<endl;
}

int main()
{
    comp c1(5,3);
    comp c2 = comp(2,2);
    comp c3 = c1+c2;

    display(c3);
    // cout<<c3.real;

    return 0;

}