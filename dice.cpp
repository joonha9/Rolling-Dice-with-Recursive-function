#include <iostream>
using namespace std;

char path[10];

void run(int lev, int sum)
{
    //if (lev > 2 && path[lev - 2] == path[lev - 1]) return;
    if (lev == 3) {
        cout << path << endl;
        return;
    }

    for (int i = 1; i <= 6; i++) {
        if (lev > 1 && path[lev - 1] == '0' + i) continue;
        path[lev] = '0' + i;
        run(lev + 1, sum + i);
        path[lev] = 0;
    }
}

int main()
{
    run(0, 0);

    return 0;
}