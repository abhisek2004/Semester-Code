show databases;
use classes;
show tables;
create table customer(CID int(3),Name varchar(20),Country varchar(20),Credit int);

insert into customer values(20,'Raj','India',45670);
insert into customer values(24,'Naveen','Bangladesh',56230);
insert into customer values(35,'Cory','USA',39000);
insert into customer values(21,'Chester','Hungary',12980);
insert into customer values(27,'Ivanovic','Russia',4589);
insert into customer values(26,'Simran','India',3422);
insert into customer values(20,'Neha','UK',45930);
insert into customer values(24,'Musashi','Japan',34000);
insert into customer values(30,'Naruto','Japan',55670);
insert into customer values(32,'Sasuke','Japan',52170);

select * from customer order by credit ;  -- Ascending arrangement of values
select * from customer order by credit desc; -- Descending arrangement of values

select Country,count(CID) from customer group by Country; -- Display name of the country and number of customers belongs to that country

select Country,count(CID) from customer group by Country order by Country; -- Display name of the country and number of customers belongs to that country inalphabetic nameof country

select Country,sum(Credit) from customer group by Country;-- Display name of the country and total credit taken by all it's customer countrywise

select Country,round(avg(Credit),1) Average from customer group by Country; -- Display name of the country an average credit taken by all it's customer countrywise

select Country,sum(Credit) total from customer group by Country order by total desc;

select Country,Name,max(Credit) from customer ;

select Country,count(CID) count from customer group by Country order by count ;


-- 1.Display country and number of customers if a country has 3 or more customers
select Country,count(CID) from customer group by Country having count(CID)>=3; 

-- 2. Display name of the country and credit country wise who has taken credit of more than 1.5 lakhs
select Country,sum(Credit) from customer group by Country having sum(Credit)> 100000;

-- 3. Display country, credit countrywise having credit less than 1 lakh

select Country,sum(Credit) from customer group by Country having sum(Credit)<100000;
-- 4. Display name of  the countries having exactly 1 customer

select Country from customer group by Country having count(CID)=1;