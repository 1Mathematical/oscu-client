#include <cstdio>
int main(int argc, char *argv[])
{
	if (argc != 1)
	{
		printf("Usage: oscu <ip-address>");
	}
	char* ip = *argv;
	printf(ip);
    return 0;
}