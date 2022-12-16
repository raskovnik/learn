<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="madlibs.php" method="GET">
        Color: <input type="text" name="color"> <br>
        noun: <input type="text" name="noun"> <br>
        celeb: <input type="text" name="celeb"> <br>
        <input type="submit">
        
    </form>
    <br><br>

    <?php
    $color = $_GET["color"];
    $noun = $_GET["noun"];
    $celeb = $_GET["celeb"];
    echo "Roses are $color<br>";
    echo "$noun are blue<br>";
    echo "I love $celeb <br>";
    ?>

</body>
</html>