        glogal      main
        extern      printf

        section     .text
main:
        mov         edi, message
        xor         eax, eax
        call        printf
        mov         eax, 0
message:
        db         'Hello, Holberton\n', 0
