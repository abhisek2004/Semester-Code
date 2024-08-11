create table Employee (EmpID varchar(5),Ename varchar(20),Dept varchar(15),DOJ date,Salary numeric(8,2));

insert into Employee values('9762','Debabrata','CSE','2004-05-25',45222);
insert into Employee values('9752','Ashley','CSE','2007-12-25',45222);


	insert into Employee values('4512','Vegapunk','BSH','2006-05-04',75222);
	insert into Employee values('1425','Madara','MECH','2005-01-14',96702);
	insert into Employee values('4786','Rohit','CSE','2005-10-15',95222);
	insert into Employee values('4521','Mohit','BT','2018-09-06',85222);

select Ename, (Salary)/30 as "Daily Salary" from Employee ;
select Ename,Salary+2000 as "New Salary" from Employee;

select Ename , Salary-1000 as "New Salary" from Employee;

select Ename , Salary*12 as "Annual Salary" from Employee;

select count(Ename) as "Number of Employees" from Employee;

select sum(Salary) as "Monthly Salary of the organisation" from Employee;

select max(Salary )as "Maximum Salary" from Employee;

select min(Salary )as "Minimum Salary" from Employee;

select EmpID,Ename,Salary from Employee where Salary IN (select max(Salary) from Employee) ;	

select * from Employee where Salary in (select max(Salary) from Employee) ; -- Display information of employee getting highest salary

select Ename,Salary from Employee where Salary in (select min(Salary) from Employee); -- Display Name and Salary of employee getting lowest salary

SELECT EmpID,Ename from Employee where Salary>40000; -- Display EmpID and Name of employees getting salary ore than 40000


update Employee set Salary =Salary + 5000 where Salary<50000;

select * from Employee;

delete from Employee where Salary<50000;

select Ename,(Salary)*0.2 as "Dussehra Bonus" from Employee; -- Display Name, Dussehra Bonus of the employees as 20% of the salary

select EmpID ,Ename,Salary from Employee where Salary>(select avg(Salary) from Employee); -- Display EmpID and Name of employees getting salary more than average salary

select EmpID , Ename ,DOJ from Employee where DOJ<'2023-06-22'; -- Display EmpID ,Ename and DOJ of employee joining before 22nd June 2023