<?php

$number=readline();
$serie =explode(' ' ,readline());

$flag=0;
for($i=0 ;$i<$number;++$i){
    if($i+1!=$serie[$i])++$flag;
}

if($flag==2)echo "YES";
else echo "NO";
