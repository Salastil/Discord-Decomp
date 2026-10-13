package u;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class i implements kotlin.coroutines.f, v {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ i f18757e = new i(0);

    /* renamed from: i, reason: collision with root package name */
    public static final i f18758i = new i(1);

    /* renamed from: v, reason: collision with root package name */
    public static final i f18759v = new i(2);

    /* renamed from: w, reason: collision with root package name */
    public static final i f18760w = new i(3);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18761d;

    public /* synthetic */ i(int i5) {
        this.f18761d = i5;
    }

    @Override // u.v
    public boolean a(Object obj, Object obj2) {
        switch (this.f18761d) {
            case 1:
                return false;
            case 2:
                return obj == obj2;
            default:
                return Intrinsics.areEqual(obj, obj2);
        }
    }

    public String toString() {
        switch (this.f18761d) {
            case 1:
                return "NeverEqualPolicy";
            case 2:
                return "ReferentialEqualityPolicy";
            case 3:
                return "StructuralEqualityPolicy";
            case 4:
                return "Empty";
            default:
                return super.toString();
        }
    }
}
