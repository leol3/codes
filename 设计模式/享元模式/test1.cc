#include<iostream>
#include <vector>
using namespace std;
class A{
public:
        A()
        {
                aa++;
                cout << aa <<endl;
        }
private:
        static int aa ;
};
typedef A*  (*FunPtr)(void);
A* funa()
{
        new A;
}
A* funb()
{
        new A;
}
int A::aa = 0;
int main()
{
        vector<FunPtr> p;
        p.push_back(funa);
        p.push_back(funb);
        vector<FunPtr>::iterator it = p.begin();
        for(int i = 0 ; i< 20 ; i++){
                for(;it != p.end() ; it++)
                {
                        (*it)();
                }
        }
}
