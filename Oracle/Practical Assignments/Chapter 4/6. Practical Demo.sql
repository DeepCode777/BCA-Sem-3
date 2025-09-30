CREATE TABLE student (sid NUMBER (5) PRIMARY KEY, sname VARCHAR2 (30), marks NUMBER (5));

INSERT INTO student VALUES (1,'Stud 1',95);
INSERT INTO student VALUES (2,'Stud 2',98);
INSERT INTO student VALUES (3,'Stud 3',99);

DECLARE
  sn student.sname%TYPE;
  sm student.marks%TYPE;
  a NUMBER (5);
BEGIN
  a := &sid;
  SELECT sname,marks INTO sn,sm FROM student WHERE sid = a;
    DBMS_OUTPUT.PUT_LINE(sn);
    DBMS_OUTPUT.PUT_LINE(sm);
EXCEPTION
  WHEN NO_DATA_FOUND THEN
     DBMS_OUTPUT.PUT_LINE('Record Not Found, Try With Good Mood. ');
END;