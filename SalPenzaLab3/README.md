# COMP 232 Lab 3

Sal Penza

2/19/20

## Description

Utilizes a linked list to output properly formatted data from a file. In list.c, the add function creates a new node and with data and inserts it into the list. The clearRecursively function utilizes a nextNode which holds the data from the next index while the pervious data is deleted recursively. The delete function checks if the data specified is located in the list. If it is then the node containing the specified data pointer is freed and the node is removed from the list. In person.c, multiple functions are used to input data, add data, delete data, as well as display data. The program takes input from a file using freopen and outputs the data properly formatted.

## Sample Runs
```
C:\Users\salpe\Desktop\SalPenzaLab3\cmake-build-debug\personnel.exe
Enter the initial number of records:

--> Reading Personnel Records...

--> Displaying Database...
Zach : age 22, height 5.8, birthday 2/20/1989
Maya : age 21, height 5.9, birthday 8/2/1990
Ange : age 23, height 5.6, birthday 7/3/1987
Greg : age 22, height 6.2, birthday 4/15/1989
Matt : age 24, height 6.5, birthday 6/5/1986
Bob : age 50, height 8.0, birthday 3/23/1900
Frank : age 100, height 9.0, birthday 5/4/1923

--> Searching database for Maya...

Maya : age 21, height 5.9, birthday 8/2/1990

--> Removing Maya from database...

Zach : age 22, height 5.8, birthday 2/20/1989
Ange : age 23, height 5.6, birthday 7/3/1987
Greg : age 22, height 6.2, birthday 4/15/1989
Matt : age 24, height 6.5, birthday 6/5/1986
Bob : age 50, height 8.0, birthday 3/23/1900
Frank : age 100, height 9.0, birthday 5/4/1923

--> Searching database for Frank...

Frank : age 100, height 9.0, birthday 5/4/1923

--> Removing Frank from database
Zach : age 22, height 5.8, birthday 2/20/1989
Ange : age 23, height 5.6, birthday 7/3/1987
Greg : age 22, height 6.2, birthday 4/15/1989
Matt : age 24, height 6.5, birthday 6/5/1986
Bob : age 50, height 8.0, birthday 3/23/1900

--> Removing Miro from database...

Zach : age 22, height 5.8, birthday 2/20/1989
Ange : age 23, height 5.6, birthday 7/3/1987
Greg : age 22, height 6.2, birthday 4/15/1989
Matt : age 24, height 6.5, birthday 6/5/1986
Bob : age 50, height 8.0, birthday 3/23/1900

--> Adding new record to database...

Zach : age 22, height 5.8, birthday 2/20/1989
Ange : age 23, height 5.6, birthday 7/3/1987
Greg : age 22, height 6.2, birthday 4/15/1989
Matt : age 24, height 6.5, birthday 6/5/1986
Bob : age 50, height 8.0, birthday 3/23/1900

--> Clearing database...


--> Adding new record to database...

OtherAJ : age 1000, height 88.0, birthday 1/1/1020

Process finished with exit code 0
```