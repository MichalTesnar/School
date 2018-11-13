<!DOCTYPE html>
<html lang='cs'>
  <head>
    <title>Soutezici Miss 2018</title>
    <meta charset='utf-8'>
    <meta name='description' content=''>
    <meta name='keywords' content=''>
    <meta name='author' content=''>
    <meta name='robots' content='all'>
    <!-- <meta http-equiv='X-UA-Compatible' content='IE=edge'> -->
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.3/umd/popper.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.1.3/js/bootstrap.min.js"></script>
  </head>
  <body>
  
  <div class="jumbotron text-center">
    <h1>Miss 2018</h1>
  </div>
  <div class="container">
  <div class="row">


<?php
$adress = "mysql: host=localhost;dbname=miss2018";
$user = "root";
$password = "";
//server connection

$database = new PDO($adress,$user,$password);
//hlasovani

if(isset($_GET["cislo"])){
  //echo "Davame hlas" .$_GET["cislo"];
  //promenna prikazu s tokenem
  $prikaz="update soutezici set pocethlasu=pocethlasu+1 where id=:idVstup";
  //prepare prikazu - nevzniknou 2 prikazy
  $query = $database->prepare($prikaz);
  //pole tokenu
  $pole[":idVstup"]=$_GET["cislo"];
  //execute toho prikazu
  $query->execute($pole);
}


//query preparation
$query =  $database->prepare("select * from soutezici");
$query->execute();
while($line = $query->fetch()){
  echo "<div>";
  echo "<img src=\"".$line["id"].".jpg\"><br><br>";
  echo $line["jmeno"]." ".$line["prijmeni"]."<br>";
  echo "Pocet hlasu:" .$line["pocethlasu"];
?>

<form action="5-query.php">
<input type="submit" value="vote">
<input type="hidden" name="cislo" value="<?php echo $line["id"];?>">
</form>
<?php
echo "</div>";
 }
?>

</div>
</div>
  </body>
</html>