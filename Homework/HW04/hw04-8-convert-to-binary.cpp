/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2

    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/

// #include <stdio.h>

// int main()
// {
//     char ip;
//     int op;

//     printf("User Input :\n");
//     scanf("%c", &ip);

//     if (!ip)
//     {
//         op = ip;
//         printf("Output: %d", op);
//     }

//     else
//     {
//         if (ip == 'A' || ip == 'a')
//         {
//             op = 10;
//             printf("Output: %d", op);
//         }
//         else if (ip == 'B' || ip == 'b')
//         {
//             op = 11;
//             printf("Output: %d", op);
//         }
//         else if (ip == 'C' || ip == 'c')
//         {
//             op = 12;
//             printf("Output: %d", op);
//         }
//         else if (ip == 'D' || ip == 'd')
//         {
//             op = 13;
//             printf("Output: %d", op);
//         }
//         else if (ip == 'E' || ip == 'e')
//         {
//             op = 14;
//             printf("Output: %d", op);
//         }
//         else if (ip == 'F' || ip == 'f')
//         {
//             op = 15;
//             printf("Output: %d", op);
//         }
//     }

//     printf("\niuput: %c", ip);

//     return 0;
// }



#include <stdio.h>
#include <string.h>

// Function to convert a single hexadecimal digit to binary
char* hexToBinary(char hexDigit) {
    switch (hexDigit) {
        case '0': return "0000";
        case '1': return "0001";
        case '2': return "0010";
        case '3': return "0011";
        case '4': return "0100";
        case '5': return "0101";
        case '6': return "0110";
        case '7': return "0111";
        case '8': return "1000";
        case '9': return "1001";
        case 'A': case 'a': return "1010";
        case 'B': case 'b': return "1011";
        case 'C': case 'c': return "1100";
        case 'D': case 'd': return "1101";
        case 'E': case 'e': return "1110";
        case 'F': case 'f': return "1111";
        default: return NULL; // Invalid hexadecimal digit
    }
}

int main() {
    char hexadecimal[17]; // Maximum 16 hex digits + '\0' terminator
    printf("Enter a hexadecimal number: ");
    scanf("%16s", hexadecimal);

    int hexLength = strlen(hexadecimal);
    printf("User input :\n");

    // Convert each hex digit to binary and print
    for (int i = 0; i < hexLength; i++) {
        char* binary = hexToBinary(hexadecimal[i]);
        if (binary) {
            printf("%s", binary);
        } else {
            printf("\nOutput:%c\n", hexadecimal[i]);
            return 1; // Exit with an error code
        }
    }
    
    printf("\n");

    return 0; // Exit with success code
}
