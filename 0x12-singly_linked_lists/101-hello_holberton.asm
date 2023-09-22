        glogal      main
        extern      printf

        section     .text
main:
        mov         rdi, message
        xor         eax, eax
        call        printf
        mov         eax, 0
        ret
message:
        db         "Hello, Holberton\n", 0
