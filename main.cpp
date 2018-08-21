#include <iostream>

using namespace std;

class TStack{
    static const int SIZ = 10;
    char *stack;
    unsigned len;
public:
    TStack();
    ~TStack();
    bool push(char elem);
    bool pop(char  &elem);
};

TStack::TStack(): stack(new char[SIZ]), len(0) {}

bool TStack::push(char elem)
{
    if (len == SIZ) return 0;
    stack[len++] = elem;
    return 1;
}

bool TStack::pop(char &elem)
{
    if (len == 0) return 0;
    elem = stack[--len];
    return 1;
}

TStack::~TStack()
{
    delete []stack;
    stack = nullptr;
}

int main()
{
    TStack stack;
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

    return 0;
}
