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
        Hi(int x=0, int y = 4301)
        {   
            this->x = x;
            this->y = y;
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
    //int X,Y;
   // Hi hy;
    Hi hy(9);
   // Hi hy(3,88);
    

    cout<<hy.getX()<<endl;
    cout<<hy.getY()<<endl;
}