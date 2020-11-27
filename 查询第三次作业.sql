/*--1.查询借阅了图书编号为'B200101002'图书的读者姓名、借书日期、还书日期；*/
select Reader.readerName,Reader.readerNO,Borrow.borrowDate,returnDate,Borrow.bookNO
from Reader,Borrow
where Reader.readerNO=Borrow.readerNO and Borrow.bookNO IN (select Borrow.bookNO from Borrow where Borrow.bookNO='B200101002')

/*--2.查询读者张晓梅借阅的图书编号、图书名称、借书日期和归还日期；*/

select Reader.readerName,Book.bookName,Book.bookNO,Borrow.borrowDate,returnDate
from Reader,Borrow,Book
where Book.bookNO=Borrow.bookNO and Borrow.bookNO in(select Borrow.bookNO from Borrow where Borrow.readerNO=Reader.readerNO and Reader.readerNO in (select Reader.readerNO from Reader where Reader.readerName='张晓梅'))

/*--3.查询'洪都股份有限公司'没有归还所借图书的读者编号、读者姓名、图书名称、借书日期和应归还日期*/
select Reader.readerName,Book.bookName,Borrow.borrowDate,Borrow.shouldDate
from Reader,Book,Borrow
where Book.bookNO=Borrow.bookNO and Book.bookNO in (select Book.bookNO from Book where Book.bookNO=Borrow.bookNO and Borrow.readerNO IN (select Borrow.readerNO from Borrow WHERE Borrow.readerNO=Reader.readerNO AND reader.readerNO in(select Reader.readerNO from Reader where Reader.workUnit='洪都股份有限公司')))

/*--4.查询借阅了清华大学出版社出版的图书的读者编号、读者姓名、图书名称、借书日期和归还日期；*/

select Reader.readerNO,Reader.readerName,Book.bookName,Borrow.returnDate,Borrow.borrowDate
from Reader,Book,Borrow
where Reader.readerNO=Borrow.readerNO and Borrow.readerNO in (select Borrow.readerNO from Borrow where Borrow.bookNO=Book.bookNO and Book.bookNO in (select Book.bookNO from Book where Book.publishingName='清华大学出版社'))

/*--5.查询借书时间在2010-2011年之间的读者编号、读者姓名、图书编号、图书名称；*/
select Reader.readerNO,Reader.readerName,Book.bookNO,Book.bookName
from Book,Reader,Borrow
WHERE Book.bookNO=Borrow.bookNO and Borrow.readerNO = Reader.readerNO and Borrow.bookNO in (SELECT Borrow.bookNO from Borrow where year(borrowDate)>=2010 and year(borrowDate)<=2011 ) 

/*--6.查询每种类别的图书分类号、最高价格和平均价格，并按最高价格的降序输出；*/
select max(Book.price),AVG(Book.price)
from Book
GROUP BY Book.classNO
order by MAX(Book.price)  DESC

/*--7.查询分类号小于009号每类图书的入库数量；*/
/*根据(by)一定的规则进行分组(Group)*/
select sum(Book.shopNum) as price_all,Book.classNO 
from Book
group by Book.classNO
having Book.classNO<9

/*--8.查询所借图书的总价在100元以上的读者编号、读者姓名和所借图书的总价；  */
select sum(Book.price),Reader.readerNO,Reader.readerName
from Book,Reader,Borrow
where Borrow.readerNO=Reader.readerNO AND Borrow.bookNO=Book.bookNO
group by Reader.readerNO,Reader.readerName
having sum(Book.price)>100

/*--9.查询没有借书的读者姓名和工作单位(使用IN子查询表达)；*/
select DISTINCT Reader.readerName,Reader.workUnit
from Reader, Borrow
where not exists ( select Borrow.readerNO from Borrow where Borrow.readerNO=Reader.readerNO) 

select DISTINCT Reader.readerName,Reader.workUnit
from Reader
where Reader.readerNO not in  ( select Borrow.readerNO from Borrow ) 
/*--10.查询没有借阅图书编号以'B2001'开头的图书的读者编号、姓名以及他们所借阅图书的图书名称、借书日期（使用IN子查询表达）。*/
select distinct Reader.readerNO,Reader.readerName,Book.bookName,Borrow.borrowDate
from Reader,Book,Borrow
where reader.readerNO=Borrow.readerNO and Borrow.bookNO=Book.bookNO and Borrow.readerNO not in (SELECT Borrow.bookNO from Borrow where Borrow.bookNO like 'B2001%')
/*--11.查询既借阅了"商务英语"图书又借阅了"大学英语"两本图书的读者编号、读者姓名、借书日期和图书名称；*/
select DISTINCT reader.readerNO,reader.readerName,Borrow.borrowDate,Book.bookName
from reader,Borrow,Book
where reader.readerNO=Borrow.readerNO and Borrow.bookNO=Book.bookNO and Book.bookName in (select DISTINCT Book.bookName from Book where Book.bookName in ('商务英语','大学英语'))

