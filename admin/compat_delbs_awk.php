<!-- -*- html -*- -->
<?php
  $title = "Other Elisp Compatibility";
  $menufiles = array ("links.h", "compatlinks.h");
  include ("header.h");
?>

<h3><code>delbackspace.el</code> and <code>awk-mode</code></h3>

<p>You will encounter problems if you use either the
<code>delbackspace</code> package or <code>awk-mode</code>, since
neither package has been ported to CC Mode 5.  Best known workarounds
are as follows, but since I don't use either of these packages, I
can't completely vouch for them.

<ul>

  <p><li>If you use <code>delbackspace</code>, put the following in
  your <code>.emacs</code> file <em>after</em> you load
  <code>delbackspace.el</code>, but <em>before</em> you load CC Mode:

  <pre>
(setcar (assoc "cc-mode" after-load-alist)
        "cc-langs")</pre>

  <p>Note that <code>delbackspace.el</code> is obsolete as of XEmacs
  20.3, and in fact is no longer distributed with XEmacs, so if you've
  upgraded you should just remove the delbackspace stuff anyway.

  <p><li>If you use <code>awk-mode</code> in older X/Emacsen, you
  might need to make a change to the source code for
  <code>awk-mode.el</code> to look like:

  <pre>
(require 'cc-mode)
(c-initialize-cc-mode)</pre>

  in the <code>awk-mode</code> defun.  This is fixed in current
  versions of Emacs and XEmacs.

</ul>

<?php include ("footer.h"); ?>