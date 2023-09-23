        glogal      main
        extern      printf

        section     .text
main:
        mov         edi, message
        call        printf
        mov         eax, 0
section
        message db  'Hello, Holberton\n', 0
