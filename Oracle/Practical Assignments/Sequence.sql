CREATE TABLE students(
  Sno NUMBER (5),
  Sname VARCHAR2 (30),
  Scity VARCHAR2 (20)
);

CREATE SEQUENCE d
  START with 1
  INCREASE by 1
  MINVALUE 1
  MAXVALUE 100
  CACHE 20;

INSERT INTO students VALUES(d.nextval,'Student 1' ,'India');
INSERT INTO students VALUES(d.nextval,'Student 2' ,'Las Vegas');
INSERT INTO students VALUES(d.nextval,'Student 3' ,'Norway');
INSERT INTO students VALUES(d.nextval,'Student 4' ,'Switzerland');
INSERT INTO students VALUES(d.nextval,'Student 5' ,'Us');

SELECT * FROM students;
