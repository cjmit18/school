-- Create the database if it doesn't already exist
USE master;
GO

IF DB_ID(N'cis260') IS NULL
BEGIN
    CREATE DATABASE cis260;
    PRINT N'Created database cis260.';
END
ELSE
BEGIN
    PRINT N'Database cis260 already exists.';
END
GO

USE cis260;
GO

-- drop these tables if they already exist
DROP TABLE salariedEmployees;
DROP TABLE commissionEmployees;
DROP TABLE basePlusCommissionEmployees;
DROP TABLE hourlyEmployees;
DROP TABLE employees;


--create table employees
CREATE TABLE employees (
	socialSecurityNumber varchar (30) NOT NULL,
	firstName varchar (30) NOT NULL,
	lastName varchar (30) NOT NULL,
        birthday date NOT NULL,
	employeeType varchar (30) NOT NULL,
	departmentName varchar (30) NOT NULL,
	PRIMARY KEY (socialSecurityNumber)
) ;

-- create table salariedEmployees
CREATE TABLE salariedEmployees (
	socialsecurityNumber varchar (30) NOT NULL,
	weeklySalary real NOT NULL,
	bonus real,
	PRIMARY KEY (socialSecurityNumber),
	FOREIGN KEY (socialSecurityNumber) REFERENCES employees (socialSecurityNumber)
) ;


-- create table commissionEmployees
CREATE TABLE commissionEmployees (
	socialSecurityNumber varchar (30) NOT NULL,
	grossSales int NOT NULL,
	commissionRate real NOT NULL,
	bonus real,
	PRIMARY KEY (socialSecurityNumber),
	FOREIGN KEY (socialSecurityNumber) REFERENCES employees (socialSecurityNumber)
) ;

-- create table basePlusCommissionEmployees
CREATE TABLE basePlusCommissionEmployees (
	socialSecurityNumber varchar (30) NOT NULL,
	grossSales int NOT NULL,
	commissionRate real NOT NULL,
	baseSalary real NOT NULL,
	bonus real,
	PRIMARY KEY (socialSecurityNumber),
	FOREIGN KEY (socialSecurityNumber) REFERENCES employees (socialSecurityNumber)
) ;

-- create table hourlyEmployees
CREATE TABLE hourlyEmployees (
	socialSecurityNumber varchar (30) NOT NULL,
	hours int NOT NULL,
	wage real NOT NULL,
	bonus real,
	PRIMARY KEY (socialSecurityNumber),
	FOREIGN KEY (socialSecurityNumber) REFERENCES employees (socialSecurityNumber)
) ;


--insert rows/records into employees table
INSERT INTO employees VALUES ('111-11-1111', 'John', 'Smith', '1945-1-2', 'salariedEmployee', 'R&D');

INSERT INTO employees VALUES ('222-22-2222', 'Sue', 'Jones', '1961-2-3', 'commissionEmployee', 'SALES');

INSERT INTO employees VALUES ('333-33-3333', 'Bob', 'Lowis', '1958-10-5', 'basePlusCommissionEmployee', 'SALES');

INSERT INTO employees VALUES ('444-44-4444', 'Karen', 'Price', '1972-5-25', 'hourlyEmployee', 'HR');

--insert rows/records into salariedEmployees table
INSERT INTO salariedEmployees VALUES ('111-11-1111', 2013.67, 0);

--insert rows/records into commissionEmployees table
INSERT INTO commissionEmployees VALUES ('222-22-2222', 10100, 0.05, 0);

--insert rows/records into basePlusCommissionEmployees table
INSERT INTO basePlusCommissionEmployees VALUES ('333-33-3333', 5000, 0.04, 300, 0);

--insert rows/records into hourlyEmployees table
INSERT INTO hourlyEmployees VALUES ('444-44-4444', 30, 35.5, 0);

SELECT * FROM employees;
SELECT * FROM salariedEmployees;
SELECT * FROM commissionEmployees;
SELECT * FROM basePlusCommissionEmployees;
SELECT * FROM hourlyEmployees;

SELECT COUNT(*) AS TotalRows From employees;
SELECT COUNT(*) AS TotalRows From salariedEmployees;
SELECT COUNT(*) AS TotalRows From commissionEmployees;
SELECT COUNT(*) AS TotalRows From basePlusCommissionEmployees;
SELECT COUNT(*) AS TotalRows From hourlyEmployees;