/*--12.查询没有借阅"经济类"图书的读者编号、读者姓名（使用IN子查询表达）；*/

select distinct reader.readerNO,reader.readerName
from reader,Borrow,Book
where reader.readerNO=Borrow.readerNO and Borrow.bookNO=Book.bookNO and Book.classNO not in (select Book.classNO FROM Book WHERE Book.classNO='1')

/*--13.查询至少与读者"张晓梅"所借的图书一样的读者编号、读者姓名和工作单位；*/
select distinct Reader.ReaderNO,Reader.ReaderName,Reader.workUnit
from reader,Borrow,Book
where Reader.readerNO=Borrow.readerNO and Book.bookNO=Borrow.bookNO and Borrow.bookNO in (select Borrow.bookNO from Borrow where readerNO in(select Reader.readerNO from reader where reader.readerName='张晓梅'))
/*in (select reader.readerName FROM reader where reader.readerName='张晓梅'))
*/
/*--14.查询借阅了图书类别为002号的所有图书的读者编号、读者姓名以及他们所借阅过的所有图书的图书名称和借阅日期；*/
/*select Reader.readerNO,Reader.readerName,Book.bookName,Borrow.borrowDate
from Borrow,Book,Reader
where Reader.readerNO=Borrow.readerNO and Borrow.bookNO=Book.bookNO and Book.classNO in (select Book.classNO from Book where Book.classNO=2 )*/
SELECT B.readerNo,B.readerName,A.bookName,C.borrowDate
FROM BOOK A,READER B,BORROW C
WHERE A.bookNo=C.bookNO AND B.readerNo=C.readerNO AND B.readerNo IN (   SELECT a.readerNo
                                                                        FROM BORROW a,( SELECT bookNo
                                                                                        FROM BOOK 
                                                                                        WHERE classNo='002') b
                                                                        WHERE a.bookNO=b.bookNo
                                                                        GROUP BY readerNo
                                                                        HAVING  count(a.readerNo)=( SELECT count(bookNo)
                                                                                                    FROM BOOK 
                                                                                                    WHERE classNo='002'))
/*--15.查询至少借阅了3本图书的读者编号、读者姓名、图书编号、图书名称，按读者编号排序输出；*/
/*SELECT TOP number|percent column_name(s)
FROM table_name(TOP语句)*/
SELECT b.readerNo,b.readerName,a.bookNo,a.bookName
FROM Book a,Reader b,Borrow c
WHERE a.bookNo=c.bookNO AND b.readerNo=c.readerNO AND b.readerNo IN (SELECT readerNo FROM borrow GROUP BY readerNo HAVING count(bookNo)>=3) 
ORDER BY b.readerNo ASC
/*--16.查询所借阅的图书总价最高的读者编号、读者姓名和出生日期；*/
SELECT readerNo,readerName,SUBSTRING(identitycard,7,8) AS birthday
FROM Reader
WHERE readerNo IN(  SELECT readerNo
                    FROM Borrow,Book
                    WHERE Borrow.bookNo=Book.bookNo AND returnDate IS NULL
                    GROUP BY readerNo
                    HAVING SUM(price) >=ALL(SELECT SUM(price)
                                            FROM Borrow,Book
                                            WHERE Borrow.bookNo=Book.bookNo AND returnDate IS NULL
                                            GROUP BY readerNo) )

/*--17.将"经济类"图书的单价提高10%；*/
/*子查询中的语句结果有多个值，可以改成in试试*/
UPDATE Book
set Book.price=Book.price*1.1
where  Book.classNO in (select Book.classNO from Book,BookClass where  BookClass.classNO in (select BookClass.classNO from BookClass WHERE BookClass.className in('经济类')))
/*--18.对于年龄在25-35岁之间的读者所借阅的应归还还未归还的图书,将其归还日期修改为系统当天日期;*/
UPDATE Borrow
SET returnDate=getdate()
WHERE returnDate is null AND readerNO IN (SELECT readerNo FROM Reader WHERE (year(getdate())-year(substring(identitycard,7,8))>=25 AND year(getdate())-year(substring(identitycard,7,8))<=35))

SELECT 
*  --查询结果
FROM Borrow,Reader
WHERE borrow.readerNO=reader.readerNo AND (year(getdate())-year(substring(identitycard,7,8))>=25 AND year(getdate())-year(substring(identitycard,7,8))<=35)
