create table Employee2(Emp_ID varchar(5),E_name varchar(20),Dept varchar(15),City varchar(15),State varchar(15),Salary Numeric(8,2));
insert into Employee2(Emp_ID ,E_name,Dept,City,State,Salary) values ('232','Abhisek','CSE','Jajpur Road','Odisha',900000);
insert into Employee2(Emp_ID ,E_name,Dept,City,State,Salary) values ('236','Gagan','CSE','Balasore','Odisha',800000);
insert into Employee2(Emp_ID ,E_name,Dept,City,State,Salary) values ('230','Deba','CSE','gunupur','Odisha',700000);
insert into Employee2(Emp_ID ,E_name,Dept,City,State,Salary) values ('238','Abhisek','CSE','Road','Odisha',60000);
insert into Employee2(Emp_ID ,E_name,Dept,City,State,Salary) values ('235','Abhi','CSE','Jajpur','Odisha',50000);
select * from Employee2
select  distinct dept from Employee2
select count (distinct city) from employee2
select * from Employee2 where Emp_ID='235';
select * from Employee2 where State='Odisha' And city='jajpur'
select  distinct Dept from Employee;
select distinct Dept from Employee; -- 1.Display all the departments without repeatition.
select count(distinct City) from Employee; -- 2.Diplay number of cities where the employees are working.
select * from Employee where  Emp_ID='582'; -- 3.Display information of employee having Emp_ID '582:(cause i didnt had "E004")
select * from Employee where State='Odisha' And City='Bhubaneswar'; -- 4.Display information of employees belong to State 'Odisha' and city 'BBSR'
select * from Employee where not City='Bhubaneswar'; -- 5.Display information of employees other than city 'BBSR'
select Emp_ID ,E_name from Employee where Salary>50000; -- 6.Display Emp_ID and E__name and salary of empployees having salary more than 50000
select Emp_ID ,E_name from Employee where Salary>50000 and Salary<80000; -- 7..Display emp_ID and emp_name and salary of employees having salary more than 50000 and less than 80000
select Emp_ID ,E_name from Employee where Salary between 50000 and 80000;  -- 7..Display emp_ID and emp_name and salary of employees having salary more than 50000 and less than 80000
select Emp_ID ,E_name from Employee order by  Salary ; -- 8.Display emp_ID and E_name and salary of employees and salary should be in ascending order.
select Emp_ID ,E_name from Employee order by  Salary desc;  -- for descending order.
select Emp_ID , E_name ,Salary from Employee order by E_name desc; -- 9.Display emp_ID and E_nmae and salary of employees and E_name should be in descending alpahbetical order
select Emp_ID ,E_name from Employee where E_name like 'S%'; -- 10.Display emp_ID and E_name of employees whose name starts from S
select Emp_ID ,E_name from Employee where E_name like 'S_T%'; -- 11.Display Emp_ID and E_name of employees whose name starts from S second letter may be anything and third letter is T.
select Emp_ID ,E_name from Employee where E_name like '%a' or '%A'; -- Display Emp_ID and E_name where E_name ends with A.
select * from Employee where City='Bhubaneswar' or City='Cuttack' or City='Rourkela';
select * from Employee where City in ('Bhubaneswar','Cuttack','Rourkela'); -- Display information of employees having city "BBsr" 'ctc' and 'rkl'
select Emp_ID ,Salary from Employee where Salary < 80000 or Salary > 100000;employee -- Display Emp_ID and Salary of employees having salary of less than 80000 and more than 100000select Emp_ID ,Salary from Employee where Salary < 80000 or Salary > 100000