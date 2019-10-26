SECTION .data
hello: db  "Hello, holberton", 10.0

SECTION .text
global main
main:
    mov     rax, 1
    mov     rdi, 1
    mov     rsi, hello
    mov     rdx, 17
    syscall
    ;return (0)

    ; syscall(SYS_EXIT, <sys_write return value> - hello_len);
    mov     rax, 60
    mov     rdi, 1
    syscall