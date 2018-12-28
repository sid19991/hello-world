## :warning: Here we will do Advanced SQL injections also known as Blind SQL:bangbang:
1. First things first you need to invisible therefore open `encrypted.google.com`.
2. Find some vunreble website 
3. Now add `'` character at the end of URL, if this changes the webpage then it means that site is vunreable.
4. Once you have found this vunreable website, then you can remove this `'` character, and add some SQL query like. `order by 1,2,3,4,5,6` at the end of url
  keep increasing this number till you find back the original page.
5. Once you have vunreability at let's say number 8 that means this page is vunrable till column 7.
6. Now replace your query by new query, `UNION SELECT 1,2,3,4,5,6,7`, 7 because this site is vunreable till 7th column.
7. The output will show which section of page was coming from which column.
8. To see the name of column, you can replace any column by `database()`, so now query will look like `UNION SELECT 1,database(),3,4,5,6,7`.
9. Now work with queries, you will see it is even possibble to see usernames and passwords, if you have good command on SQL queries.
