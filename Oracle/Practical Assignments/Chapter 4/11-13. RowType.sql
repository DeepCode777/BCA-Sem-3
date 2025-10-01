CREATE TABLE emp (
  eid NUMBER (5) PRIMARY KEY,
  ename VARCHAR2 (30),
  salary NUMBER (5)
);

INSERT INTO emp VALUES (1,'Employee 1',10000);
INSERT INTO emp VALUES (2,'Employee 2',20000);
INSERT INTO emp VALUES (3,'Employee 3',30000);

DECLARE
  dp emp%ROWTYPE;
BEGIN
  dp.eid := &eid;
  dp.ename := &ename;
  dp.salary := &salary;
    DBMS_OUTPUT.PUT_LINE('ID : '|| dp.eid);
    DBMS_OUTPUT.PUT_LINE('Name : '|| dp.ename);
    DBMS_OUTPUT.PUT_LINE('Salary : '|| dp.salary);
END;
/

DECLARE
  ep emp%ROWTYPE;
BEGIN
  SELECT * INTO ep FROM emp WHERE eid = &eid;
    DBMS_OUTPUT.PUT_LINE('Employee ID : '|| ep.eid);
    DBMS_OUTPUT.PUT_LINE('Employee Name : '|| ep.ename);
    DBMS_OUTPUT.PUT_LINE('Employee Salary : '|| ep.salary);
END;
/

DECLARE 
  rp emp%ROWTYPE;
BEGIN
  FOR rp IN (SELECT * FROM emp)
  LOOP
    DBMS_OUTPUT.PUT_LINE('ID : '|| rp.eid);
    DBMS_OUTPUT.PUT_LINE('Name : '|| rp.ename);
    DBMS_OUTPUT.PUT_LINE('Salary : '|| rp.salary);
  END LOOP;
END;