#include <iostream>
#include "StackByLinkedList.cpp"

using namespace std;

bool testPair(char[]);

int main()
{
    char str[100];

    while (true)
    {
        cout << "검사할 수식을 입력하세요." << endl;
        cout << "'0'을 입력하면 프로그램이 종료됩니다." << endl;
        cin >> str;

        if (str[0] == '0')
            return 0;

        bool result = testPair(str);
        cout << result << endl;
    }

    return 0;
}

bool testPair(char str[])
{
    
    StackByLinkedList stack;

    int i = 0;
    char open_pair;
    while (true)
    {
       
        char currChar = str[i];
       
        switch (currChar)
        {

        case '(':
           
            stack.Push(currChar);
            break;

        case '[':
            
            stack.Push(currChar);
            break;

        case '{':
           
            stack.Push(currChar);
            break;

        case ')':
            open_pair = stack.Pop();
           
            if (open_pair != '(')
            {
                return false;
            }
            break;

        case '}':
            open_pair = stack.Pop();
         
            if (open_pair != '{')
                return false;

            break;
        case ']':
            
            open_pair = stack.Pop();
            if (open_pair != '[')
                return false;
            break;
        case NULL:
            if (stack.IsEmpty())
            {
    
                return true;
            }
            break;
        }
        i++;
        
    }
}
