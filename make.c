ABC.EXE:big3.0 fact.0 reverse.o palindrome.o

gcc -o ABC.EXE big3.o fact.o reverse.o palindrome.o

big3.c : big3.c
        gcc -c big3.c
fact.c : fact.c
        gcc -c fact.c
reverse.c : reverse.c
        gcc -c reverse.c
palindrome : palindrome.c
        gcc -c palindrome.c
