// BASIC CALCULATOR
// Write a program that works as a simple calculator.

// 1.It reads a character (ch)
// 2.If ch is among '+', '-', '*', '/' or '%' it furthur takes two numbers (N1 and N2 as input). It then performs appropriate appropriate operation between numbers and print the number. 3.If ch is 'X' or 'x', the program terminates.
// 4.If ch is any other character, the program should print 'Invalid operation. Try again.' and seek inputs again (starting from character).

// Write code to achieve above functionality.

// Input Format:
// Constraints:
// Numbers should be greater than 0 and lesser than 100000000. For division and modulus, 2nd number should not be 0.

// Output Format
// Sample Input
// * 
// 1 
// 2 
// / 
// 4 
// 2 
// + 
// 3 
// 2 
// ; 
// X
// Sample Output
// 2 
// 2 
// 5 
// Invalid operation. 
#include<iostream>
using namespace std;
int main() {
    char ch;
    cin>>ch;
    while(int(ch)!=120||int(ch)!=88){
        if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'){
            int n1,n2;
            cin>>n1>>n2;
            if(ch=='+'){
                cout << n1+n2<<endl;
            }
            else if(ch=='-'){
                cout << n1-n2<<endl;
            }
            else if(ch=='*'){
                cout << n1*n2 << endl;
            }
            else if(ch=='/'){
                cout << n1/n2<<endl;
            }
            else if(ch=='%'){
                cout << n1%n2 << endl;
            }
        }
        else if(ch=='X'||ch=='x'){
            break;
        }
        else{
            cout << "Invalid operation. Try again.\n";
        }
        cin>>ch;
    }
	return 0;
}