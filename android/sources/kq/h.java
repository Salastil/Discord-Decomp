package kq;

import ip.m0;
import ip.r0;
import ip.v;
import java.util.Comparator;

/* loaded from: classes3.dex */
public final class h implements Comparator {

    /* renamed from: e, reason: collision with root package name */
    public static final h f13618e = new h(0);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13619d;

    public /* synthetic */ h(int i5) {
        this.f13619d = i5;
    }

    public static int b(ip.l lVar) {
        if (e.m(lVar)) {
            return 8;
        }
        if (lVar instanceof ip.k) {
            return 7;
        }
        if (lVar instanceof m0) {
            return ((m0) lVar).W() == null ? 6 : 5;
        }
        if (lVar instanceof v) {
            return ((v) lVar).W() == null ? 4 : 3;
        }
        if (lVar instanceof ip.f) {
            return 2;
        }
        return lVar instanceof r0 ? 1 : 0;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        Integer valueOf;
        switch (this.f13619d) {
            case 0:
                ip.l lVar = (ip.l) obj;
                ip.l lVar2 = (ip.l) obj2;
                int b10 = b(lVar2) - b(lVar);
                if (b10 != 0) {
                    valueOf = Integer.valueOf(b10);
                } else if (e.m(lVar) && e.m(lVar2)) {
                    valueOf = 0;
                } else {
                    int compareTo = lVar.getName().f10209d.compareTo(lVar2.getName().f10209d);
                    valueOf = compareTo != 0 ? Integer.valueOf(compareTo) : null;
                }
                if (valueOf != null) {
                    return valueOf.intValue();
                }
                return 0;
            default:
                return ho.a.a(oq.e.g((ip.f) obj).a.a, oq.e.g((ip.f) obj2).a.a);
        }
    }
}
