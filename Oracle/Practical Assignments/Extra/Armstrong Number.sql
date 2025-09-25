DECLARE 
  num NUMBER(5);
  m NUMBER(5);
  rem NUMBER(5);
  sum NUMBER(10) := 0;
BEGIN 
  num := &num;
  m := num;

  WHILE m > 0 LOOP
      rem := MOD(m,10);
      sum := sum + rem * rem * rem;
      m := TRUNC(m/10);
  END LOOP;

  IF sum = num THEN 
    DBMS_OUTPUT.PUT_LINE('Yes,' || num || ' Is Armstrong');
  ELSE
    DBMS_OUTPUT.PUT_LINE('No, ' || num || ' Is NOT Armstrong');
  END IF;
END;