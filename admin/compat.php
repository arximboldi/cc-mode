<!-- -*- html -*- -->
<?php
  $title = "Compatibility Notes";
  include ("header.h");
?>

<p>CC Mode should work out of the box with Emacs &gt;= 23.1, and
XEmacs &gt;= 21.4.  It has been tested on Emacs 22.3 and 23.3, and XEmacs
  21.4.24 and 21.5.34.  It may well work on earlier versions. 

<p>If you're using very old versions of Emacs or XEmacs, then the
file <code>cc-fix.el(c)</code> may be needed and will be loaded automatically.
It corrects for some bugs in those versions, and also contains compatibility
glue for missing functions in older versions. <code>cc-fix.el(c)</code> is not
needed for later versions.

<?php include ("footer.h"); ?>
