DECLARE 
  a NUMBER(5);
  b NUMBER (5);
  c NUMBER (5);
BEGIN 
  a := &a;
  b := &b;
IF a > b THEN 
  c := a;
ELSE 
  c := b;
END IF 
  DBMS_OUTPUT.PUT_LINE('Bigger Number Is : ' ||c);
END;
/
