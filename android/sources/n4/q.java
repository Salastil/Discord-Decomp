package n4;

import java.util.List;
import l4.v;

/* loaded from: classes.dex */
public final class q implements o4.a, c {
    public final v a;

    /* renamed from: b, reason: collision with root package name */
    public final o4.e f14940b;

    /* renamed from: c, reason: collision with root package name */
    public s4.l f14941c;

    public q(v vVar, t4.b bVar, s4.k kVar) {
        this.a = vVar;
        o4.e l02 = kVar.a.l0();
        this.f14940b = l02;
        bVar.f(l02);
        l02.a(this);
    }

    public static int c(int i5, int i6) {
        int i10 = i5 / i6;
        if ((i5 ^ i6) < 0 && i10 * i6 != i5) {
            i10--;
        }
        return i5 - (i10 * i6);
    }

    @Override // o4.a
    public final void a() {
        this.a.invalidateSelf();
    }

    @Override // n4.c
    public final void b(List list, List list2) {
    }
}
