package s4;

import l4.v;

/* loaded from: classes.dex */
public final class j implements b {
    public final /* synthetic */ int a = 1;

    /* renamed from: b, reason: collision with root package name */
    public final String f17783b;

    /* renamed from: c, reason: collision with root package name */
    public final r4.b f17784c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17785d;

    /* renamed from: e, reason: collision with root package name */
    public final r4.e f17786e;

    /* renamed from: f, reason: collision with root package name */
    public final Object f17787f;

    public j(String str, r4.b bVar, r4.b bVar2, r4.d dVar, boolean z5) {
        this.f17783b = str;
        this.f17784c = bVar;
        this.f17786e = bVar2;
        this.f17787f = dVar;
        this.f17785d = z5;
    }

    @Override // s4.b
    public final n4.c a(v vVar, l4.i iVar, t4.b bVar) {
        switch (this.a) {
            case 0:
                return new n4.o(vVar, bVar, this);
            default:
                return new n4.p(vVar, bVar, this);
        }
    }

    public String toString() {
        switch (this.a) {
            case 0:
                return "RectangleShape{position=" + this.f17786e + ", size=" + ((r4.e) this.f17787f) + '}';
            default:
                return super.toString();
        }
    }

    public j(String str, r4.e eVar, r4.a aVar, r4.b bVar, boolean z5) {
        this.f17783b = str;
        this.f17786e = eVar;
        this.f17787f = aVar;
        this.f17784c = bVar;
        this.f17785d = z5;
    }
}
