package fi;

import java.util.Comparator;

/* loaded from: classes3.dex */
public final class v extends x {
    public static x f(int i5) {
        return i5 < 0 ? x.f8735b : i5 > 0 ? x.f8736c : x.a;
    }

    @Override // fi.x
    public final x a(int i5, int i6) {
        return f(i5 < i6 ? -1 : i5 > i6 ? 1 : 0);
    }

    @Override // fi.x
    public final x b(Object obj, Object obj2, Comparator comparator) {
        return f(comparator.compare(obj, obj2));
    }

    @Override // fi.x
    public final x c(boolean z5, boolean z6) {
        return f(z5 == z6 ? 0 : z5 ? 1 : -1);
    }

    @Override // fi.x
    public final x d(boolean z5, boolean z6) {
        return f(z6 == z5 ? 0 : z6 ? 1 : -1);
    }

    @Override // fi.x
    public final int e() {
        return 0;
    }
}
