package s4;

import l4.v;

/* loaded from: classes.dex */
public final class a implements b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final r4.e f17749b;

    /* renamed from: c, reason: collision with root package name */
    public final r4.a f17750c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17751d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f17752e;

    public a(String str, r4.e eVar, r4.a aVar, boolean z5, boolean z6) {
        this.a = str;
        this.f17749b = eVar;
        this.f17750c = aVar;
        this.f17751d = z5;
        this.f17752e = z6;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        return new n4.f(vVar, bVar, this);
    }
}
