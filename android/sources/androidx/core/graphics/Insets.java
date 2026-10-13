package androidx.core.graphics;

import ah.d;
import com.discord.chat.bridge.botuikit.a;

/* loaded from: classes.dex */
public final class Insets {

    /* renamed from: e, reason: collision with root package name */
    public static final Insets f1511e = new Insets(0, 0, 0, 0);
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f1512b;

    /* renamed from: c, reason: collision with root package name */
    public final int f1513c;

    /* renamed from: d, reason: collision with root package name */
    public final int f1514d;

    public Insets(int i5, int i6, int i10, int i11) {
        this.a = i5;
        this.f1512b = i6;
        this.f1513c = i10;
        this.f1514d = i11;
    }

    public static Insets a(Insets insets, Insets insets2) {
        return b(Math.max(insets.a, insets2.a), Math.max(insets.f1512b, insets2.f1512b), Math.max(insets.f1513c, insets2.f1513c), Math.max(insets.f1514d, insets2.f1514d));
    }

    public static Insets b(int i5, int i6, int i10, int i11) {
        return (i5 == 0 && i6 == 0 && i10 == 0 && i11 == 0) ? f1511e : new Insets(i5, i6, i10, i11);
    }

    public static Insets c(android.graphics.Insets insets) {
        int i5;
        int i6;
        int i10;
        int i11;
        i5 = insets.left;
        i6 = insets.top;
        i10 = insets.right;
        i11 = insets.bottom;
        return b(i5, i6, i10, i11);
    }

    public final android.graphics.Insets d() {
        return d.i(this.a, this.f1512b, this.f1513c, this.f1514d);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || Insets.class != obj.getClass()) {
            return false;
        }
        Insets insets = (Insets) obj;
        return this.f1514d == insets.f1514d && this.a == insets.a && this.f1513c == insets.f1513c && this.f1512b == insets.f1512b;
    }

    public final int hashCode() {
        return (((((this.a * 31) + this.f1512b) * 31) + this.f1513c) * 31) + this.f1514d;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Insets{left=");
        sb2.append(this.a);
        sb2.append(", top=");
        sb2.append(this.f1512b);
        sb2.append(", right=");
        sb2.append(this.f1513c);
        sb2.append(", bottom=");
        return a.i(sb2, this.f1514d, '}');
    }
}
