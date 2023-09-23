section             .text
        glogal      main
        extern      printf

main:
        mov         edi, message
        call        printf
        mov         eax, 0

section             .data
        message db  'Hello, Holberton\n', 0xa, 0
