package bd;

import ke.w;
import qc.k;

/* loaded from: classes3.dex */
public final class f {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final long f2806b;

    public /* synthetic */ f(int i5, long j, boolean z5) {
        this.a = i5;
        this.f2806b = j;
    }

    public static f b(k kVar, w wVar) {
        kVar.C(wVar.a, 0, 8);
        wVar.F(0);
        return new f(wVar.g(), wVar.l(), false);
    }

    public boolean a() {
        int i5 = this.a;
        return i5 == 0 || i5 == 1;
    }

    public f(int i5, long j) {
        ke.b.g(j >= 0);
        this.a = i5;
        this.f2806b = j;
    }
}
