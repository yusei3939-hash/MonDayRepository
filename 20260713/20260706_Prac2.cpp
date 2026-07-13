#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_Header.h"
using namespace std;

int main(void)
{
	int exp = 0;
	int level = 1;

	srand((unsigned int)time(NULL));

	while (level <= 5)
	{
		Game(exp, level);
	}

	return 0;
}