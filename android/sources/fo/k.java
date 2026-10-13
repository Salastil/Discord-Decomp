package fo;

import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class k implements Comparable {

    /* renamed from: w, reason: collision with root package name */
    @NotNull
    public static final j f8819w = new j(null);

    /* renamed from: x, reason: collision with root package name */
    public static final k f8820x = new k(2, 1, 20);

    /* renamed from: d, reason: collision with root package name */
    public final int f8821d;

    /* renamed from: e, reason: collision with root package name */
    public final int f8822e;

    /* renamed from: i, reason: collision with root package name */
    public final int f8823i;

    /* renamed from: v, reason: collision with root package name */
    public final int f8824v;

    public k(int i5, int i6, int i10) {
        this.f8821d = i5;
        this.f8822e = i6;
        this.f8823i = i10;
        if (i5 >= 0 && i5 < 256 && i6 >= 0 && i6 < 256 && i10 >= 0 && i10 < 256) {
            this.f8824v = (i5 << 16) + (i6 << 8) + i10;
            return;
        }
        throw new IllegalArgumentException(("Version components are out of range: " + i5 + '.' + i6 + '.' + i10).toString());
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        k other = (k) obj;
        Intrinsics.checkNotNullParameter(other, "other");
        return this.f8824v - other.f8824v;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        k kVar = obj instanceof k ? (k) obj : null;
        return kVar != null && this.f8824v == kVar.f8824v;
    }

    public final int hashCode() {
        return this.f8824v;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.f8821d);
        sb2.append('.');
        sb2.append(this.f8822e);
        sb2.append('.');
        sb2.append(this.f8823i);
        return sb2.toString();
    }
}
