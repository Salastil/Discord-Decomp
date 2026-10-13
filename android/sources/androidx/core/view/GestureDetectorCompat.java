package androidx.core.view;

import android.content.Context;
import android.os.Handler;
import android.view.GestureDetector;

@Deprecated
/* loaded from: classes.dex */
public final class GestureDetectorCompat {
    public final GestureDetector a;

    public GestureDetectorCompat(Context context, GestureDetector.OnGestureListener onGestureListener) {
        this(context, onGestureListener, null);
    }

    public GestureDetectorCompat(Context context, GestureDetector.OnGestureListener onGestureListener, Handler handler) {
        this.a = new GestureDetector(context, onGestureListener, handler);
    }
}
