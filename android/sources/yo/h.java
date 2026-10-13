package yo;

import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class h extends e {

    /* renamed from: w, reason: collision with root package name */
    @NotNull
    public static final g f21004w = new g(null);

    /* renamed from: x, reason: collision with root package name */
    public static final h f21005x = new h(1, 0);

    public h(long j, long j5) {
        super(j, j5, 1L);
    }

    @Override // yo.e
    public final boolean equals(Object obj) {
        if (!(obj instanceof h)) {
            return false;
        }
        if (isEmpty() && ((h) obj).isEmpty()) {
            return true;
        }
        h hVar = (h) obj;
        return this.f20997d == hVar.f20997d && this.f20998e == hVar.f20998e;
    }

    @Override // yo.e
    public final int hashCode() {
        if (isEmpty()) {
            return -1;
        }
        long j = this.f20997d;
        long j5 = 31 * (j ^ (j >>> 32));
        long j7 = this.f20998e;
        return (int) (j5 + (j7 ^ (j7 >>> 32)));
    }

    @Override // yo.e
    public final boolean isEmpty() {
        return this.f20997d > this.f20998e;
    }

    @Override // yo.e
    public final String toString() {
        return this.f20997d + ".." + this.f20998e;
    }
}
