<?php
echo $_POST["name"];
echo $_POST["password"];

if ($_POST["name"]=="Michal" and $_POST["password"]=="ahoj"){
  echo "NICE.";
}
else{
  echo "NOT VERY NICE.";
}
?>