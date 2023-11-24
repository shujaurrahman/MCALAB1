CREATE TABLE BRANCH (
    branch_name VARCHAR(100) PRIMARY KEY,
    branch_city VARCHAR(100),
    assets REAL
);

CREATE TABLE ACCOUNT (
    accno INT PRIMARY KEY,
    branch_name VARCHAR(100),
    balance REAL,
    FOREIGN KEY (branch_name) REFERENCES BRANCH(branch_name) ON DELETE CASCADE
);

CREATE TABLE CUSTOMER (
    customer_name VARCHAR(100) PRIMARY KEY,
    customer_street VARCHAR(100),
    customer_city VARCHAR(100)
);

CREATE TABLE LOAN (
    loan_number INT PRIMARY KEY,
    branch_name VARCHAR(100),
    amount REAL,
    FOREIGN KEY (branch_name) REFERENCES BRANCH(branch_name) ON DELETE CASCADE
);

CREATE TABLE BORROWER (
    customer_name VARCHAR(100),
    loan_number INT,
    PRIMARY KEY (customer_name, loan_number),
    FOREIGN KEY (customer_name) REFERENCES CUSTOMER(customer_name),
    FOREIGN KEY (loan_number) REFERENCES LOAN(loan_number) ON DELETE CASCADE
);

CREATE TABLE DEPOSITOR (
    customer_name VARCHAR(100),
    accno INT,
    FOREIGN KEY (customer_name) REFERENCES CUSTOMER(customer_name),
    FOREIGN KEY (accno) REFERENCES ACCOUNT(accno) ON DELETE CASCADE
);

INSERT INTO BRANCH (branch_name, branch_city, assets) VALUES ('Branch1', 'pilibhit', 100000.50);
INSERT INTO BRANCH (branch_name, branch_city, assets) VALUES ('Branch2', 'Aligarh', 75000.25);
INSERT INTO BRANCH (branch_name, branch_city, assets) VALUES ('Branch3', 'pilibhit', 125000.75);
INSERT INTO BRANCH (branch_name, branch_city, assets) VALUES ('Branch4', 'delhi', 90000.00);
INSERT INTO BRANCH (branch_name, branch_city, assets) VALUES ('Branch5', 'pilibhit', 80000.75);

INSERT INTO ACCOUNT (accno, branch_name, balance) VALUES (1, 'Branch1', 50000.50);
INSERT INTO ACCOUNT (accno, branch_name, balance) VALUES (2, 'Branch2', 30000.25);
INSERT INTO ACCOUNT (accno, branch_name, balance) VALUES (3, 'Branch3', 70000.75);
INSERT INTO ACCOUNT (accno, branch_name, balance) VALUES (4, 'Branch4', 60000.00);
INSERT INTO ACCOUNT (accno, branch_name, balance) VALUES (5, 'Branch5', 40000.75);

INSERT INTO CUSTOMER (customer_name, customer_street, customer_city) VALUES ('Shuja', 'Bhoorey khan', 'pilibhit');
INSERT INTO CUSTOMER (customer_name, customer_street, customer_city) VALUES ('Yusuf', 'VM Hall', 'Aligarh');
INSERT INTO CUSTOMER (customer_name, customer_street, customer_city) VALUES ('saim', 'Marris road', 'pilibhit');
INSERT INTO CUSTOMER (customer_name, customer_street, customer_city) VALUES ('moaz', 'Tilak Nagar', 'delhi');
INSERT INTO CUSTOMER (customer_name, customer_street, customer_city) VALUES ('danish', 'Bhoorey khan', 'pilibhit');

INSERT INTO LOAN (loan_number, branch_name, amount) VALUES (101, 'Branch1', 25000.75);
INSERT INTO LOAN (loan_number, branch_name, amount) VALUES (102, 'Branch2', 15000.25);
INSERT INTO LOAN (loan_number, branch_name, amount) VALUES (103, 'Branch3', 30000.50);
INSERT INTO LOAN (loan_number, branch_name, amount) VALUES (104, 'Branch4', 20000.75);
INSERT INTO LOAN (loan_number, branch_name, amount) VALUES (105, 'Branch5', 18000.25);

INSERT INTO BORROWER (customer_name, loan_number) VALUES ('Shuja', 101);
INSERT INTO BORROWER (customer_name, loan_number) VALUES ('Yusuf', 102);
INSERT INTO BORROWER (customer_name, loan_number) VALUES ('saim', 103);
INSERT INTO BORROWER (customer_name, loan_number) VALUES ('moaz', 104);
INSERT INTO BORROWER (customer_name, loan_number) VALUES ('danish', 105);

INSERT INTO DEPOSITOR (customer_name, accno) VALUES ('Shuja', 1);
INSERT INTO DEPOSITOR (customer_name, accno) VALUES ('Yusuf', 2);
INSERT INTO DEPOSITOR (customer_name, accno) VALUES ('saim', 3);
INSERT INTO DEPOSITOR (customer_name, accno) VALUES ('moaz', 4);
INSERT INTO DEPOSITOR (customer_name, accno) VALUES ('danish', 5);

SELECT * FROM CUSTOMER;
SELECT * FROM branch;
SELECT * FROM ACCOUNT;
SELECT * FROM DEPOSITOR;
SELECT * FROM BORROWER;
SELECT * FROM LOAN;

SELECT DISTINCT C.customer_name
FROM CUSTOMER C
JOIN DEPOSITOR D ON C.customer_name = D.customer_name
JOIN ACCOUNT A ON D.accno = A.accno
JOIN BRANCH B ON A.branch_name = B.branch_name
WHERE B.branch_city = 'pilibhit'
GROUP BY C.customer_name
HAVING COUNT(DISTINCT A.accno) >= 2;

SELECT * FROM CUSTOMER;

SELECT DISTINCT C.customer_name
FROM CUSTOMER C
JOIN DEPOSITOR D ON C.customer_name = D.customer_name
JOIN ACCOUNT A ON D.accno = A.accno
JOIN BRANCH B ON A.branch_name = B.branch_name
WHERE B.branch_city = 'pilibhit';

SELECT * FROM ACCOUNT;

DELETE FROM ACCOUNT
WHERE branch_name IN (
    SELECT branch_name
    FROM BRANCH
    WHERE branch_city = 'pilibhit'
);

SELECT * FROM ACCOUNT;
