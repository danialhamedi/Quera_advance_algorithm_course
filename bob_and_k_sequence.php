<?php

[$serieLength ,$step]=explode(' ',readline());
$serieLength=(int) $serieLength;
$step=(int) $step;

$serie =explode(' ',readline());

for($i=0 ;$i<$serieLength;++$i){
    $serie[$i]=(int)$serie[$i];
}

$smallest=0;
for($i=-100000;$i<=100000 ;++$i){
    $steps=0;
    for($j=0;$j<$serieLength ;++$j){
        $steps+=abs(($i+$step*($j-1))-$serie[$j]);
    }
    if($i==-100000)$smallest=$steps;
    else{
        if($smallest>$steps)$smallest=$steps;
        else break;
    }
}

echo $smallest;
