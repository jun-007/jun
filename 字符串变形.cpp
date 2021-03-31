#include<stdio.h>
void stringchange(const char* input,char* output)
{
	int i = 0;
	while (input[i] != '\0')
	{
		if (input[i] == 'z')
		{
			output[i] = 'a';
			i++;
		}
		else if (input[i] == 'Z')
		{
			output[i] = 'A';
			i++;
		}
		else
		{
			output[i] = *(input + i) + 1;
			i++;

		}
			
	}
	output[i] = '\0';
}
int main()
{
	char input[256] = { 0 };
	char output[256] = { 0 };
	scanf("%s", input);
	stringchange(input, output);
	printf("%s\n", output);
	
	return 0;
}
