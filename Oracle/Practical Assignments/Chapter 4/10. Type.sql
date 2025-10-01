CREATE TABLE employee(
    eid NUMBER (5) PRIMARY KEY,
    ename VARCHAR2 (30),
    salary NUMBER (5)
);

INSERT INTO employee VALUES (1,'Employee 1',10000);
INSERT INTO employee VALUES (2,'Employee 2',20000);
INSERT INTO employee VALUES (3,'Employee 3',50000);

DECLARE
  en employee.ename%TYPE;
  es employee.salary%TYPE;
  n NUMBER (5);
BEGIN
  n := &eid;
  SELECT ename,salary INTO en,es FROM employee WHERE eid = n;
    DBMS_OUTPUT.PUT_LINE(en);
    DBMS_OUTPUT.PUT_LINE(es);
EXCEPTION
  WHEN NO_DATA_FOUND THEN
    DBMS_OUTPUT.PUT_LINE('Try Again');
END;