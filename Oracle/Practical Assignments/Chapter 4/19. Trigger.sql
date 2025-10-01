CREATE TABLE tstd(
  sid NUMBER (5) PRIMARY KEY,
  sname VARCHAR2 (30),
  smarks NUMBER (3)
);

INSERT INTO tstd VALUES(1,'Student 1',98);
INSERT INTO tstd VALUES(2,'Student 2',99);
INSERT INTO tstd VALUES(3,'Student 3',97);

CREATE TABLE tstdbackup(
  sid NUMBER (5) PRIMARY KEY,
  sname VARCHAR2 (30),
  smarks NUMBER (3)
);

CREATE or REPLACE TRIGGER av BEFORE DELETE ON tstd FOR EACH ROW
BEGIN
  INSERT INTO tstdbackup (sid,sname,smarks)
  VALUES (:OLD.sid, :OLD.sname, :OLD.smarks);
END;
/

DELETE FROM tstd WHERE sid = 3;