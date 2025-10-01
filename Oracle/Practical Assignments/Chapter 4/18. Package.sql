CREATE TABLE cust (
  id NUMBER (5) PRIMARY KEY,
  name VARCHAR2 (30),
  salary NUMBER (5)
);

INSERT INTO cust VALUES (1, 'E1', 10000);
INSERT INTO cust VALUES (2, 'E2', 20000);
INSERT INTO cust VALUES (3, 'E3', 30000);

CREATE PACKAGE cs AS
    PROCEDURE fs (cid cust.id%TYPE);
END cs;
/

CREATE OR REPLACE PACKAGE BODY cs AS
    PROCEDURE fs (cid cust.id%TYPE) IS 
    csal cust.salary%TYPE;
BEGIN
    SELECT salary INTO csal FROM cust WHERE id = cid;
    DBMS_OUTPUT.PUT_LINE('Salary' || csal);
END fs;
END cs;
/

BEGIN
    cs.fs(2);
END;
/
