#include <bits/stdc++.h>

using namespace std ;




int main()
{
    char word[5001];
    int n;
    scanf("%s",word +1 );
    n = strlen(word + 1);

    for (int i = 1; i <= n; i++)
        word[i + n] = word[n - i + 1];

    for (int i = 1; i <= n * 2; i++)
        cout << word[i];

    return 0;
}
