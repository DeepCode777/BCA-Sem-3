DECLARE
  a NUMBER (5);
  b NUMBER (5);
BEGIN
  a := &a;
  b := MOD(a,2);
    IF b = 0 THEN 
      dbms_output.put_line_(b || ' Is Even Number ');
    ELSE
      dbms_output.put_line_(b || ' Is Odd Number ');
    END IF;
END;
/