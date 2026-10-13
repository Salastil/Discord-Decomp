package ge;

import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class h implements hc.g {

    /* renamed from: v, reason: collision with root package name */
    public static final String f9181v;

    /* renamed from: w, reason: collision with root package name */
    public static final String f9182w;

    /* renamed from: x, reason: collision with root package name */
    public static final String f9183x;

    /* renamed from: d, reason: collision with root package name */
    public final int f9184d;

    /* renamed from: e, reason: collision with root package name */
    public final int[] f9185e;

    /* renamed from: i, reason: collision with root package name */
    public final int f9186i;

    static {
        int i5 = d0.a;
        f9181v = Integer.toString(0, 36);
        f9182w = Integer.toString(1, 36);
        f9183x = Integer.toString(2, 36);
    }

    public h(int i5, int i6, int[] iArr) {
        this.f9184d = i5;
        int[] copyOf = Arrays.copyOf(iArr, iArr.length);
        this.f9185e = copyOf;
        this.f9186i = i6;
        Arrays.sort(copyOf);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && h.class == obj.getClass()) {
            h hVar = (h) obj;
            if (this.f9184d == hVar.f9184d && Arrays.equals(this.f9185e, hVar.f9185e) && this.f9186i == hVar.f9186i) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((Arrays.hashCode(this.f9185e) + (this.f9184d * 31)) * 31) + this.f9186i;
    }
}
