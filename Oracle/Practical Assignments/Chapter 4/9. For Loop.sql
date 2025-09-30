DECLARE
    n NUMBER (5);
BEGIN
    n := &n;
    FOR i IN n..n+10
    LOOP
        DBMS_OUTPUT.PUT_LINE('LOOP ' || i);
    END LOOP;
    DBMS_OUTPUT.PUT_LINE('OUT ' || n);
END;