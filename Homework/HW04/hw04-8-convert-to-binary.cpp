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

#include <stdio.h>
// #include <string.h>

int main()
{
    char ip[20];
    // int op;

    printf("User Input :\n");
    scanf("%19s", ip);

    printf("Output:\n");
    
    for(int i = 0; ip[i] !='\0'; i++){
        switch(ip[i]){
                case '1': printf("0001");break;
                case '2': printf("0010");break;
                case '3': printf("0011");break;
                case '4': printf("0100");break;
                case '5': printf("0101");break;
                case '6': printf("0110");break;
                case '7': printf("0111");break;
                case '8': printf("1000");break;
                case '9': printf("1001");break;
                case 'A': case 'a': printf("1010"); break;
                case 'B': case 'b': printf("1011"); break;
                case 'C': case 'c': printf("1100"); break;
                case 'D': case 'd': printf("1101"); break;
                case 'E': case 'e': printf("1110"); break;
                case 'F': case 'f': printf("1111"); break;
                default:  printf("incorrect");  return 1;    break;
            }
        }
    
    
    return 0;
}







// #include <stdio.h>
// #include <string.h>

// // Function to convert a single hexadecimal digit to binary
// char* hexToBinary(char hexDigit) {
//     switch (hexDigit) {
//         case '0': return "0000";
//         case '1': return "0001";
//         case '2': return "0010";
//         case '3': return "0011";
//         case '4': return "0100";
//         case '5': return "0101";
//         case '6': return "0110";
//         case '7': return "0111";
//         case '8': return "1000";
//         case '9': return "1001";
//         case 'A': case 'a': return "1010";
//         case 'B': case 'b': return "1011";
//         case 'C': case 'c': return "1100";
//         case 'D': case 'd': return "1101";
//         case 'E': case 'e': return "1110";
//         case 'F': case 'f': return "1111";
//         default: return NULL; // Invalid hexadecimal digit
//     }
// }

// int main() {
//     char hexadecimal[17]; // Maximum 16 hex digits + '\0' terminator
//     printf("Enter a hexadecimal number: ");
//     scanf("%16s", hexadecimal);

//     int hexLength = strlen(hexadecimal);
//     printf("Output:\n");

//     // Convert each hex digit to binary and print
//     for (int i = 0; i < hexLength; i++) {
//         char* binary = hexToBinary(hexadecimal[i]);
//         if (binary) {
//             printf("%s", binary);
//         } else {
//             printf("\nInvalid hexadecimal digit: %c\n", hexadecimal[i]);
//             return 1; // Exit with an error code
//         }
//     }
    
//     printf("\n");

//     return 0; // Exit with success code
// }
