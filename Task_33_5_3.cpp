#include <iostream>
#include <vector>
#include <utility>

template <typename T1, typename T2>

class Registry
{
public:
    template <typename T1, typename T2>
    struct foo
    {
        T1 t1;
        T2 t2;
        foo(T1 a, T2 b) : t1(a), t2(b) {};
    };

    void add(T1 m_key, T2 m_value)
    {
        foo <T1, T2> newFoo (m_key, m_value);
        boo.push_back(newFoo);
    }
    void print()
    {
        for (int i = 0; i < boo.size(); i++)
        {
            std::cout << boo[i].t1 << " " << boo[i].t2 << std::endl;
        }
    }
    void find(const T2& m_value)
    {
        for (int i = 0; i < boo.size(); i++)
        {
            if (boo[i].t2 == m_value)
                std::cout << boo[i].t1 << " " << boo[i].t2 << std::endl;
        }
    }
    void remove(const T2& m_value)
    {
        for (int i = 0; i < boo.size(); i++)
        {
            if (boo[i].t2 == m_value)
                boo.erase(boo.begin() + i);
        }
    }   

private:
    std::vector < foo<T1, T2> > boo;

};


int main()
{
    std::cout << "Hello World!\n";
}

