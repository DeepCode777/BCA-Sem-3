DECLARE
  n NUMBER (5);
BEGIN
  n := &n;
  IF n > 10000 THEN
    DBMS_OUTPUT.PUT_LINE(n ||' Is Larger Then 10000');
  ELSIF n < 10000 THEN
    DBMS_OUTPUT.PUT_LINE(n ||' Is Smaller Then 10000');
  ELSE
    DBMS_OUTPUT.PUT_LINE(n ||' Is Equal With 10000');
  END IF;
END;