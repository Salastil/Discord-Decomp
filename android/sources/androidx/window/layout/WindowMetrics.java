package androidx.window.layout;

import android.graphics.Rect;
import kotlin.jvm.internal.Intrinsics;
import s3.a;

/* loaded from: classes.dex */
public final class WindowMetrics {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public final float f2560b;

    public WindowMetrics(a _bounds, float f2) {
        Intrinsics.checkNotNullParameter(_bounds, "_bounds");
        this.a = _bounds;
        this.f2560b = f2;
    }

    public final Rect a() {
        a aVar = this.a;
        aVar.getClass();
        return new Rect(aVar.a, aVar.f17746b, aVar.f17747c, aVar.f17748d);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(WindowMetrics.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type androidx.window.layout.WindowMetrics");
        WindowMetrics windowMetrics = (WindowMetrics) obj;
        return Intrinsics.areEqual(this.a, windowMetrics.a) && this.f2560b == windowMetrics.f2560b;
    }

    public final int hashCode() {
        return Float.hashCode(this.f2560b) + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "WindowMetrics(_bounds=" + this.a + ", density=" + this.f2560b + ')';
    }
}
