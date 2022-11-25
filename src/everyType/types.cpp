#include <iostream>;
#include <string>;
#include <vector>;
#include <array>;
#include <map>;
#include <set>;
#include <unordered_map>;
#include <unordered_set>;
#include <stack>;
#include <queue>;
#include <deque>;
#include <list>;

int main()
{
    // 1. Integer
    int a = 1;
    std::cout << "Integer: " << a << std::endl;

    // 1.1 Unsigned Integer
    unsigned int b = 1;
    std::cout << "Unsigned Integer: " << b << std::endl;

    // 1.2 Long Integer
    long int c = 1;
    std::cout << "Long Integer: " << c << std::endl;

    // 1.3 Unsigned Long Integer
    unsigned long int d = 1;
    std::cout << "Unsigned Long Integer: " << d << std::endl;

    // 1.4 Short Integer
    short int e = 1;
    std::cout << "Short Integer: " << e << std::endl;

    // 1.5 Unsigned Short Integer
    unsigned short int f = 1;
    std::cout << "Unsigned Short Integer: " << f << std::endl;

    // 1.6 Long Long Integer
    long long int z = 1;
    std::cout << "Long Long Integer: " << z << std::endl;

    // 2. Float
    float b = 1.1;
    std::cout << "Float: " << b << std::endl;

    // 3. Double
    double c = 1.11;
    std::cout << "Double: " << c << std::endl;

    // 4. Char
    char d = 'a';
    std::cout << "Char: " << d << std::endl;

    // 5. String
    std::string e = "Hello World";
    std::cout << "String: " << e << std::endl;

    // 6. Boolean
    bool f = true;
    std::cout << "Boolean: " << f << std::endl;

    // 7. Vector
    std::vector<int> g = {1, 2, 3};
    std::cout << "Vector: ";
    for (int i = 0; i < g.size(); i++)
    {
        std::cout << g[i] << " ";
    }
    std::cout << std::endl;

    // 8. Array
    std::array<int, 3> h = {1, 2, 3};
    std::cout << "Array: ";
    for (int i = 0; i < h.size(); i++)
    {
        std::cout << h[i] << " ";
    }
    std::cout << std::endl;

    // 9. Map
    std::map<int, int> i = {{1, 1}, {2, 2}, {3, 3}};
    std::cout << "Map: ";
    for (auto it = i.begin(); it != i.end(); it++)
    {
        std::cout << it->first << " " << it->second << " ";
    }
    std::cout << std::endl;

    // 10. Set
    std::set<int> j = {1, 2, 3};
    std::cout << "Set: ";
    for (auto it = j.begin(); it != j.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 11. Unordered Map
    std::unordered_map<int, int> k = {{1, 1}, {2, 2}, {3, 3}};
    std::cout << "Unordered Map: ";
    for (auto it = k.begin(); it != k.end(); it++)
    {
        std::cout << it->first << " " << it->second << " ";
    }
    std::cout << std::endl;

    // 12. Unordered Set
    std::unordered_set<int> l = {1, 2, 3};
    std::cout << "Unordered Set: ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 13. Stack
    std::stack<int> m;
    m.push(1);
    m.push(2);
    m.push(3);
    std::cout << "Stack: ";
    while (!m.empty())
    {
        std::cout << m.top() << " ";
        m.pop();
    } 
    std::cout << std::endl;

    // 14. Queue
    std::queue<int> n;
    n.push(1);
    n.push(2);
    n.push(3);
    std::cout << "Queue: ";
    while (!n.empty())
    {
        std::cout << n.front() << " ";
        n.pop();
    }
    std::cout << std::endl;

    // 15. Deque
    std::deque<int> o = {1, 2, 3};
    std::cout << "Deque: ";
    for (int i = 0; i < o.size(); i++)
    {
        std::cout << o[i] << " ";
    }
    std::cout << std::endl;

    // 16. List
    std::list<int> p = {1, 2, 3};
    std::cout << "List: ";
    for (auto it = p.begin(); it != p.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}