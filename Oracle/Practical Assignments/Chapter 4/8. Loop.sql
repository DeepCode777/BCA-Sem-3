DECLARE
  n NUMBER (5);
BEGIN
  n := &n;
  LOOP
    n := n + 1;
    IF n > 10 THEN
      EXIT;
    END IF;
    DBMS_OUTPUT.PUT_LINE('Inside Loop : ' || n);
  END LOOP;
  DBMS_OUTPUT.PUT_LINE('After Loop : ' || n);
END;