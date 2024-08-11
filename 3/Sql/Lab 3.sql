create table Employee2 (EmpId varchar(5),Ename varchar(20),Dept varchar(15),DOJ date,salary number(8,2))
insert into Employee2 values('124','Debasis','cse','12-Aug-2022',86510);
insert into Employee2 values('185','sambit','BT','20-oct-2022',63410);
insert into Employee2 values('179','Rohan','MECH','25-sept-2022',96510);
insert into Employee2 values('109','Abhi','BSH','19-Nov-2022',45510);
-- Query to display the number of employees
SELECT COUNT(*) AS NumberOfEmployees FROM Employee;
-- Query to display the monthly salary of the organization
SELECT Ename, salary / 12 AS MonthlySalary
FROM Employee;
-- Displaying the maximum salary of all employees
SELECT MAX(salary) AS maximum_salary FROM Employee;
-- Displaying the minimum salary of all employees
SELECT MIN(salary) AS min_salary FROM Employee;
-- Displaying the average salary of all employees
SELECT AVG(salary) AS average_salary FROM Employee;
-- Displaying information about the employee with the highest salary
SELECT EmpId, Ename, Dept, DOJ, salary
FROM Employee
WHERE salary = (SELECT MAX(salary) FROM Employee);
SELECT Ename, Dept
FROM Employee
WHERE salary = (SELECT MIN(salary) FROM Employee);
-- Displaying EmpId and name of employees with a salary more than 60000
SELECT EmpId, Ename
FROM Employee
WHERE salary > 60000;
-- Increasing the salary of employees by 5000 who are getting less than 50000
UPDATE Employee
SET salary = salary + 5000
WHERE salary < 50000;
-- Deleting information of employees with a salary less than 50000
DELETE FROM Employee WHERE salary < 50000;
-- Displaying the name and Dussehra bonus (20% of salary) for each employee
SELECT Ename, salary * 0.20 AS "Dussehra Bonus"
FROM Employee;
-- Displaying EmpId and name of employees earning more than the average salary
SELECT EmpId, Ename
FROM Employee
WHERE salary > (SELECT AVG(salary) FROM Employee);
-- Displaying EmpId, Ename, and DOJ of employees joining before 19-Nov-2022
SELECT EmpId, Ename, DOJ
FROM Employee
WHERE DOJ < '2022-11-19';
