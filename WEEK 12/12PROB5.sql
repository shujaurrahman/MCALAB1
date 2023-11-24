CREATE WEEK12PROB5;
USE WEEK12PROB5;

-- University table
CREATE TABLE University (
    UniversityID INT PRIMARY KEY,
    Name VARCHAR(255),
    Location VARCHAR(255),
    SecondaryIndex_Name VARCHAR(255)
);

-- Department table
CREATE TABLE Department (
    DepartmentID INT PRIMARY KEY,
    Name VARCHAR(255),
    UniversityID INT,
    SecondaryIndex_Name VARCHAR(255),
    FOREIGN KEY (UniversityID) REFERENCES University(UniversityID)
);

-- Program table
CREATE TABLE Program (
    ProgramID INT PRIMARY KEY,
    Name VARCHAR(255),
    UniversityID INT,
    SecondaryIndex_Name VARCHAR(255),
    FOREIGN KEY (UniversityID) REFERENCES University(UniversityID)
);

-- Course table
CREATE TABLE Course (
    CourseID INT PRIMARY KEY,
    Name VARCHAR(255),
    ProgramID INT,
    SecondaryIndex_Name VARCHAR(255),
    FOREIGN KEY (ProgramID) REFERENCES Program(ProgramID)
);

-- Syllabus table
CREATE TABLE Syllabus (
    SyllabusID INT PRIMARY KEY,
    CourseID INT,
    Content TEXT,
    SecondaryIndex_CourseID INT,
    FOREIGN KEY (CourseID) REFERENCES Course(CourseID)
);

-- Faculty table
CREATE TABLE Faculty (
    FacultyID INT PRIMARY KEY,
    Name VARCHAR(255),
    Specialization VARCHAR(255),
    UniversityID INT,
    SecondaryIndex_Name VARCHAR(255),
    SecondaryIndex_Specialization VARCHAR(255),
    FOREIGN KEY (UniversityID) REFERENCES University(UniversityID)
);

-- Create secondary indexes
CREATE INDEX idx_university_name ON University (SecondaryIndex_Name);
CREATE INDEX idx_department_name ON Department (SecondaryIndex_Name);
CREATE INDEX idx_program_name ON Program (SecondaryIndex_Name);
CREATE INDEX idx_course_name ON Course (SecondaryIndex_Name);
CREATE INDEX idx_course_program ON Course (ProgramID);
CREATE INDEX idx_faculty_name ON Faculty (SecondaryIndex_Name);
CREATE INDEX idx_faculty_specialization ON Faculty (SecondaryIndex_Specialization);

Insert sample data
INSERT INTO University (UniversityID, Name, Location) VALUES
(1, 'Delhi University', 'Delhi'),
(2, 'Jawaharlal Nehru University', 'Delhi'),
(3, 'Aligarh Muslim University', 'Aligarh'),
(4, 'University of Jammu', 'Jammu');

INSERT INTO Department (DepartmentID, Name, UniversityID) VALUES
(101, 'Computer Science', 1),
(102, 'Mathematics', 2),
(103, 'Computer Engineering', 3),
(104, 'Physics', 2);

INSERT INTO Program (ProgramID, Name, UniversityID) VALUES
(201, 'MCA', 1),
(202, 'Ph.D. in Physics', 2),
(203, 'B.Tech in Computer Engineering', 3),
(204, 'M.Sc. in Mathematics', 2);

INSERT INTO Course (CourseID, Name, ProgramID) VALUES
(301, 'Database Management', 201),
(302, 'Quantum Mechanics', 202),
(303, 'Data Structures', 203),
(304, 'Linear Algebra', 204);

INSERT INTO Syllabus (SyllabusID, CourseID, Content) VALUES
(401, 301, 'Introduction to SQL, Normalization, SQL Queries'),
(402, 302, 'Wavefunctions, Operators, Schrödinger Equation'),
(403, 303, 'Arrays, Linked Lists, Sorting Algorithms'),
(404, 304, 'Vector Spaces, Eigenvalues, Determinants');

INSERT INTO Faculty (FacultyID, Name, Specialization, UniversityID) VALUES
(501, 'Shafiqul Abidin', 'Information Security', 1),
(502, 'Asim Zafar', 'Quantum Mechanics', 2),
(503, 'Sajida Khatoon', 'Data Structures', 3),
(504, 'Suhel Mustajab', 'Database Management', 1);

SQL QUERRIES ACC TO QUESTION
i) List of Universities situated at Delhi.
SELECT Name FROM University WHERE Location = 'Delhi';

ii) List of all Departments of AMU.
SELECT Name FROM Department WHERE UniversityID = 3;

iii) Find the location of JNU.
SELECT Location FROM University WHERE Name = 'Jawaharlal Nehru University';

iv) List of all Programs run by University of Jammu.
SELECT Name FROM Program WHERE UniversityID = 2;

 v) List of Universities that run Program "MCA".
SELECT U.Name
FROM University U
INNER JOIN Program P ON U.UniversityID = P.UniversityID
WHERE P.Name = 'MCA';

vi) List of Courses of "MCA" run by AMU.
SELECT C.Name
FROM Course C
INNER JOIN Program P ON C.ProgramID = P.ProgramID
INNER JOIN University U ON P.UniversityID = U.UniversityID
WHERE U.Name = 'Aligarh Muslim University' AND P.Name = 'MCA';

vii) List of Faculties specialized in "Information Security" across different universities.
SELECT Faculty.Name AS FacultyName, University.Name AS UniversityName
FROM Faculty
INNER JOIN University ON Faculty.UniversityID = University.UniversityID
WHERE Faculty.Specialization = 'Information Security'


viii) Syllabus of "Computer Architecture" of different Universities.
SELECT University.Name, Syllabus.Content
FROM Syllabus
INNER JOIN Course ON Syllabus.CourseID = Course.CourseID
INNER JOIN Program ON Course.ProgramID = Program.ProgramID
INNER JOIN University ON Program.UniversityID = University.UniversityID
WHERE Course.Name = 'Linear Algebra';