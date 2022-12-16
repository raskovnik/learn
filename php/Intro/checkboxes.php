<!DOCTYPE html>
<html lang="en">
    <head>
        <title></title>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <link href="css/style.css" rel="stylesheet">
    </head>
    <body>
    <form action="checkboxes.php" method="POST">
        Apples: <input type="checkbox" name="fruits[]" value="apples"><br>
        Oranges: <input type="checkbox" name="fruits[]" value="oranges"><br>
        Pears: <input type="checkbox" name="fruits[]" value="pears"><br>
        <input type="submit">
    </form>
    <?php
    $fruits = $_POST["fruits"];
    echo $fruits[0];
    ?>
    </body>
</html>