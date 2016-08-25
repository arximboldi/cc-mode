<!-- -*- html -*- -->
<?php
  $title = "Changes for CC Mode 5.33";
  $menufiles = array ("links.h", "changelinks.h");
  include ("header.h");
?>

<p>See also the <a href="changes-532.php">user visible changes for
5.32</a>.

<p><a
href="http://prdownloads.sourceforge.net/cc-mode/cc-mode-5.33.tar.gz">Download</a>
this CC Mode version.</p>

<p>This version contains a few new big features,significant internal
improvements, and many bug fixes.

<ul>

   <p><li>Emacs 22 is no longer supported, although CC Mode might well still
   work with it.
       <br>The minimum versions supported are Emacs 23.2 and the latest
   versions of XEmacs 21.4 and XEmacs 21.5.

   <p><li>The obsolete files cc-compat.el and cc-lobotomy.el have been removed.

   <p><li>C++11 should now be fully supported, along with some features of C++14:
       <ul>
         <li>Uniform initialisation
         <li>Lambda functions
         <li>Parameter packs
         <li>Raw strings
         <li>Separators in integer literals
         <li>&quot;&gt;&gt;&quot; as a double template ender
         <li>etc.
       </ul>

   <p><li>Font locking has been accelerated.

   <p><li>"Noise Macros" can be registered, for correct analysis of
   declarations containing them.  These are identifiers, for example macros or
   attributes, possibly with parenthesis lists, which have no effect on the
   syntax of the containing declaration.

   <p><li>It is no longer necessary or desirable to call
   <code>c-make-macro-with-semi-re</code> after setting up the variables
   controlling this feature.

   <p><li>CC Mode now respects the user's setting
   of <code>open-paren-in-column-0-is-defun-start</code> rather than
   overriding it.

   <p><li>Many bugs have been fixed.

<?php include ("footer.h"); ?>
