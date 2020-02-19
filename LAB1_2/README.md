# COMP 232 Lab 1

Sal Penza

1/29/20

## Task 1

### Description

Ran hello.c a few different ways in order to setup and test the environment.

### Sample Runs

```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/hello
Hello World. 
 	 and you ! 
 
Process finished with exit code 0
```

## Task 2

### Description

Added another variable for faculty members as a float. Asked the user for the number of faculty members using a print statement and stored the input in the faculty variable using scanf. Created a ratio variable and assigned the Students divided by the faculty members to it. Lastly used a printf statement to print the ratio of students to faculty.

### Sample Runs
```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/types
How many students does CSUCI have ?:14
CSUCI has 14 students.

Process finished with exit code 0
```
```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/types
How many students does CSUCI have ?:67
How many faculty members does CSUCI have ?:5
The ratio of students to faculty at CSUCI is 13.4. 

Process finished with exit code 0
```
```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/types
How many students does CSUCI have ?:16
How many faculty members does CSUCI have ?:4
The ratio of students to faculty at CSUCI is 4.0. 

Process finished with exit code 0
```
```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/types
How many students does CSUCI have ?:17
How many faculty members does CSUCI have ?:12
The ratio of students to faculty at CSUCI is 1.4. 

Process finished with exit code 0
```

## Task 3

### Description

Converted level to a char and asked the user for a character input. Stored the input in the level variable using getchar(). Created a switch statement where the conditional statement is the level variable. I used tolower() in order to ensure that level was a lowercase character and created mutliple cases using puts() for output.

### Sample Runs

```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/if-then-else
Enter a character (e, f, or h): 1
Error, invalid input

Process finished with exit code 0
```
```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/if-then-else
Enter a character (e, f, or h): e
empty

Process finished with exit code 0
```
```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/if-then-else
Enter a character (e, f, or h): f
full

Process finished with exit code 0
```
```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/if-then-else
Enter a character (e, f, or h): h
half full

Process finished with exit code 0
```
```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/if-then-else
Enter a character (e, f, or h): a
Error, invalid input

Process finished with exit code 0
```

```
/Users/salvatore.penza568/Desktop/COMP_232/c_tut/cmake-build-debug/if-then-else
Enter a character (e, f, or h): H
half full

Process finished with exit code 0
```
## Task 4

### Description
Asked the user for the desired number of double and scanned that value into a variable size. If the input was greater than 128 or less than or equal to 0 then the size was set to 1 and a message was printed explaining the error to the user. The size variable is used to create an array of double with the size that was inputted. The user is asked to input doubles and they are stored in the array of doubles. Once the array is full the array is printed using a for loop and the sum is also calculated. To find the average, the sum is divided by the size that was indicated by the user.

### Sample Runs

```
/Users/salvatore.penza568/Desktop/SalPenzaLab1_2/cmake-build-debug/array
Provide a desired number of doubles? 
5

Provide the doubles? 
1.0 2.0
3.0
4.0 5.0

Data: 1.0 2.0 3.0 4.0 5.0 
Average: 3.0

Process finished with exit code 0
```
```
/Users/salvatore.penza568/Desktop/SalPenzaLab1_2/cmake-build-debug/array
Provide a desired number of doubles? 
-12
Size too small... size is now 1. 

Provide the doubles? 
1.7

Data: 1.7 
Average: 1.7

Process finished with exit code 0
```
```
/Users/salvatore.penza568/Desktop/SalPenzaLab1_2/cmake-build-debug/array
Provide a desired number of doubles? 
1738
Size too large... size is now 128. 

Provide the doubles? 
1.0
2.0
3.0
4.0
5.0
6.0
7.0
8.0
9.0
1.0
2.0
3.0
4.0
5.0
6.0
7.0 ...

Data: 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 1.0 2.0 
Average: 4.9

Process finished with exit code 0

```

## Task 5

### Description
Read a word into the buffer and check the length of the word. Make sure that the word is not the sentential word. Allocate enough space for the word uses strlen() and calloc(). Then copy the word from the buffer into the allocated space.

### Sample Runs
```
C:\Users\salpe\Desktop\COMP232\SalPenzaLab1_2\cmake-build-debug\words.exe
Enter words (enter "END" to stop):
veni vidi
vici
END
The following 3 words have been read:
veni
vidi
vici

Process finished with exit code 0

```
```
C:\Users\salpe\Desktop\COMP232\SalPenzaLab1_2\cmake-build-debug\words.exe
Enter words (enter "END" to stop):
Hi this is a program that reads words
END
The following 8 words have been read:
Hi
this
is
a
program
that
reads
words

Process finished with exit code 0
```
##Task 6

### Description

Asked the user for a filename and took the contents from data.txt and copied it into their requested file using various file functions.

### Sample Runs

None needed

## Task 7

### Description

Created a new function called swapStrings that takes two strings as parameters and swaps them. The char pointers were created to hold the strings and they were printed before and after the swap demonstrating it.

### Sample Runs

```
/Users/salvatore.penza568/Desktop/SalPenzaLab1_2/cmake-build-debug/ptr-arg-2
string 1 has value "Hello" starting at address 0x100aecf0e
string 2 has value "Goodbye" starting at address 0x100aecf14

After the swap: string1 = Goodbye and string2 = Hello

Process finished with exit code 0

```

## Task 8

### Description

