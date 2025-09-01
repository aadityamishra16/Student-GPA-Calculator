# 📌 Overview
This is a simple C program that manages student records and calculates their **Grade Point Average (GPA)** based on marks in 5 subjects.  
Instead of using percentages, the program uses a **Grade Point Scale** to determine the GPA and pass/fail status of each student.



## 🧮 GPA Calculation
The program assigns **grade points** based on marks obtained in each subject:

| Marks (%) | Grade Point |
|-----------|-------------|
| 90–100    | 10 |
| 80–89     | 9 |
| 70–79     | 8 |
| 60–69     | 7 |
| 50–59     | 6 |
| 40–49     | 5 |
| 30–39     | 4 |
| < 30      | 0 |

The final **GPA** is the **average of grade points across 5 subjects**.

 **Pass Criteria:** GPA ≥ 4  
 **Fail Criteria:** GPA < 4  



## ⚙️ Features
- Input multiple students with:
  - Roll Number
  - Name
  - Marks in 5 subjects
- Automatic GPA calculation
- Displays:
  - Roll Number
  - Name
  - Marks in all subjects
  - Final GPA
  - Pass/Fail result
- Simple and beginner-friendly C implementation
  

## 🖥️ Sample Output

Enter number of students: 2

Enter details for student 1
Roll No: 101
Name: John
Marks in Subject 1: 95
Marks in Subject 2: 80
Marks in Subject 3: 72
Marks in Subject 4: 60
Marks in Subject 5: 88

Enter details for student 2
Roll No: 102
Name: Alice
Marks in Subject 1: 45
Marks in Subject 2: 32
Marks in Subject 3: 28
Marks in Subject 4: 39
Marks in Subject 5: 50

--- Student Report Card ---

Roll No: 101
Name: John
Marks: 95.00 80.00 72.00 60.00 88.00
GPA: 8.80
Result: PASS

Roll No: 102
Name: Alice
Marks: 45.00 32.00 28.00 39.00 50.00
GPA: 3.80
Result: FAIL

# 🔎 Logic

Take input: User enters number of students, then for each student enters roll number, name, and marks in 5 subjects.
Convert marks → grade points using a predefined scale (e.g., 85 = 9 points).
Calculate GPA as the average of grade points across all 5 subjects.
Decide result: If GPA ≥ 4, the student is marked PASS, otherwise FAIL.
Print report card for each student with roll number, name, marks, GPA, and result.

# 👨‍💻 Contact
For more ideas and queries, you can connect with me on Linkedin - https://www.linkedin.com/in/aadityamishra16
