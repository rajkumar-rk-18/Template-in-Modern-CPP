#include <iostream>

using namespace std;

template <class T1,class T2>
class Pair
{
private:
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b)
    {
        first=a;
        second=b;
    }
    void swapValue()
    {
        cout<<"Before Swap : first ="<<first<<" second ="<<second<<endl;
        auto temp=static_cast<T1>(first);
        T2 first=static_cast<T2>(second);
        T1 second=temp;
        cout<<"Swapped values: first ="<<first<<" second ="<<second<<endl;
    }
};
int main()
{
    Pair<int,string> obj(6,"raj");
    obj.swapValue();
    return 0;
}
