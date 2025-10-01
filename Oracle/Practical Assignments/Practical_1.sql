CREATE TABLE heros(
  no NUMBER (5) PRIMARY KEY,
  name VARCHAR2 (30),
  city VARCHAR2 (20)
);

INSERT INTO heros VALUES(1,'Lucifer Morningstar','Los Angeles');
INSERT INTO heros VALUES(2,'Tony Stark','New York');
INSERT INTO heros VALUES(3,'Peter Parker','New York');
INSERT INTO heros VALUES(4,'Clint Barton','America');

SELECT * FROM heros;
