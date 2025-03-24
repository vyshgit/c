<?php
$server="localhost";
$user="root";
$pass="";
$dbname="mydb1";
$conn=mysqli_connect($server,$user,$pass);
if(!$conn)
{
    die("Connection failed".mysqli_connect_error());
}
else{
    echo"Connection successfull";

$sql="CREATE DATABASE $dbname";
if(mysqli_query($conn,$sql))
{
    print("<br>Database created.");
}
else
{
    printf("Creation failed".mysqli_error($conn));
}
mysqli_select_db($conn,$dbname);
$tableSql="CREATE table us(n int)";
if(mysqli_query($conn,$tableSql))
{
    echo"<br>Table created";
}
else
{
    echo" failed";
}
}
?>