#include <iostream>

using namespace std;

int cubic(int n)

{

    if (n == 0)

        return 1;

    else

        cout << "[" << n * n * n << "] ";

    return cubic(n - 1);
}

float sum(int n)

{

    float sum = 0;

    for (int x = 1; x <= n; x++)

        sum += x * x * x;

    cout << "\n\nTotal Value : " << sum;
}

float average(int n)
{
    float sum = 0;

    for (int x = 1; x <= n; x++)

        sum += x * x * x;
    cout << "\nAverage Value : " << sum / n;
}

int main()

{

    int num;

    cout << "Input Number : ";

    cin >> num;

    cout << "\n";

    cubic(num);
    sum(num);
    average(num);
}