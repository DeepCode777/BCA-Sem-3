DECLARE
  n NUMBER (10);
  f NUMBER(10) := 1;
  i NUMBER (10);
BEGIN
  n := &n;
  FOR i IN 1..n
  LOOP
    f := f * i;
  END LOOP;
    dbms_output.put_line('Factorial Number Is = ' || f);
END;
/