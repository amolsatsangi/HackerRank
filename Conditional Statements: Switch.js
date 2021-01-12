\******************88
Objective

In this challenge, we learn about switch statements. Check out the attached tutorial for more details.

Task

Complete the getLetter(s) function in the editor. It has one parameter: a string, , consisting of lowercase English alphabetic letters (i.e., a through z). It must return A, B, C, or D depending on the following criteria:

If the first character in string  is in the set , then return A.
If the first character in string  is in the set , then return B.
If the first character in string  is in the set , then return C.
If the first character in string  is in the set , then return D.
Hint: You can get the letter at some index  in  using the syntax s[i] or s.charAt(i).

Input Format

Stub code in the editor reads a single string denoting  from stdin.

Constraints

, where  is the length of .
String  contains lowercase English alphabetic letters (i.e., a through z) only.
Output Format

Return either A, B, C, or D according to the criteria given above.

Sample Input 0

adfgt
Sample Output 0

A
Explanation 0

The first character of string  is a.
************\
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function getLetter(s) {
    let letter;
    // Write your code here
    letter=s[0];
    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': letter='A';
        break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g': letter='B';
        break;
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm': letter='C';
        break;
        default: letter ='D';
    }
    return letter;
}


function main() {
    const s = readLine();
    
    console.log(getLetter(s));
}
