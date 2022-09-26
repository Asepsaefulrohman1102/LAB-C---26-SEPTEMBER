#include "stack.hpp"

int main(){
    Stack s;
    info e;

    s.Stack_a();
    cout << "Apakah Stack s penuh? " << s.isFull() << endl;
    cout << "Apakah Stack s kosong? " << s.isEmpty() << endl;
    cout << "push 8" << endl;
    s.push(8);
    cout << "push 2" << endl;
    s.push(2);
    cout << "TOP Stack S : " << s.T[s.TOP] << endl;
    cout << "Info TOP Stack S : " << s.T[s.TOP] << endl;
    cout << "Apakah Stack s penuh? " << s.isFull() << endl;
    cout << "2 berhasil di POP" << endl;
    s.pop(&e);
    cout << "TOP Stack S : " << s.T[s.TOP] << endl;
    cout << "Info TOP Stack S : " << s.T[s.TOP] << endl;
    cout << "Apakah Stack s penuh? " << s.isFull() << endl;

    return 0;
}
