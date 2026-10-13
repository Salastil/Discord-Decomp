package fi;

import java.io.Serializable;

/* loaded from: classes3.dex */
public final class p0 extends q0 implements Serializable {

    /* renamed from: e, reason: collision with root package name */
    public static final p0 f8693e = new p0(0);

    /* renamed from: i, reason: collision with root package name */
    public static final p0 f8694i = new p0(1);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8695d;

    public /* synthetic */ p0(int i5) {
        this.f8695d = i5;
    }

    @Override // fi.q0
    public final q0 b() {
        switch (this.f8695d) {
            case 0:
                return f8694i;
            default:
                return f8693e;
        }
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        switch (this.f8695d) {
            case 0:
                Comparable comparable = (Comparable) obj;
                Comparable comparable2 = (Comparable) obj2;
                comparable.getClass();
                comparable2.getClass();
                return comparable.compareTo(comparable2);
            default:
                Comparable comparable3 = (Comparable) obj;
                Comparable comparable4 = (Comparable) obj2;
                comparable3.getClass();
                if (comparable3 == comparable4) {
                    return 0;
                }
                return comparable4.compareTo(comparable3);
        }
    }

    public final String toString() {
        switch (this.f8695d) {
            case 0:
                return "Ordering.natural()";
            default:
                return "Ordering.natural().reverse()";
        }
    }
}
