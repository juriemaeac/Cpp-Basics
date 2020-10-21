#include<stdlib.h>
#include<math.h>
#include <iostream>
using namespace std;
int main()
{
    float** value, * temp, app, sum, mult;
    int i, j, k, n, p;

    cout << "Enter number of equations : ";
    cin >> n;

    if (1 <= n and n <= 5) {

        value = (float**)malloc(n * sizeof(float*));
        for (i = 0; i < n; i++)
            value[i] = (float*)malloc(n * sizeof(float));
        temp = (float*)malloc(n * sizeof(float));

        cout << "Enter the elements in rowwise\n";
        for (i = 0; i < n; i++)
            for (j = 0; j <= n; j++)
                cin >> value[i][j];
        if (-109 <= **value and **value <= 109) {

            for (i = 0; i < (n); i++) {
                app = value[i][i];

                p = i;

                for (k = i + 1; k < n; k++)
                    if (fabs(app) < fabs(value[k][i])) {
                        app = value[k][i];
                        p = k;
                    }

                for (j = 0; j <= n; j++)
                {
                    temp[j] = value[p][j];
                    value[p][j] = value[i][j];
                    value[i][j] = temp[j];
                }

                for (j = i + 1; j < n; j++) {
                    mult = value[j][i] / value[i][i];
                    for (k = 0; k <= n; k++)
                        value[j][k] -= mult * value[i][k];
                }
            }

            for (i = n - 1; i >= 0; i--)
            {
                sum = 0;
                for (j = i + 1; j < n; j++)
                    sum += value[i][j] * temp[j];
                temp[i] = (value[i][n] - sum) / value[i][i];
            }

            cout << "\n";
            for (i = 0; i < n; i++)
                cout << temp[i] << "\n";
        }
        else {
            cout << "Invalid Value";
            return 0;
        }
    }
    else {
        cout << "Invalid Matrix";
        return 0;
    }

}
