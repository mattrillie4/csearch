# csearch

Very basic C program, that reads through a .txt file, and returns any lines with a specified term on call.

## Usage

Usage: csearch <term> <file>

file in the form of .txt
term is the desired term to search for in the file
This will return all lines containing the term, accompanied by the line number.

## How to build

gcc -Wall -o csearch main.c search.c

## What I learned

1. How to open and search through a file in C, with fopen() and fgets()
2. Learned how to work in and operate in the powershell terminal with C programming
3. How use Git in the terminal to create a proper GitHub repository to track the work
