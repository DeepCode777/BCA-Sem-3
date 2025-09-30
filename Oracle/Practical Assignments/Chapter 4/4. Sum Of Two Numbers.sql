SET SERVEROUTPUT ON
DECLARE
  a NUMBER (5);
  b NUMBER (5);
  c NUMBER (5);
BEGIN
  a := &a;
  b := &b;
  c := a + b;
    DBMS_OUTPUT.PUT_LINE('Sum Of Two numbers is : ' || c);
END;