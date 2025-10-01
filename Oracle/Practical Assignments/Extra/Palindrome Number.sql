DECLARE
  num NUMBER (5);
  temp NUMBER (5);
  m NUMBER (5);
  rem NUMBER (5);
BEGIN
  num := &num;
  m := num;

  WHILE m > 0 LOOP
    rem := MOD(m,10);
    temp := (temp * 10) + rem;
    m := m/10;
  END LOOP;

  IF num = temp THEN
    DBMS_OUTPUT.PUT_LINE('Yes, ' || num || ' Is Palindrome Number');
  ELSE
    DBMS_OUTPUT.PUT_LINE('No, '|| num || ' Is Not Palindrome Number');
  END IF;
END;