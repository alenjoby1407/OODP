#include<io stream>
using namespace std;
class Base
{
    private:
    int a;
    public:
    int b;
    protected:
    int c;
    public:
    void init()
    {
        a=10;
    }
    void display()
    {
        cout<<a;
    };
    int main()
    {
        Base obj;
        obj.init();
        obj.display();
        return 0;
    }
