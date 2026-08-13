#include <stdio.h>
#include <string.h>

// ---------- ENCRYPTION ----------
int Encryption()
{
    char input[100];
    char encoded[200];
    int i, j = 0, len;

    printf("\n--- ENCRYPTION AREA ---\n");
    printf("Enter a string: ");
    getchar();
    fgets(input, sizeof(input), stdin);
    len = strlen(input);
    
    if (input[len - 1] == '\n')
    {
        input[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++)
    {
        int ascii = (int)input[i];
        int a = (ascii / 2) + 32;
        int b = (ascii - ascii / 2) + 32;

        encoded[j++] = (char)a;
        encoded[j++] = (char)b;
    }
    encoded[j] = '\0';
    
    printf("\nEncrypted Output:\n%s\n", encoded);
    return 0;
}

// ----------- DECRYPTION -----------
int Decryption()
{
    char encoded[200];
    char decoded[100];
    int i, j = 0, len;

    printf("\n--- DECRYPTION AREA ---\n");
    printf("Enter encrypted string: ");
    getchar();
    fgets(encoded, sizeof(encoded), stdin);
    len = strlen(encoded);
    if (encoded[len - 1] == '\n')
    {
        encoded[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i += 2)
    {
        int a = (int)encoded[i] - 32;
        int b = (int)encoded[i + 1] - 32;

        decoded[j++] = (char)(a + b);
    }
    decoded[j] = '\0';

    printf("\nDecrypted Output:\n%s\n", decoded);
    return 0;
}

// ----------- MAIN MENU -----------
void main()
{
    int k = 0;

    printf("\t\t\t\tHello User!\n");
    printf("Welcome to File Encryption & Decryption Setup\n");
    printf("\tPress 1 : To access Encryption Area\n");
    printf("\tPress 2 : To access Decryption Area\n");
    printf("Your Choice : ");
    scanf("%d", &k);

    switch (k)
    {
        case 1:
            Encryption();
            break;

        case 2:
            Decryption();
            break;

        default:
            printf("Invalid Input Details\n");
    }
}