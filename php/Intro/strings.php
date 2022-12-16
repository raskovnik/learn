<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    $phrase = "Hello There";
    echo strtolower($phrase);
    echo ("<br>");
    echo strlen($phrase);
    echo ("<br>");
    echo str_replace("There", "panda", $phrase);
    echo ("<br>");
    echo substr($phrase, 6);
    ?>
</body>
</html>