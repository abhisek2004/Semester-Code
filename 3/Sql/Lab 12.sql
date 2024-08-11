create table university(uniid number(3) primary key,uniname varchar2(20))
create table contact(cid number(3) primary key,cellno number(5),email varchar2(20),sid number(5))
create table student(sid number(5) primary key, name varchar2(20),gender varchar2(10), uniid number(3))
insert into university values(001,'giet')
insert into university values(101,'ggps')
insert into university values(201,'iitm')
insert into contact values(111,10001,'abhisek@gmail.com',22038)
insert into contact values(222,10002,'deba@gmail.com',22209)
insert into contact values (333,10003,'abhi@gmail.com',22204)
insert into student values(22038,'dipitesh','male',001)
insert into student values(22209,'gobinda','male',201)
insert into student values(22009,'debabrata','female',001)
select university.uniid,university.uniname,student.name from university inner join student on university.uniid=student.uniid where student.gender = 'female'
select university.uniid,university.uniname,student.name from university inner join student on university.uniid=student.uniid where student.gender = 'female'
select university.uniid,university.uniname,student.name from university left outer join student on university.uniid=student.uniid where student.gender = 'female'
select university.uniid,university.uniname,student.name from university right outer join student on university.uniid=student.uniid where student.gender = 'female'
select university.uniid,university.uniname,student.name from university full outer join student on university.uniid=student.uniid where student.gender = 'female'
select student.sid,student.name,contact.cellno,contact.email from student inner join contact on student.sid=contact.sid where student.gender='male'
select student.sid,student.name,contact.cellno,contact.email from student inner join contact on student.sid=contact.sid where student.gender='male'
select student.sid,student.name,contact.cellno,contact.email from student right outer join contact on student.sid=contact.sid where student.gender='male'
select student.sid,student.name,contact.cellno,contact.email from student left outer join contact on student.sid=contact.sid where student.gender='male'
select student.sid,student.name,contact.cellno,contact.email from student full outer join contact on student.sid=contact.sid where student.gender='male'
select student.name,university.uniname,contact.cellno from student inner join contact on student.sid=contact.sid inner join university  on university.uniid=student.uniid
select student.name,contact.cellno,contact.email from student inner join contact on student.sid=contact.sid inner join university on university.uniid=student.uniid where university.uniname='giet'
select student.name,contact.cellno from student full outer join contact on student.sid=contact.sid full outer join university on university.uniid=student.uniid where student.name like 's%'


