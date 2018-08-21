#include <iostream>

using namespace std;

template <class T>
class TStack{
    static const int SIZ = 10;
    T *stack;
    unsigned len;
public:
    TStack();
    ~TStack();
    bool push(T elem);
    bool pop(T  &elem);
    bool isEmpty();
};

template <class T>
TStack<T>::TStack(): stack(new T[SIZ]), len(0) {}

template <class T>
bool TStack<T>::push(T elem)
{
    if (len == SIZ) return 0;
    stack[len++] = elem;
    return 1;
}

template <class T>
bool TStack<T>::pop(T &elem)
{
    if (len == 0) return 0;
    elem = stack[--len];
    return 1;
}

template <class T>
TStack<T>::~TStack()
{
    delete []stack;
    stack = nullptr;
}

template <class T>
bool TStack<T>::isEmpty()
{
    return len == 0;
}

int main()
{
    TStack<char> stack;
    char c;
    while (cin >> c){
        if (!stack.push(c)){
            cout << "Stack Overflow\n";
            break;
        }
    }
    cout << "Symbols in reversal\n";
    while (stack.pop(c))
        cout << c;
    cout << endl;
    if (stack.isEmpty()) cout << "Stack is empty\n";

    return 0;
}
