section .data
    hello db "Hello, Holberton", 10   ; 10 is the ASCII code for newline (LF)
    hello_len equ $ - hello          ; Calculate the length of the string

section .text
    global main

main:
    ; Use write system call to print the string
    mov     rax, 1                    ; System call number for write
    mov     rdi, 1                    ; File descriptor 1 (stdout)
    mov     rsi, hello                ; Address of the string to print
    mov     rdx, hello_len            ; Length of the string
    syscall                           ; Call the system call

    ; Use exit system call to terminate the program
    mov     rax, 60                   ; System call number for exit
    xor     rdi, rdi                  ; Set exit status 0
    syscall                           ; Call the system call

