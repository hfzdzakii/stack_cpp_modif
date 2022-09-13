#include <iostream>
#define maxsize 10
using namespace std;

struct Stack
{
    int top;
    int a[maxsize];
    Stack()
    {
        top = 0;
    };
    bool isfull()
    {
        if (top == maxsize)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    bool isempty()
    {
        if (top == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    void push(int x)
    {
        if (isfull())
        {
            cout << "Stack penuh" << endl;
        }
        else
        {
            a[top] = x;
            top++;
            cout << "Berhasil ditambahkan" << endl;
        }
    };
    void pop()
    {
        if (isempty())
        {
            cout << "Tidak ada apapun di list" << endl;
        }
        else
        {
            top--;
            cout << "Pops " << a[top] << endl;
        }
    };
    void display()
    {
        int i;
        if (top == 0)
        {
            cout << "Tidak ada apapun untuk ditampilkan" << endl;
        }
        else
        {
            cout << "Menapilkan" << endl;
            cout << "Stack : ";
            for (i = 0; i < top; i++)
            {
                cout << "[" << a[i] << "]";
                if (i < top - 1)
                {
                    cout << ", ";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    };
    void Top()
    {
        cout << "Puncak adalah " << a[top - 1] << endl;
    };
    void Size()
    {
        cout << "Ukuran Stack adalah " << top << endl;
    };
};

int main()
{
    Stack s;
    int ch, element, result;
    while (1)
    {
        cout << "*--------------------------------------------------------------------*" << endl;
        cout << "1.PUSH  2.POP  3.DISPLAY  4.ISFULL  5.ISEMPTY  6.TOP  7.SIZE  8.EXIT " << endl;
        cout << "*--------------------------------------------------------------------*" << endl;
        cin >> ch;
        if (ch == 1)
        {
            cout << "Masukkan elemen : ";
            cin >> element;
            s.push(element);
            system("pause");
        }
        else if (ch == 2)
        {
            s.pop();
            system("pause");
        }
        else if (ch == 3)
        {
            s.display();
            system("pause");
        }
        else if (ch == 4)
        {
            if (s.isfull())
            {
                cout << "STACK PENUH" << endl;
            }
            else
            {
                cout << "STACK TIDAK PENUH" << endl;
                cout << "KAMU BISA PUSH" << endl;
            }
            system("pause");
        }
        else if (ch == 5)
        {
            if (s.isempty())
            {
                cout << "STACK KOSONG" << endl;
            }
            else
            {
                cout << "STACK TIDAK KOSONG" << endl;
                cout << "YOU BISA POP" << endl;
            }
            system("pause");
        }
        else if (ch == 6)
        {
            s.Top();
            system("pause");
        }
        else if (ch == 7)
        {
            s.Size();
            system("pause");
        }
        else
        {
            return 0;
            system("cls");
        }
        system("cls");
    }
    return 0;
}
