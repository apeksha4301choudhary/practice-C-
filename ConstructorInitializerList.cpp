#include <iostream>
using namespace std;

namespace Cons
{
    class Hi
    {
        int x;
        int y;

    public:
        //==========================================================
        Hi() : x(10),y(x)
        {
            cout << "HI CONS" << endl;
        }

        //==========================================================
        void setX(int x)
        {
            x = x;
        }

        int getX()
        {
            return x;
        }

        void setY(int y)
        {
            y = y;
        }

        int getY()
        {
            return y;
        }

        //==========================================================
        ~Hi()
        {
            cout << "BYE CONS";
        }
    };
}

int main()
{
    // Cons::Hi hy;
    using namespace Cons;
    Hi hy;

    cout<<hy.getX()<<endl;
    cout<<hy.getY()<<endl;
}