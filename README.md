# Mini Instagram – C++ Console-Based Social Media System
This project is a comprehensive console-based simulation of a social media platform, built entirely using C++ and rooted in core Data Structures and Algorithms (DSA) concepts. Designed to mimic essential Instagram functionalities, this system supports user interaction, messaging, news feeds, friend management, notifications, and more — all managed through efficient data structures without any external libraries.

**Key Features** <br>
**User Management** <br>
Full user registration and login system
Security question-based password recovery
Input validations for email, username, password, and date of birth

**Posts and News Feed** <br>
Users can create posts with timestamps
Personal post history view using stack-based design
Global news feed showing all user posts

**Messaging System** <br>
One-to-one direct messaging with timestamp
Separate chat history between each user pair
Implemented using linked lists for efficient storage and traversal

**Friend Requests** <br>
Send, accept, or reject friend requests
Requests are processed via a queue-based structure
Friendships are tracked using a 2D matrix connection system
**
Notifications** <br>
Real-time notification system for:
New posts
Friend requests
Request acceptance
New messages
Managed using linked notification lists

**Data Structures Used** <br>
Stack – For storing and retrieving posts in LIFO order
Queue – For managing incoming friend requests
Linked Lists – Used in notifications, friends, and messages
2D Array (Matrix) – Tracks friend connections
BST (Binary Search Tree) – Manages login/user search functionality

**Project Objective** <br>
This project demonstrates how a fully interactive platform like Instagram can be simulated through core programming logic without graphical interfaces or database backends. It is a hands-on representation of how C++ and data structures can be applied to create scalable, logical user-based systems.
