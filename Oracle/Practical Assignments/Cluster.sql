CREATE CLUSTER c1(dno NUMBER (5));

CREATE INDEX c2 ON CLUSTER c1;

CREATE TABLE dept(
  dno NUMBER (5),
  dname VARCHAR2 (30)
) CLUSTER c1(dno);

CREATE TABLE emp(
  eno NUMBER (5),
  ename VARCHAR2 (30),
  dno NUMBER (5)
) CLUSTER c1(dno);

INSERT INTO dept(1,'Sales');
INSERT INTO dept(2,'Management');
INSERT INTO dept(3,'Account');

INSERT INTO emp(1,'Emp 1',2);
INSERT INTO emp(2,'Emp 2',3);
INSERT INTO emp(3,'Emp 3',1);
INSERT INTO emp(4,'Emp 4',2);

SELECT rowid,dno,dname FROM dept;

SELECT rowid, eno,ename,dno FROM emp;