create table student (RollNo int,Name varchar(20),Section varchar(2),Mark int);
use classes;
desc student;

insert into student values(1,'Rajat','D',75);
insert into student values(2,'Stella','E',99);
insert into student values(3,'Peter','C`',54);
insert into student values(4,'Goku','D',69);
insert into student values(5,'Manuel','B',96);
insert into student values(6,'Steyn','A',65);
insert into student values(7,'Abhi','B',90);
insert into student values(8,'Deba','C',79);
insert into student values(9,'Joker','C',79);
insert into student values(10,'Jamini','C',94);

select * from student where Mark in (select Mark from student where Mark>=95); -- Display information of student secured more than equla to 95 marks

select RollNo,Name from student where Mark = (select max(Mark) from student); -- Display Roll and Name of the student secured maximum marks 

select RollNo,Name from student where Mark not in (select min(Mark) from student); -- Display Roll and Name of the student secured more mark than minimum mark

select RollNo,Name from student where Mark in (select Mark from student where Mark%2!=0); -- Display Roll and Name of the student secured odd number of mark.

select RollNo,Name from student where Mark > (select avg(Mark) from student )  and Name in(select Name from student where Name like 'J%'); -- Display Roll and Name of the student secured more than avegrage mark and name starts from J.

select RollNo,Name from student where Mark > (select avg(Mark) from student )  and Name like 'J%';

-- -----Another table creation -- ----

create table student1 (RollNo int,Name varchar(20),Section varchar(2),Mark int);

insert into student1 select * from student where RollNo in (select RollNo from student); -- Copying the contents of student to student1

select * from student1;
truncate table student1;

insert into student1 select * from student where RollNo in (select RollNo from student where RollNo in (2,4)); -- copy the contents of student to student1 whose roll no is either 2 oe 4

with s1 as(select RollNo from student) update student set Mark=Mark-15 where RollNo in(select RollNo from s1); -- You have to use with keyword for creating another table and then use it for updating the values of the table student or student1

select * from student;


with s1 as (select min(Mark) from student) update student set Mark=Mark+(Mark * 0.25) where mark in(select min(Mark) from s1);

with s1 as (select max(Mark) from student) update student set Section='D' where mark in(select max(Mark) from s1);


with s1 as (select avg(Mark) from student) update student set Mark=Mark + 20 where mark <(select avg(Mark) from s1);



with s1 as(select * from student where Mark<50)delete from student where Mark in (select Mark from s1);

with s1 as (select * from student where name like 'J%') delete from student where RollNo in (select RollNo from s1);

