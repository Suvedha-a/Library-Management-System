This is a simple Library Management System developed using C. It is a console-based project used to manage books and keep track of issued and returned books.


The project has the following options:

* Add new books
* Update book details
* Remove books
* Search books
* View all books
* Issue books
* Return books
* View issued books
* Calculate fine for late return
* Save book and issued-book details into files
* Exit the program

 Concepts Used

This project uses the C concepts that I have learned:

* Structures
* Pointers
* Singly Linked List
* Functions
* Dynamic Memory Allocation
* Searching
* Insertion and Deletion
* File Handling
* String Handling

 Book Details

Each book contains:

* Book ID
* Book Title
* Author Name
* Quantity

 Issue Details

When a book is issued, the system stores:

* Book ID
* User ID
* User Name
* Issue Date
* Due Date
* Return Date
* Fine

 Fine Calculation

The fine is calculated based on the number of late days.

**Fine = Late Days × ₹5**
FILE HANDLING:
The project uses two files to save the data: book.txt-stores book details
issued book.txt-stores issued book details


How the Project Works

The program displays a menu. The user selects an option and performs the required operation.

For example, when a book is issued, the program first checks whether the book is available. If it is available, the issue details are stored and the book quantity is reduced.

When the book is returned, the quantity is increased and the fine is calculated if the book is returned late.

 

The main aim of this project is to use C programming and linked-list concepts to create a simple real-world Library Management System.
