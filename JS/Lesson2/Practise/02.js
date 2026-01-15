// Variables
a = 10;

// Declaring variables
let a = 10; 

// let and var are both used for variables that might have a new value assigned to them somewhere in the program.
// Difference between let and var is var has global scope and let has block scope. var's global scope means that you can use the variables defined with var in the entire script. On the other hand, let's block scope means you can only use variables defined with let in the specific block of code in which they were defined.
// const is used for variables that only get a value assigned once

let nr1 = 12;
var nr2 = 8;
const PI = 3.14159;

// Naming variables
let age=21;

// Datatypes
// It is of 2 types:primitive & non-primitive
/* Primitive datatype
Definition Stores simple, single values  
Data stored	Actual value 
Memory	Less memory	
Size	Fixed	
Can store methods?	❌ No	
Example	int, float, char, boolean*/

// String
let singleString = 'Hi,there';
let doubleString = "How you doing";

let language = "JavaScript";
let backticksMessage = `Let's learn ${language}`;
console.log(backticksMessage);

// Escape character
let str = "Hello, what's your name? Is it \"Mike\"?";
console.log(str);
let str2 = 'Hello, what\'s your name? Is it "Mike"?';
console.log(str2);

let str3 = "New \nline.";
let str4 = "I'm containing a backslash: \\!";
console.log(str3);
console.log(str4);

// Number
let intNr = 1;
let decNr = 1.5;
let expNr = 1.4e15;
let octNr = 0o10; //decimal version would be 8
let hexNr = 0x3E8; //decimal version would be 1000
let binNr = 0b101; //decimal version would be 5

// BgInt
let bigNr = 909876645678794390n;

// Boolean
let bool1=true;
let bool2=false;

// Symbol
let s1="js";
let s2="js";
console.log(s1 === s2); //true

let sy1=Symbol("js");
let sy2=Symbol("js");
console.log(s1 === s2);  //false

// Undefined
let unassigned;
console.log(unassigned); //undefined

// Null
let empty=null;

// Type of variable
let s="Hello";
console.log("str", typeof s);
// Same for all the datatypes


// Converting datatypes
let nrToStr=6;
nrToStr=String(nrToStr);
console.log(nrToStr, typeof nrToStr);
// Same for all datatypes

// Operators
// Arithmetic operators
// Addition
let st1 = "Hello ";
let st2 = "addition";
let result2 = st1 + st2;

// Subtraction
// let nr1 = 20;
// let nr2 = 4;
// let str1 = "Hi";
// let nr3 = 3;
// let result1 = nr1 - nr2;
// let result2 = str1 - nr3;
// console.log(result1, result2);
// The output is as follows:
// 16 NaN

// Multiplication
// let nr1 = 15;
// let nr2 = 10;
// let str1 = "Hi";
// let nr3 = 3;
// let result1 = nr1 * nr2;
// let result2 = str1 * nr3;
// console.log(result1, result2); 
// 150 NaN

// Division
// let nr1 = 30;
// let nr2 = 5;
// let result1 = nr1 / nr2;
// console.log(result1);
// The output is as follows:
// 6

// Exponentiation
// let nr1 = 2;
// let nr2 = 3;
// let result1 = nr1 ** nr2;
// console.log(result1);
// 8

// Modulus
let num1 = 10;
let num2 = 3;
let result1 = num1 % num2;
console.log(`${num1} % ${num2} = ${result1}`);

// Unary operators
// Increment & Decrement
let n=2;
n++;
n--;
console.log(n);

// Prefix & postfix operators
// Postfix
// let nr = 2;
// console.log(nr++); 2
// console.log(nr); 3

// Prefix
// let nr = 2;
// console.log(++nr);
// 3

// Assignment operators
let x=2;
x+=2;
// Same for all operations

// Comparison operators
// ==,!=,>=,<=

// Logical operators
// AND
let w = 1;
let y = 2;
let z = 3;

console.log(w < y && y < z);

// OR
console.log(x > y || y < z);

// NOT
let u = false;
console.log(!u);


