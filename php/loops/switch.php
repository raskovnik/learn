<?php
$grade = "A";
switch ($grade) {
    case "A":
        echo "Excellent";
        break;
    case "B":
        echo "Great";
        break;
    case "C":
        echo "Pass";
        break;
    case "D":
        echo "Fail";
        break;
    case "F":
        echo "Supp";
        break;
    default:
        echo "Invalid Grade";
        break;
}
?>