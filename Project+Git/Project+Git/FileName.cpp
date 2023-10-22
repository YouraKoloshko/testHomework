#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
	FILE* f1, *f2;
	char str[100] ;

	f1 = fopen("File1.txt", "r");
	f2 = fopen("File2.txt", "w");

	for (int i = 0; i < 4; i++)
	{
		fgets(str, 100, f1);
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == ' ')
			{

			}
		}
	}





	return 0;
}