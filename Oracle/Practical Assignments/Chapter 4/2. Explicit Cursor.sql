CREATE TABLE emp1 (eid NUMBER (5) PRIMARY KEY, ename VARCHAR2 (30), esalary NUMBER (5));

INSERT INTO emp1 VALUES (1, 'E1', 10000);
INSERT INTO emp1 VALUES (2, 'E2', 20000);
INSERT INTO emp1 VALUES (3, 'E3', 30000);

DECLARE
    id emp1.eid%TYPE;
    name emp1.ename%TYPE;
    salary emp.esalary%TYPE;
  CURSOR ad is
  SELECT eid,ename,esalary FROM emp1;
BEGIN
  OPEN ad;
      LOOP
      FETCH ad INTO id,name,salary;
      EXIT WHEN ad%NOTFOUND;
      DBMS_OUTPUT.PUT_LINE(id || ' ' ||  name || ' ' ||salary);
      END LOOP;      
  CLOSE ad; 
END;
/