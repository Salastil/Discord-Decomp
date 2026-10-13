package androidx.lifecycle;

import android.app.Activity;
import androidx.lifecycle.n0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class m0 {
    public static void a(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        activity.registerActivityLifecycleCallbacks(new n0.a());
    }
}
