package androidx.fragment.app;

import android.view.ViewGroup;
import androidx.activity.BackEventCompat;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class x1 {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f2119b;

    public boolean a() {
        return this instanceof j;
    }

    public abstract void b(ViewGroup viewGroup);

    public abstract void c(ViewGroup viewGroup);

    public void d(BackEventCompat backEvent, ViewGroup container) {
        Intrinsics.checkNotNullParameter(backEvent, "backEvent");
        Intrinsics.checkNotNullParameter(container, "container");
    }

    public void e(ViewGroup container) {
        Intrinsics.checkNotNullParameter(container, "container");
    }
}
