#include <iostream>

using namespace std;
int main (int ac, char **av)
{
	(void)ac;
	int i = 1;
	int j;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
			cout << (char)toupper(av[i][j++]);
		i++;
	}
	if (i == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << endl;
}