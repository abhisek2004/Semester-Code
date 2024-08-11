select abs(-69) as  output from dual;

select exp(69) as output from dual;

select mod(69,5) as output from dual;

select mod(-69,5) as output from dual;	

select pow(4,2) as output from dual; -- pow() is not available for live sql, instead use power() in live sql

select round(6.26454,2) as output from dual;
select round(450.0052,-2) as output from dual;
select round(420.0052,-2) as output from dual;
select round(450.0052,2) as output from dual;
select round(12566.02014,-2) as output from dual;
select round(12566.02014,	3) as output from dual;

select truncate(65.2662,2) as output from dual; -- truncate() is not working in livesql ,but trunc() does

select round(sqrt(45),2)as output from dual; 		
select sqrt(-45) as output from dual; 	

select char(65) as output from dual;	
select to_number(dfad) as output from dual;	-- it is not working in mysql

select concat('Raja',' Mishra') as output from dual;  -- concatenates the string given in the parameters.

select lpad('GIETU',15,'*') as output from dual; -- the first parameter is written after the third parameter and the total size of the output depends on the value mentioned in the second parameter

select rpad('GIETU',15,'*') as output from dual;
select rpad('Raja',6,'Mishra') as output from dual;

select trim('          sdifin   sdon sso s so sos so so ') as output from dual; -- removes spaces from starting and ending.

select ltrim('          Giet University ') as output from dual;
select rtrim('        Giet University                ') as output from dual;
select lower('Raja Mishra') as output from dual; -- converts all upper case characters in the string to lower case characters

select upper('Raja Mishra') as output from dual; -- converts all lower case characters in the string to upper case characters

select length('Raja Mishra') as output from dual; -- returns the lenth of the string which is passed inside the lenght() function

select substr('Raja Mishra',4,9) as output from dual; -- substr() takes 3 paramters, the string ,the starting index and the ending index.

select substr('GIET University',-6) as output from dual; -- substr () takes 3 paramters , the string, the starting index and the ending index

select instr('Raja Mishra','Mishra') as output from dual; -- returns the starting poszition of the substring if it is there

select instr('good morning morning','mo') as output from dual;

select replace('GIET University','GIET','Global') as output from dual; -- it takes three parameters , the first takes the string, the second takes the substring, and the third takes the substring to which the first string is to be replaced

--  Questions --

select pow(7,5) as output from dual;

select replace('GIETU','U',' University') as output from dual;

select round(56422,-2) as	 output from dual;