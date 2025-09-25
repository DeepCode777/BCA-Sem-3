DECLARE
    n NUMBER (5);
    i NUMBER (5) := 1;
    c Number (5) := 0;
BEGIN
    n := &n;
  FOR i IN 1..n
  LOOP
    IF ((MOD(N,i)) = 0) THEN
      c := c + 1;
    END IF;
  END LOOP;
  IF (C = 2) THEN
    DBMS_OUTPUT.PUT_LINE('Number Is Prime');
  ELSE
    DBMS_OUTPUT.PUT_LINE('Number Not Is Prime');
  END IF;
END;