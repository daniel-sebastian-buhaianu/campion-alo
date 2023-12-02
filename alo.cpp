#include <fstream>
using namespace std;
int main()
{
	ifstream f("alo.in");
	int E, N;
	f >> E >> N;
	while (N > 0)
	{
		int nr, d;
		f >> nr >> d;
		if (nr/10000 == 1 && nr%10 != 9)
			E -= 2*d;
		else
			if (nr/10000 == 2 && nr%10 != 9)
				E += d;
		N--;
	}
	f.close();
	ofstream g("alo.out");
	g << E;
	g.close();
	return 0;
}

