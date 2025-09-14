DECLARE
    a NUMBER(5);
    b NUMBER(5);
    c NUMBER(5);

    FUNCTION max(x NUMBER, y NUMBER) RETURN NUMBER IS
        z NUMBER(5);
    BEGIN
        IF x > y THEN
            z := x;
        ELSE
            z := y;
        END IF;
        RETURN z;
    END;

BEGIN
    a := &a;
    b := &b;
    c := max(a, b);
    DBMS_OUTPUT.PUT_LINE('Maximum Number is: ' || c);
END;
/