package androidx.activity.result.contract;

import android.content.Context;
import android.content.Intent;
import kotlin.jvm.internal.Intrinsics;
import u4.b;

/* loaded from: classes.dex */
public abstract class ActivityResultContract {
    public abstract Intent a(Context context, Object obj);

    public b b(Context context, Object obj) {
        Intrinsics.checkNotNullParameter(context, "context");
        return null;
    }

    public abstract Object c(int i5, Intent intent);
}
