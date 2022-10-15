void fizzBuzz(int n)
{
    int i = n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3 == 0 && i % 5 != 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0 && i % 3 != 0)
        {
            cout << "Buzz" << endl;
        }
        else if (i % 3 != 0 && i % 5 != 0)
        {
            cout << i << endl;
        }
    }
}