<!DOCTYPE html>
<html lang="en">
    <head>
        <title></title>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <link href="css/style.css" rel="stylesheet">
    </head>
    <body>
        <form action="calc2.php" method="POST">
            First Num: <input type="number" name="num1"> <br>
            Operator: <input type="text"name="op"><br>
            Second Num: <input type="number" name="num2"><br>
            <input type="submit">
        </form>
        
        <?php
        $num1 = $_POST["num1"];
        $num2 = $_POST["num2"];
        $op = $_POST["op"];

        if ($op == "+") {
            echo $num1 + $num2;
        } else if ($op == "-") {
            echo $num1 - $num2;
        } else if ($op == "/") {
            echo $num1 / $num2;
        } else if ($op == "*") {
            echo $num1 * $num2;
        } else {
            echo "Invalid operator";
        }
        ?>
    </body>
</html> 