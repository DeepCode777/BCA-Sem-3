DECLARE
  first NUMBER (5) := 0;
  sec NUMBER (5) := 1;
  tmp NUMBER (5);
  n NUMBER (5);
  i NUMBER (5);
BEGIN
  n := &n;
    dbms_output.put_line('Fibonacci Series');
    dbms_output.put_line(first);
    dbms_output.put_line(sec);
  FOR  i IN 2..n
  LOOP
    tmp := first + sec;
    first := sec;
    sec := tmp;
        dbms_output.put_line(tmp);
  END LOOP;
END;
/