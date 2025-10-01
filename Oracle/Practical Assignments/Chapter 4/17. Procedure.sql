CREATE TABLE bca (
  sid NUMBER (5) PRIMARY KEY,
  sname VARCHAR2 (30)
);

INSERT INTO bca VALUES (1, 'Student 1');

CREATE OR REPLACE PROCEDURE ad(
  id NUMBER,
  name VARCHAR2) AS 
BEGIN
    INSERT INTO bca (sid,sname) VALUES (id,name);
    COMMIT;
END ad;
/

BEGIN
  ad(2,'Student 2');
  ad(3,'Student 3');
END;
/

BEGIN
  ad(4,'Student 4');
END;
/

SELECT * FROM bca;
