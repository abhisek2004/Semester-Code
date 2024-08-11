create table student(RollNo Number(3),Name Varchar2(20),City Varchar2(15),Mark Number(3));

insert into student values(152,'Debabrata ','Paradeep',89);
insert into student values(140,'Madara ','Delhi',45);
insert into student values(14,'Naruto ','Kolkata',9);
insert into student values(10,'Monkey D','Bhubaneswar',100);
insert into student values(70,'Ash','Mumbai',78);
insert into student values(79,'Ashley','Navi Mumbai',89);	

select * from student where Name like 'A%' and mark>80; --display information of students whose name starts from A and mark>80


select RollNo,Name from student where City='Bhubaneswar' or mark>=90; --display RollNO and name of students having city 'bbsr' or mark>=90 

select * from student where City not like 'Bhubaneswar'; --Display Name of students not belong to 'BBSR'

select RollNo,Name from student where RollNo not like 70 and RollNo not like 10; --Display Roll and Name of students except roll 70 and 10
select * from student where Mark between 60 and 80; -- Display information of studnets where makrs in between 60 and 80

select RollNo,Name,Mark from student where Mark not between 60 and 80;  -- display rollno,name and mark of studnets except marks between 60 and 70

select RollNo,Name from student where RollNo not between 50 and 100;

select RollNo, Name from student where  RollNo in  (70,10); -- 

select RollNo, Name from student where  RollNo  not in  (70,10);

select RollNo, Name from student where  Mark not in  (80,90);

select * from student where City is null; -- display information of studnets where  city is null

select * from student where City is not null; -- display information of students where city is not null

select Name from student where Name like '_A%'; -- display name of students having second letter "A"

select Name from student where Name like '%MAN%';  -- display roll no and name of students where the name contains the name contains the parttern 'A\

select Name from student where Name like '%P%'; -- display rollno and name of students where name contains a letter "P"
-- Comparison operators

select * from student where Mark > 90;

select RollNo , Name ,Mark from student where Mark <> 80;

select Name from student where Mark = 88;
	
-- New table creation

	create table Employee(EmpID int,Ename varchar(30),DeptName varchar(30));

	create table Dept(DeptID int,DeptName varchar(30));

	insert into Employee values(784,'Madara','Mech');
	insert into Employee values(710,'Joyboy','CSE');
	insert into Employee values(875,'Musashi','CSE');
	insert into Employee values(451,'Naruto','Mech');

	insert into Dept values(005,'Mech');
	insert into Dept values(004,'CSE');

	SELECT 
		DeptName
	FROM
		Employee 
	UNION all SELECT 
		DeptID
	FROM
		Dept;

		select Ename from Employee intersect select DeptID from Dept; -- also not working in mysql (it can work for sql only)

	select EmpID from Employee minus  select DeptID from Dept; -- not working in mysql workbench (it can work for sql only)