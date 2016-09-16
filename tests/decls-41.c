void foo (void)
{
    Lisp_Object tail, frame;

    FOR_EACH_FRAME (tail, frame)
        {
	    struct frame *fr = XFRAME (frame);
	    if (FRAME_IMAGE_CACHE (fr) == c)
		clear_current_matrices (fr);
        }

    windows_or_buffers_changed = 19;
}
