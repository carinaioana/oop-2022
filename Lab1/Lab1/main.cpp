#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;
//2.
char linie[255];
int parcurgereSir(char s[255])
{
    int numar = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            numar = numar * 10 + (s[i] - '0')
            return numar;
    }
}
int main()
{
    int s = 0;
    FILE* fisier= fopen("lab1.txt","r")
        if (!fisier)
        {
            cout << "Nu am putut deschide";
            return -1;
    }
    while (fgets(linie, 255, fisier))
    {
        int valoare = parcurgereSir(linie);
        s = s + valore;
    }
    cout << s << ' ';
    fclose(fisier);
    return 0;
}

//4.
bool isPrime(int n)

{

    for (int tr = 2; tr < n / 2; tr++)

        if (n % tr == 0)

            return false;

    return true;

}

int main()

{

    int n;

   cout << "Enter a number:";

   cin >> n;

    if (isPrime(n))

       cout << n << " is prime !";

    else

      cout << n << " is NOT prime !";

    return 0;

}