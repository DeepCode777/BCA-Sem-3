CREATE TABLE library (Bid NUMBER (5) PRIMARY KEY, Bname VARCHAR2 (30), Bprice NUMBER (5));

INSERT INTO library VALUES(1,'Oracle','1000');
INSERT INTO library VALUES(2,'Python','900');
INSERT INTO library VALUES(3,'CPP','850');

SELECT * FROM library;

CREATE TABLE students (Sid NUMBER (5) PRIMARY KEY, Bid NUMBER (5), Sname VARCHAR2 (30), Sclass VARCHAR2 (5), CONSTRAINT deep FOREIGN KEY (Bid) REFERENCES library (Bid));

INSERT INTO students VALUES(1,2,'Std 1','B');
INSERT INTO students VALUES(2,2,'Std 2','A');
INSERT INTO students VALUES(3,1,'Std 3','B');
INSERT INTO students VALUES(4,1,'Std 4','A');

SELECT * FROM students;

SELECT * FROM library;