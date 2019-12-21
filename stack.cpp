#include <iostream>
#include <vector>

struct Stack{
    int top = -1;
    std::vector<int> data;

    Stack push(int inputData)
    {
        top++;
        data[top] = inputData;
        std::cout << "push Successful" << std::endl;
    }

    int pop()
    {
        int temp = data[top];
        top--;
        return temp;
    }

    int Top()
    {
        return data[top];
    }

    void display()
    {
        for(int i = top; i>0; i++)
        {
            std::cout << data[i] << std::endl;
        }
    }


};




int main()
{
    Stack myStack;
    int op;
    while(true)
    {
        std::cout << "1. push"<<std::endl;
        std::cout << "2. pop" << std::endl;
        std::cout << "3. top" << std::endl;
        std::cout << "4. Display" << std::endl;
        std::cout << "5. Exit" << std::endl;
        while(!(std::cin >> op) || op > 5 || op<1)
        {
            std::cout<< "invalid input, try again: ";
        }

        switch(op)
        {
        case 1:
            int data;
            std::cout << "Enter integer to push: ";
            if(!(std::cin >> data)){
                std::cout << "invalid input" << std::endl;
            }
            myStack.push(data);
            break;

        case 2:
            std::cout << myStack.pop();
            break;
        case 3:
            std::cout << myStack.Top();
            break;
        case 4:
            myStack.display();
            break;
        case 5:
            return 0;
        }

    }
}
