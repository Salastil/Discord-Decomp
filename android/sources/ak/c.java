package ak;

import jj.l;

/* loaded from: classes3.dex */
public final class c {
    public final nj.b a;

    /* renamed from: b, reason: collision with root package name */
    public final l f654b;

    /* renamed from: c, reason: collision with root package name */
    public final l f655c;

    /* renamed from: d, reason: collision with root package name */
    public final l f656d;

    /* renamed from: e, reason: collision with root package name */
    public final l f657e;

    /* renamed from: f, reason: collision with root package name */
    public final int f658f;

    /* renamed from: g, reason: collision with root package name */
    public final int f659g;

    /* renamed from: h, reason: collision with root package name */
    public final int f660h;

    /* renamed from: i, reason: collision with root package name */
    public final int f661i;

    public c(nj.b bVar, l lVar, l lVar2, l lVar3, l lVar4) {
        boolean z5 = lVar == null || lVar2 == null;
        boolean z6 = lVar3 == null || lVar4 == null;
        if (z5 && z6) {
            throw jj.g.f12795i;
        }
        if (z5) {
            lVar = new l(0.0f, lVar3.f12810b);
            lVar2 = new l(0.0f, lVar4.f12810b);
        } else if (z6) {
            int i5 = bVar.f15510d;
            lVar3 = new l(i5 - 1, lVar.f12810b);
            lVar4 = new l(i5 - 1, lVar2.f12810b);
        }
        this.a = bVar;
        this.f654b = lVar;
        this.f655c = lVar2;
        this.f656d = lVar3;
        this.f657e = lVar4;
        this.f658f = (int) Math.min(lVar.a, lVar2.a);
        this.f659g = (int) Math.max(lVar3.a, lVar4.a);
        this.f660h = (int) Math.min(lVar.f12810b, lVar3.f12810b);
        this.f661i = (int) Math.max(lVar2.f12810b, lVar4.f12810b);
    }

    public c(c cVar) {
        this.a = cVar.a;
        this.f654b = cVar.f654b;
        this.f655c = cVar.f655c;
        this.f656d = cVar.f656d;
        this.f657e = cVar.f657e;
        this.f658f = cVar.f658f;
        this.f659g = cVar.f659g;
        this.f660h = cVar.f660h;
        this.f661i = cVar.f661i;
    }
}
