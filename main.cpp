/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/7/2021
*Purpose: Project 1
*/
#include <iostream>
using namespace std;
string WelcomeMessage() {
    return "----------------------------------------------------------------------\n               WELCOME TO THE 
ANTHONY'S CALCULATOR PROJECT                    \
n----------------------------------------------------------------------\n";
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/7/2021
*Purpose: Project 1
*/
char Menu(char &userLetter) {
   
    cout << "A.) Addition" << endl
        << "B.) Subtraction" << endl
        << "C.) Multiplication" << endl
        << "D.) Division" << endl
        << "E.) Roots(only positive number)" << endl
        << "F.) Power(only positive number)" << endl
        << "G.) Percentage" << endl
        << "H.) Least Common Multiplier" << endl
        << "I.) Greatest Common Divisor" << endl
        << "J.) Modulus" << endl
        << "K.) Display function execution*" << endl
        << "L.) Quit" << endl
        << "----------------------------------------------------------------------" << endl
        << "Please select an operation: ";
    cin >> userLetter;
    return userLetter;
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/7/2021
*Purpose: Project 1
*/
void execution(string &a, string& b, string& c, string& d, string& e, string& f, string& g, string& h, 
string& i, string& j) {
   cout 
        << "----------------------------------------------------------------------" << endl
        << "                    DISPLAYING FUNCTION EXECUTION                     " << endl
        << "----------------------------------------------------------------------" << endl
        << "Addition" << a << endl
        << "Subtraction" << b << endl
        << "Multiplication" << c << endl
        << "Division" << d << endl
        << "Roots(only positive number)" << e << endl
        << "Power(only positive number)" << f << endl
        << "Percentage" << g << endl
        << "Least Common Multiplier" << h << endl
        << "Greatest Common Divisor" << i << endl
        << "Modulus" << j << endl
        << "----------------------------------------------------------------------" << endl
        << "Please select an operation: ";
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
float ComputeSum(float num1, float num2) {
    //Addition function
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Please provide the first number: ";
        cin >> num1;
    } while (cin.fail());
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Please provide the second number: " ;
        cin >> num2;
    } while (cin.fail());
        cout << "Operation: " << num1 << "+" << num2 << "= " << num1+num2 << endl;
    return num1 + num2;
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
float ComputeSub(float num1, float num2) {
    //Subtraction function
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
    cout << "Please provide the first number: " ;
        cin >> num1;
    } while (cin.fail());
        do {
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
            }
       
        cout << "Please provide the second number: " ;
        cin >> num2;
        } while (cin.fail());
        cout << "Operation: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    return num1 - num2;
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
float ComputeMul(float num1, float num2) {
    //Mutiplication function
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
    cout << "Please provide the first number: " ;
        cin >> num1;
    } while (cin.fail());
        do {
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
            }
        cout << "Please provide the second number: " ;
        cin >> num2;
        } while (cin.fail());
        cout << "Operation: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    return num1 * num2;
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
float ComputeDiv(float num1, float num2) {
    //Division function
   do{
    if (cin.fail()) {
        cin.clear();
        cin.ignore();
    }
    cout << "enter numerator: " ;
    cin >> num1;
    } while (cin.fail());
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Enter a non-zero denominator: " ;
        cin >> num2;
    } while (num2 == 0 || cin.fail());
    cout << "Operation: " << num1 << " / " << num2 << " = " << num1/num2 << endl;
    return num1 / num2;
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
float ComputePower(float base, int power, bool) {
    //Power function
    float numProduct = 1.0;
    int i;
    for (i = 0; i < power; i++)
        numProduct *= base;
    return numProduct;
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
float ComputePower(float base, int power) {
            do {
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                }
                cout << "Please provide the base number: ";
                cin >> base;
            } while (base < 0 || cin.fail());
        do{
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
            }
               cout << "Please provide the power number: ";
               cin >> power;
              
            } while (power < 0 || cin.fail());
    float numProduct = 1.0;
    int i;
    for (i = 0; i < power; i++)
        numProduct *= base;
    cout << "Operation: " << base << "^" << power << "= " << numProduct << endl;
    return numProduct;
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
float ComputeRoot(float base, int index) {
    //Root function
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Please provide the base number: ";
        cin >> base;
    } while (base < 0 || cin.fail());
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Please provide the root number: ";
        cin >> index;
    } while (index < 0 || cin.fail());
        float tp, mid, low = 0.0, high = base;
        do {
            mid = (low + high) / 2;
            if (ComputePower(mid, index, 1) > base)
                high = mid;
            else
                low = mid;
            mid = (low + high) / 2;
            tp = (ComputePower(mid, index, 1) - base);
            if (tp < 0)
            {//grab absolute value
                tp = -tp;
            }
        } while (tp > .00005); //accuracy of our root
        cout << "Operation: " << index << " root " << base << " = " << mid << endl;
        return mid;
    }
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
float ComputePerc(float num1, float perc) {
    //Percent function
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
 
    cout << "Please provide the first number: " << endl;
        cin >> num1;
    } while (cin.fail());
        do {
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
            }
        cout << "Please provide the second number: " << endl;
        cin >> perc;
        } while (cin.fail());
        cout << "Operation: " << num1 << " percent of " << perc << "= " << num1 * (perc / 100) << 
