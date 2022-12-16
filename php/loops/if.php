<?php
$isMale = false;
$isTall = true;
if ($isMale && $isTall) {
    echo "M and or Tall";
} elseif ($isMale || $isTall) {
    echo "F and or Tall";
} else {
    echo "I dunno";
}
?>
