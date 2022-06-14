# include <iostream>
# include <fstream>
# include <string>
// ***WORKS ONLY UP TO TWELVE DUE TO LACK OF SUPPORT FOR LARGE INTEGERS**
using namespace std;

int factorial(int n);

int main()
{
    cout << "Enter number to find factoiral: ";
    int num;
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    system("pause");

}

int factorial(int n)
{
    int result = 1;
    if (n == 0){
        return 1;
    }
    else {
        for (int i = 1; i <= n; i++)
        {
            result = result * i;
        }
    }
    return result;
}
