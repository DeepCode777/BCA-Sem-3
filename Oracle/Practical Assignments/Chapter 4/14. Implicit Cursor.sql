CREATE TABLE emp (
  eid NUMBER (5) PRIMARY KEY,
  ename VARCHAR2 (30),
  esalary NUMBER (5)
);

INSERT INTO emp VALUES (1, 'E1', 10000);
INSERT INTO emp VALUES (2, 'E2', 20000);
INSERT INTO emp VALUES (3, 'E3', 30000);

DECLARE
  ic number(2);
BEGIN
  UPDATE emp SET esalary = esalary + 500;
    IF SQL%NOTFOUND THEN
      DBMS_OUTPUT.PUT_LINE('No Change');
    ELSIF SQL%FOUND THEN    
    ic := SQL%ROWCOUNT;
      DBMS_OUTPUT.PUT_LINE(ic || 'Rows Changes');
    END IF;
END;