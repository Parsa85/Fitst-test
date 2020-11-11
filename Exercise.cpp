#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int exercise=0;
    int chest=0, biceps=0, back=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> exercise;

        if (i%3==1) {
            chest += exercise;
        }
        else if (i % 3 == 2) {
            biceps += exercise;
        }
        else if (i % 3 == 0) {
            back += exercise;
        }
    }

    if (chest > biceps && chest > back)
        cout << "chest";
    else if (biceps > chest && biceps > back)
        cout << "biceps";
    else if (back > chest && back > biceps)
        cout << "back";

    return 0;

}