package x2;

import android.view.Choreographer;
import android.view.ViewTreeObserver;
import java.lang.reflect.Field;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class b implements ViewTreeObserver.OnPreDrawListener {

    /* renamed from: d, reason: collision with root package name */
    public static final Field f20252d;

    static {
        Field declaredField = Choreographer.class.getDeclaredField("mLastFrameTimeNanos");
        Intrinsics.checkNotNullExpressionValue(declaredField, "Choreographer::class.jav…ld(\"mLastFrameTimeNanos\")");
        f20252d = declaredField;
        declaredField.setAccessible(true);
    }
}
