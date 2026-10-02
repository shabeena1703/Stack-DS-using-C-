#include<iostream>
#include "stack.h"

using namespace std;

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main()
{
    Stack stack;

    int choice;
    int data;
    int result;

    while(1)
    {
        cout<<"\n";

        cout<<CYAN;
        cout<<"=============================================\n";
        cout<<"           STACK USING LINKED LIST\n";
        cout<<"=============================================\n";
        cout<<RESET;

        cout<< YELLOW <<"1. Push Element\n"<< RESET;
        cout<< YELLOW <<"2. Pop Element\n"<< RESET;
        cout<< YELLOW <<"3. Peek Top Element\n"<< RESET;
        cout<< YELLOW <<"4. Display Stack\n"<< RESET;
        cout<< YELLOW <<"5. Search element\n"<< RESET;
        cout<< YELLOW <<"6. Find stack size\n"<< RESET;
        cout<< YELLOW <<"7. Check if stack is empty\n"<< RESET;
        cout<< YELLOW <<"8. Reverse the stack\n"<< RESET;
        cout<< YELLOW <<"9. Exit\n";

        cout<<CYAN;
        cout<<"=============================================\n";
        cout<<RESET;

        cout<<"Enter your choice\n";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"\nEnter the element to push: ";
                cin>>data;

                result = stack.push(data);
                if(result == SUCCESS)
                {
                    cout<<GREEN;
                    cout<<"\nSUCCESS\n "<< data <<" has been pushed onto the stack.\n"; 
                    cout<<RESET;
                }
                else
                {
                    cout<<RED;
                    cout<<"\nERROR\n " <<" Unable to push "<<data<<". Memory allocation failed.\n";
                    cout<<RESET;
                }
            break;

            case 2:
                result = stack.pop();
                if(result == FAILURE)
                {
                    cout<<RED;
                    cout<<"\nERROR\n "<<" Stack Underflow. "<<" There are no elements to pop\n";
                    cout<<RESET;
                }
                else
                {
                    cout << GREEN;
                    cout<<"\nSUCCESS\n "<< result <<" has been removed form the stack.\n";
                    cout<<RESET;
                }
            break;

            case 3:
                result = stack.peek();
                if(result == FAILURE)
                {
                    cout<<RED;
                    cout<<"\nERROR\n "<<" Stack is empty. "<<" No top element is available\n";
                    cout<<RESET;
                }
                else
                {
                    cout<<GREEN;
                    cout<<"\nPeek operation Successful\n";
                     cout<<RESET;
                    cout<<"Top element : "<< CYAN <<result<< RESET"\n";
                   
                }
            break;

            
            case 4:
                cout<<"\n";

                if(stack.isEmpty() == 1)
                {
                    cout<<RED;
                    cout<<"Stack is empty. Nothing to display.\n";
                    cout<<RESET;
                }
                else
                {
                    cout<<BLUE;
                    cout<<"Displaying the elements in the stack...\n";
                    cout<<RESET;

                    cout<<"Current Stack:\n";
                    stack.display();
                }

            break;


            case 5:
                cout<<"\nEnter the element to search\n";
                cin>>data;
                result = stack.search(data);
                if(result == FAILURE)
                {
                    cout<<RED;
                    cout<<"Search Result: "<<data<<" was not found in the stack\n";
                    cout<<RESET;
                }
                else
                {
                    cout<<GREEN;
                    cout<<"Search Result: "<<data<<" is present in the stack\n";
                    cout<<RESET;
                }
            break;

            case 6:
                result = stack.size();
                if(result == FAILURE)
                {
                    cout<<RED;
                    cout<<"\nStack is empty. Size = 0.\n";
                    cout<<RESET;
                }

                else
                {
                    cout<<CYAN;
                    cout<<"\nCurrent stack size : "<<result<<" element(s).\n";
                    cout<<RESET;
                }
            break;
            
            case 7:
                result = stack.isEmpty();
                if(result == 1)
                {
                    cout<<YELLOW;
                    cout << "\nStack Status : The stack is empty.\n";
                    cout<<RESET;
                }
                else
                {
                    cout<<GREEN;
                    cout << "\nStack Status : The stack contains elements.\n";
                    cout<<RESET;
                }
            break;

            case 8:
                result = stack.reverse();

                if(result == FAILURE)
                {
                    cout<<RED;
                    cout << "\nStack is empty. Nothing to reverse.\n";
                    cout<<RESET;
                }
                else
                {
                    cout<<GREEN;
                    cout << "\nStack reversed successfully.\n";
                    cout<<RESET;
                    cout << "Reversed Stack : ";
                    stack.display();
                }
            break;

            case 9: 
                cout << CYAN; 
                cout << "Program terminated successfully.\n"; 
                cout<<RESET;
                return 0; 
                
            
            default: 
                cout<<RED;
                cout << "\nInvalid choice. " << "Please select an option from 1 to 9.\n";
                cout<<RESET;

        }

    }

    return 0;
}