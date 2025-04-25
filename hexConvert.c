#include <stdio.h>
#include <ctype.h>

char input;


int convertHexToDec(char hex){
    hex = toupper(hex);
    if (hex >= '0' && hex <='9'){
        return hex - '0';
    }
    else if (hex >='A' && hex <='F'){
        return hex - 'A' + 10;
    }
    else{
        return -1;
    }
}

int convertDecToBin(int deci){
    for (int bits = 3; bits >=0; bits-- )
    {
        int binary = (deci >> bits) & 1;
        printf("%d", binary);
    }
    return 0;
    
}


int main(){

    while (input = toupper(input) != 'X'){
        printf("Enter a hex character or x to close: ");
        scanf(" %c", &input);
        
        int dec = convertHexToDec(input);

        if (input = toupper(input) == 'X'){
            printf("Program Closed!\n");
            break;
        }

        if(dec != -1){
            printf("Decimal: %d\n", dec);
            printf("Binary: ");
            convertDecToBin(dec);
            printf("\n");
        }

        else{
            printf("Invalid Hex!\n");
        }

    }
   
    return 0;
}