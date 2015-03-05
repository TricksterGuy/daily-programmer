#include <string>
#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        printf("Usage: bender binaryString\n");
        printf("Now bite my shiny metal ass\n");
        abort();
    }

    const char* input = argv[1];

    while (*input)
    {
        char sum = 0;
        for (int i = 0; i < 8; i++)
        {
            sum <<= 1;
            sum += input[i] - '0';
        }
        printf("%c", sum);
        input += 8;
    }
}
