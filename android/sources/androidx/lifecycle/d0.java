package androidx.lifecycle;

import android.app.Activity;
import androidx.lifecycle.e0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class d0 {
    public static final void a(Activity activity, e0.a callback) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        Intrinsics.checkNotNullParameter(callback, "callback");
        activity.registerActivityLifecycleCallbacks(callback);
    }
}
