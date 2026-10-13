package p;

import java.util.Iterator;

/* loaded from: classes.dex */
public final class d extends e implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public c f16253d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f16254e = true;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ f f16255i;

    public d(f fVar) {
        this.f16255i = fVar;
    }

    @Override // p.e
    public final void a(c cVar) {
        c cVar2 = this.f16253d;
        if (cVar == cVar2) {
            c cVar3 = cVar2.f16252v;
            this.f16253d = cVar3;
            this.f16254e = cVar3 == null;
        }
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        if (this.f16254e) {
            return this.f16255i.f16256d != null;
        }
        c cVar = this.f16253d;
        return (cVar == null || cVar.f16251i == null) ? false : true;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (this.f16254e) {
            this.f16254e = false;
            this.f16253d = this.f16255i.f16256d;
        } else {
            c cVar = this.f16253d;
            this.f16253d = cVar != null ? cVar.f16251i : null;
        }
        return this.f16253d;
    }
}
