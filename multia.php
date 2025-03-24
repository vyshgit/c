<?php
$students=array( 
    array("ID"=>1,"NAME"=>" Vi ","BRANCH"=>" CT ","SEMESTER"=>4),
    array("ID"=>2,"NAME"=>" vj ","BRANCH"=>" CT ","SEMESTER"=>4),
    array("ID"=>3,"NAME"=>" vk ","BRANCH"=>" CT ","SEMESTER"=>4)
                
);

for($i=0;$i<3;$i+=1)
{
    echo"ID:".$students[$i]["ID"]."NAME:".$students[$i]["NAME"]."BRANCH:".$students[$i]["BRANCH"]."SEMESTER:".$students[$i]["SEMESTER"]."<br>";
}              

?>  