"%" << endl;
    return num1 * (perc / 100);
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
int   ComputeGCD(int num1, int num2, bool) {
    //Function overloading
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    return num1;
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
int   ComputeGCD(int num1, int num2) {
    //Greatest common divisor
    int origNum, secondOrigNum;
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Please provide the first number: " ;
        cin >> num1;
    } while (num1 < 0 || cin.fail());
        origNum = num1;
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Please provide the second number: " ;
        cin >> num2;
        secondOrigNum = num2;
    } while (num2 < 0 || cin.fail());
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    cout << "Operation: GCD of " << origNum << " & " << secondOrigNum << " = " << num1 << 
endl;
    return num1;
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
int ComputeLCM(int num1, int num2) {
    //Lowest common multiple
  
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Please provide the first number: " ;
        cin >> num1;
    } while (num1 < 0 || cin.fail());
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Please provide the second number: " ;
        cin >> num2;
    } while (num2 < 0 || cin.fail());
    cout << "Operation: LCM of " << num1 << " & " << num2 << " = " << ((num1 * num2) / 
ComputeGCD(num1, num2, 1)) << endl;
    return ((num1 * num2) / ComputeGCD(num1, num2, 1));
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/9/2021
*Purpose: Project 1
*/
int   ComputeMod(int num1, int num2) {
    //Modulus function
 do {
     if (cin.fail()) {
         cin.clear();
         cin.ignore();
     }
        cout << "Please provide the first number: " ;
        cin >> num1;
    } while (num1 <= 0 || cin.fail());
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Please provide the second number: " ;
        cin >> num2;
    } while (num2 <= 0 || cin.fail());
    int placeholder = num1;
    while (num1 > num2) {
        num1 -= num2;
    }
    
    cout << "Operation: " << placeholder << " % " << num2 << "= " << num1 << endl;
    return num1;
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/7/2021
*Purpose: Project 1
*/
string ExitMessage() {
    return "Thanks for using my calculator \n";
}
/*
*Author:  Anthony Tenn
*Creation Date: 10/30/2021
*Modification Date:11/7/2021
*Purpose: Project 1
*/
int main() {
    float y = 1.0;
    int z = 1;
    char userLetter = 'M';
    string a = "Function Skipped", b = "Function Skipped", c = "Function Skipped", d = "Function 
Skipped", e = "Function Skipped",
        f = "Function Skipped", g = "Function Skipped", h = "Function Skipped", i = "Function 
Skipped", j = "Function Skipped";
    cout << WelcomeMessage() << endl;
    
    do {
    Menu(userLetter);
        switch (userLetter) {
        case 'A':
        case 'a': ComputeSum(y, y);
            a = " Executed";
            break;
        case 'B':
        case 'b': ComputeSub(y, y);
            b = " Executed";
            break;
        case 'C':
        case 'c': ComputeMul(y, y);
            c = " Executed";
            break;
        case 'D':
        case 'd': ComputeDiv(y, y);
            d = " Executed";
            break;
        case 'E':
        case 'e': ComputeRoot(y, z);
            e = " Executed";
            break;
        case 'F':
        case 'f': ComputePower(y, z);
            f = " Executed";
            break;
        case 'G':
        case 'g': ComputePerc(y, y);
            g = " Executed";
            break;
        case 'H':
        case 'h': ComputeLCM(z, z);
            h = " Executed";
            break;
        case 'I':
        case 'i': ComputeGCD(z, z);
            i = " Executed";
            break;
        case 'J':
        case 'j': ComputeMod(z, z);
            j = " Executed";
            break;
        case 'K':
        case 'k':
            execution(a, b, c, d, e, f, g, h, i, j);
            break;
        default: 
            break;
        }
    
    }while (userLetter != ('L'));
     cout<<ExitMessage();
    return 0;
}
