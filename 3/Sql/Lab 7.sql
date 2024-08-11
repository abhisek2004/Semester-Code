show databases;
use classes;
show tables;
drop table Employee;
create table Employee(EmpID varchar(5),First_Name varchar(15),Last_Name varchar(15),Email varchar(30),PhoneNo varchar(20),Hire_Date date,Salary int,MgrID int,DeptID int);


insert into Employee values(100,'Deba','Mishra','debabrat@gmail.com','9935621455','2006-04-26',56000,150,12);
insert into Employee values(110,'Stella','Goth','stellina@gmail.com','9415621455','2010-07-16',68000,151,12);
insert into Employee values(120,'Steve','Harvey','steve@gmail.com','9455624455','2013-05-30',74000,152,13);
insert into Employee values(130,'Mona','Chandler','monica@gmail.com','9935624515','2006-04-26',46000,153,13);
insert into Employee values(140,'Raj','Mishra','raj@gmail.com','9541203156','2021-04-01',41000,154,15);
insert into Employee values(160,'Rahul','Dravid','dravid@gmail.com','9541451245','2008-11-05',45000,155,13);

select First_Name,Last_Name from Employee where Salary>(select Salary from Employee where EmpID=130); 

select First_Name,Last_Name from Employee where Salary in (select min(Salary) from Employee group by DeptID); -- Selecting the employee having the minimum salary from their respective departments

select EmpID,First_Name,Last_Name from Employee where Salary>(select avg(Salary) from Employee); -- Finding out the details of employees having salary more than the average salary

select DeptID,First_Name,EmpID from Employee where EmpID in (select EmpID from Employee where DeptID=13);

select * from Employee where EmpID in (select EmpID from Employee where Salary>3000 and EmpID=120);

select * from Employee where EmpID in (select EmpID from Employee where EmpID in (120,130,150));

select * from Employee where EmpID in (select EmpID from Employee where Salary>=10000 and Salary <=50000);

select * from Employee where Salary between (select min(Salary) from Employee) and 50000;

select * from Employee where Salary in (select Salary from Employee where MgrID not between 150 and 152);

select * from Employee where max(Salary) in (select Salary from Employee where Salary not in (select max(Salary) from Employee));

select First_Name,Last_Name,Hire_Date from Employee where First_Name not in (select First_Name from Employee where First_Name = 'Mona' ) and DeptID=13;

select EmpID ,First_Name,Last_Name from Employee where First_Name in (select First_Name from Employee where First_Name like 'R%');


desc Employee;