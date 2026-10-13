package s4;

import l4.v;

/* loaded from: classes.dex */
public final class i implements b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f17775b;

    /* renamed from: c, reason: collision with root package name */
    public final r4.b f17776c;

    /* renamed from: d, reason: collision with root package name */
    public final r4.e f17777d;

    /* renamed from: e, reason: collision with root package name */
    public final r4.b f17778e;

    /* renamed from: f, reason: collision with root package name */
    public final r4.b f17779f;

    /* renamed from: g, reason: collision with root package name */
    public final r4.b f17780g;

    /* renamed from: h, reason: collision with root package name */
    public final r4.b f17781h;

    /* renamed from: i, reason: collision with root package name */
    public final r4.b f17782i;
    public final boolean j;
    public final boolean k;

    public i(String str, int i5, r4.b bVar, r4.e eVar, r4.b bVar2, r4.b bVar3, r4.b bVar4, r4.b bVar5, r4.b bVar6, boolean z5, boolean z6) {
        this.a = str;
        this.f17775b = i5;
        this.f17776c = bVar;
        this.f17777d = eVar;
        this.f17778e = bVar2;
        this.f17779f = bVar3;
        this.f17780g = bVar4;
        this.f17781h = bVar5;
        this.f17782i = bVar6;
        this.j = z5;
        this.k = z6;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        return new n4.n(vVar, bVar, this);
    }
}
