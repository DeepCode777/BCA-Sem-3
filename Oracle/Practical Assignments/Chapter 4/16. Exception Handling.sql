CREATE TABLE bca (
  sid NUMBER (5) PRIMARY KEY,
  sname VARCHAR2 (30),
  smark NUMBER(3)
);

INSERT INTO bca VALUES (1, 'Student 1', 97);
INSERT INTO bca VALUES (2, 'Student 2', 98);
INSERT INTO bca VALUES (3, 'Student 3', 99);

DECLARE
    std bca.sname%TYPE;
BEGIN
    SELECT sname INTO std FROM bca WHERE sname = 'DEEP';
    DBMS_OUTPUT.PUT_LINE('Student Found : ' || std);
EXCEPTION 
    WHEN NO_DATA_FOUND THEN
        DBMS_OUTPUT.PUT_LINE('DATA NOT FOUND');
END;
/
