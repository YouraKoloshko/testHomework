#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
	FILE* f1, *f2;
	char str[100] ;

	f1 = fopen("File1.txt", "r");
	f2 = fopen("File2.txt", "a");

	for (int i = 0; i < 4; i++)
	{
		fgets(str, 100, f1);
		for (int i = 0; i < strlen(str)+ 1; i++)
		{
			if (str[i] == ' ')
			{
				fprintf(f2, "%s", str);
				fprintf(f2, "%s", "------------\n");
				break;
			}
			if (str[i] == '\n')
			{
				fprintf(f2, "%s", str);
			}
		}
	}

	fclose(f1);
	fclose(f2);





	return 0;
}