package d0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class c {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final long f7350b;

    /* renamed from: c, reason: collision with root package name */
    public final int f7351c;

    public c(String name, long j, int i5) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.a = name;
        this.f7350b = j;
        this.f7351c = i5;
        if (name.length() == 0) {
            throw new IllegalArgumentException("The name of a color space cannot be null and must contain at least 1 character");
        }
        if (i5 < -1 || i5 > 63) {
            throw new IllegalArgumentException("The id must be between -1 and 63");
        }
    }

    public abstract float a(int i5);

    public abstract float b(int i5);

    public boolean c() {
        return false;
    }

    public abstract long d(float f2, float f10, float f11);

    public abstract float e(float f2, float f10, float f11);

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        c cVar = (c) obj;
        if (this.f7351c == cVar.f7351c && Intrinsics.areEqual(this.a, cVar.a)) {
            return b.a(this.f7350b, cVar.f7350b);
        }
        return false;
    }

    public abstract long f(float f2, float f10, float f11, float f12, c cVar);

    public int hashCode() {
        int hashCode = this.a.hashCode() * 31;
        int i5 = b.f7349e;
        return com.discord.chat.bridge.botuikit.a.g(this.f7350b, hashCode, 31) + this.f7351c;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.a);
        sb2.append(" (id=");
        sb2.append(this.f7351c);
        sb2.append(", model=");
        long j = b.a;
        long j5 = this.f7350b;
        sb2.append((Object) (b.a(j5, j) ? "Rgb" : b.a(j5, b.f7346b) ? "Xyz" : b.a(j5, b.f7347c) ? "Lab" : b.a(j5, b.f7348d) ? "Cmyk" : "Unknown"));
        sb2.append(')');
        return sb2.toString();
    }
}
