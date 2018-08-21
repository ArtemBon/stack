#include <iostream>

using namespace std;

class TStack{
    static const int S_SIZE = 100;
    char *stack;
    unsigned len;
public:
    TStack();
    ~TStack();
    bool push(char elem);
    bool pop(char  &elem);
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
