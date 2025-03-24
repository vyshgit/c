<?php
$servername="localhost";
$dbname="mydb";
$username="root";
$password="";
$conn=mysqli_connect($servername,$username,$password,$dbname);

if(!$conn)
{
    print("Connection failed".mysqli_connect_error());
}
$sql="SELECT * FROM student order by MARKS ASC";
$result=mysqli_query($conn,$sql);
echo"<h2>Students and Marks</h2>";
echo"<table border='1px' cellspacing='0' cellpadding='3px'>
<tr><th>ID</th><th>NAME</th><th>MARK</th></tr>";
while($row=mysqli_fetch_assoc($result))
{
    echo"<tr><td>{$row['ID']}</td><td>{$row['na']}</td><td>{$row['MARKS']}</td></tr>";
}
echo"</table>";
?>