package s3;

import a3.e;
import android.graphics.Rect;
import k0.d;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class a {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f17746b;

    /* renamed from: c, reason: collision with root package name */
    public final int f17747c;

    /* renamed from: d, reason: collision with root package name */
    public final int f17748d;

    static {
        new a(0, 0, 0, 0);
    }

    public a(int i5, int i6, int i10, int i11) {
        this.a = i5;
        this.f17746b = i6;
        this.f17747c = i10;
        this.f17748d = i11;
        if (i5 > i10) {
            throw new IllegalArgumentException(e.f(i5, i10, "Left must be less than or equal to right, left: ", ", right: ").toString());
        }
        if (i6 > i11) {
            throw new IllegalArgumentException(e.f(i6, i11, "top must be less than or equal to bottom, top: ", ", bottom: ").toString());
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(a.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type androidx.window.core.Bounds");
        a aVar = (a) obj;
        return this.a == aVar.a && this.f17746b == aVar.f17746b && this.f17747c == aVar.f17747c && this.f17748d == aVar.f17748d;
    }

    public final int hashCode() {
        return (((((this.a * 31) + this.f17746b) * 31) + this.f17747c) * 31) + this.f17748d;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(a.class.getSimpleName());
        sb2.append(" { [");
        sb2.append(this.a);
        sb2.append(',');
        sb2.append(this.f17746b);
        sb2.append(',');
        sb2.append(this.f17747c);
        sb2.append(',');
        return d.m(sb2, this.f17748d, "] }");
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public a(Rect rect) {
        this(rect.left, rect.top, rect.right, rect.bottom);
        Intrinsics.checkNotNullParameter(rect, "rect");
    }
}