Created int variables for each number and a char for the operator. Scanned value into variables and used if-else statements to determine which operator was entered. Created multiple functions for each operations and a calc function with a pointer to the specified function. 
### Sample Runs
```
/Users/salvatore.penza568/Desktop/SalPenzaLab1_2/cmake-build-debug/calc
3+6
9 
10 - 7
3 
5*5
25 
25 / 5
5 
```
```
/Users/salvatore.penza568/Desktop/SalPenzaLab1_2/cmake-build-debug/calc
10 + 7
17 
5 * 5
25 
3 - 2
1 
2/1
2 
```
## Task 9

### Description

Made use of a header file to initialize structures and a few functions. Programmed the functions to print and accept input in person.c and used the functions in struct.c to properly gather and print data to user.

### Sample Runs
```
C:\Users\salpe\Desktop\COMP232\SalPenzaLab1_2\cmake-build-debug\struct.exe
How many employees?
4

Enter information for the next employee.
Name:Bob Ross
 Age:54
 Height:1.2
 Birthday (MM / DD / YYYY):11/22/3333

Enter information for the next employee.
Name:Idk someone with a name
 Age:980
 Height:18.5
 Birthday (MM / DD / YYYY):13/37/1337

Enter information for the next employee.
Name:Arnold Shwa... how2spell
 Age:72
 Height:180.3
 Birthday (MM / DD / YYYY):7/30/1947

Enter information for the next employee.
Name:yes
 Age:1
 Height:1
 Birthday (MM / DD / YYYY):1/1/1

Displaying Employees...

Bob Ross:
        Age: 54
        Height: 1.2
        Birthday: 11/22/3333
Idk someone with a name:
        Age: 980
        Height: 18.5
        Birthday: 13/37/1337
Arnold Shwa... how2spell:
        Age: 72
        Height: 180.3
        Birthday: 7/30/1947
yes:
        Age: 1
        Height: 1.0
        Birthday: 1/1/1

Process finished with exit code 0
```
```
C:\Users\salpe\Desktop\COMP232\SalPenzaLab1_2\cmake-build-debug\struct.exe
How many employees?
0

Displaying Employees...


Process finished with exit code 0
```
## Task 10

### Description

In processor.c, implemented the function addMessageToCache to reach message types using a switch statement and deal with them accordingly. Using sscanf to read from inputline and an array of integers to keep track of the types being entered while utilizing the provided messageCache array and header file to pull data. If the cache became full it would then go to the messageDispatcher. The messageDispatcher empties the cache and sends the data to be processed in the processMessage function. In processMessage the type and contents are printed and any memory allocated in freed. Finally, printStatistics is called to display the final stats of the run such as the number of batches processed, the total number fo messages, and the number of each type of message processed.

### Sample Runs

```
C:\Users\salpe\Desktop\COMP232\SalPenza_lab_1_2_processor\cmake-build-debug\processor.exe
Enter a message, or type "END" to stop >1 I like to eat beans.
Enter a message, or type "END" to stop >2 1 2 3 4
Enter a message, or type "END" to stop >3 1.5 2.6 3.7 4.8 5.9
Enter a message, or type "END" to stop >4 1234567 abcdefg 01123568
Enter a message, or type "END" to stop >END

Running Message Dispatcher...
TYPE 1 : I like to eat beans.
TYPE 2 : 1 2 3 4
TYPE 3 : 1.5 2.6 3.7 4.8 5.9
TYPE 4 : 1234567 abcdefg 01123568

Displaying Statistics...
Number of batches processed: 1
Messages processed:
        Total : 4
        Type 1 : 1
        Type 2 : 1
        Type 3 : 1
        Type 4 : 1

Process finished with exit code 0
```

```
C:\Users\salpe\Desktop\COMP232\SalPenza_lab_1_2_processor\cmake-build-debug\processor.exe
Enter a message, or type "END" to stop >1 I like to eat beans.
Enter a message, or type "END" to stop >2 1 2 3 4
Enter a message, or type "END" to stop >3 1.5 2.6 3.7 4.8 5.9

Running Message Dispatcher...
TYPE 1 : I like to eat beans.
TYPE 2 : 1 2 3 4
TYPE 3 : 1.5 2.6 3.7 4.8 5.9

Enter a message, or type "END" to stop >4 1234567 abcdefg 0112358
Enter a message, or type "END" to stop >END

Running Message Dispatcher...
TYPE 4 : 1234567 abcdefg 0112358

Displaying Statistics...
Number of batches processed: 2
Messages processed:
        Total : 4
        Type 1 : 1
        Type 2 : 1
        Type 3 : 1
        Type 4 : 1

Process finished with exit code 0
```
```
C:\Users\salpe\Desktop\COMP232\SalPenza_lab_1_2_processor\cmake-build-debug\processor.exe
Enter a message, or type "END" to stop >1 I love programming
Enter a message, or type "END" to stop >1 I hate programming.
Enter a message, or type "END" to stop >1 I like to eat beans

Running Message Dispatcher...
TYPE 1 : I love programming
TYPE 1 : I hate programming.
TYPE 1 : I like to eat beans

Enter a message, or type "END" to stop >2 1 2 3 4
Enter a message, or type "END" to stop >3 1.5 2.3 4.6 5.3
Enter a message, or type "END" to stop >4 1234567 abcdefg qwerty

Running Message Dispatcher...
TYPE 2 : 1 2 3 4
TYPE 3 : 1.5 2.3 4.6 5.3 0.0
TYPE 4 : 1234567 abcdefg qwerty

Enter a message, or type "END" to stop >1 I hate eating beans.
Enter a message, or type "END" to stop >END

Running Message Dispatcher...
TYPE 1 : I hate eating beans.

Displaying Statistics...
Number of batches processed: 3
Messages processed:
        Total : 7
        Type 1 : 4
        Type 2 : 1
        Type 3 : 1
        Type 4 : 1

Process finished with exit code 0
```
