<?php 
$students=array("vyshnav"=>100,"v"=>10,"m"=>100);
echo"Displaying all students and their marks<br>";
foreach($students as $x=>$y)
{
    echo"NAME:$x&nbsp&nbspMARK:$y<br>";
}
echo"<br>Displaying a particular student and his mark:<br>";
echo"NAME:v     MARK:$students[v]";
echo"<br>Deleting vyshnav<br>";
unset($students["vyshnav"]);
echo"<br>Adding new student vm<br>";
$students["vm"]=1;

foreach($students as $x=>$y)
{
    echo"NAME:$x&nbsp&nbspMARK:$y<br>";
}
echo"<br>Sorting based on their marks:<br>";
asort($students);
foreach($students as $x=>$y)
{
    echo"NAME:$x&nbsp&nbspMARK:$y<br>";
}
?>
