<!DOCTYPE html>
<html lang='cs'>
  <head>
    <title></title>
    <meta charset='utf-8'>
    <meta name='description' content=''>
    <meta name='keywords' content=''>
    <meta name='author' content=''>
    <meta name='robots' content='all'>
    <!-- <meta http-equiv='X-UA-Compatible' content='IE=edge'> -->
    <link href='/favicon.png' rel='shortcut icon' type='image/png'>
  </head>
  <body>
  <!-- cyklus klasika -->
  <?php
    echo "whatsup";
    
    for($i=1;$i<6;$i++){
      echo "<h$i>";
      echo "NADPIS $i";
      echo "</h$i>";
    }
  ?>
  
  <!-- jsem hnusny -->
  
  <?php
  for($i=1;$i<6;$i++){
  ?>
  
  Ahoj
  
  <?php echo $i
  ?>
  
  <?php
  };
  ?>
  
  <!-- tecka je dulezita -->
  
  <?php
    echo "whatsup";
    
    for($i=1;$i<6;$i++){
      echo "<h$i>"."NADPIS $i"."</h$i>";
    }
  ?>
  
  

  </body>
</html>