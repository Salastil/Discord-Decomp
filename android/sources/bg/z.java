package bg;

import java.io.Serializable;

/* loaded from: classes3.dex */
public final class z extends a0 implements Serializable {

    /* renamed from: e, reason: collision with root package name */
    public static final z f3008e = new z(0);

    /* renamed from: i, reason: collision with root package name */
    public static final z f3009i = new z(1);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3010d;

    public /* synthetic */ z(int i5) {
        this.f3010d = i5;
    }

    @Override // bg.a0
    public final a0 b() {
        switch (this.f3010d) {
            case 0:
                return f3009i;
            default:
                return f3008e;
        }
    }

    @Override // java.util.Comparator
    public final /* bridge */ /* synthetic */ int compare(Object obj, Object obj2) {
        switch (this.f3010d) {
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
        switch (this.f3010d) {
            case 0:
                return "Ordering.natural()";
            default:
                return "Ordering.natural().reverse()";
        }
    }
}
