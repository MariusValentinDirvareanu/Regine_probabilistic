#include <iostream>

int main() {
	int n = 8, ok = 1, k, contor = 0, ok1 = 1;
	int x[100] = { 0 }, C[100] = { 1 }, NV_SE[100] = { 1 }, NE_SV[100] = { 1 }, d[100] = { 0 };
	do {
		x[1] = rand() % n + 1;
		ok = 1;
		C[x[1]] = 0;
		NV_SE[n + x[1] - 1] = 0;
		NE_SV[x[1]] = 0;
		k = 2;
		do
		{
			x[k] = rand() % n + 1;
			for (int j = 0; j < n; ++j) {
				if (C[j] == 0) {

				}
				else {
					if (NV_SE[n - k + j] == 0) {

					}
					else {
						if (NE_SV[k + j - 1] == 0) {

						}
						else
						{
							d[j] = 1;
						}
					}
				}
			}
			for (int j = 0; j < n; ++j) {
				if (d[j] == 0) {
					contor++;
				}
			}
			if (contor == n) {
				ok = 0;
				break;
			}
			else
			{
				do {
					ok1 = 0;
					int aux = rand() % n + 1;
					if (d[aux] == 1) {
						x[k] = aux;
						k++;
					}
					else
					{
						ok1 = 1;
					}

				} while (ok1 == 1);
			}
		} while (k<=n);
		for (int i = 0; i < n; ++i) {
			std::cout << x[i] << ' ';
		}
		std::cout << '\n';
	} while (ok == 0);
	return 0;
}