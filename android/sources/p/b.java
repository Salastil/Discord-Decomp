package p;

import java.util.Iterator;

/* loaded from: classes.dex */
public final class b extends e implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public c f16246d;

    /* renamed from: e, reason: collision with root package name */
    public c f16247e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f16248i;

    public b(c cVar, c cVar2, int i5) {
        this.f16248i = i5;
        this.f16246d = cVar2;
        this.f16247e = cVar;
    }

    @Override // p.e
    public final void a(c cVar) {
        c cVar2;
        c cVar3 = null;
        if (this.f16246d == cVar && cVar == this.f16247e) {
            this.f16247e = null;
            this.f16246d = null;
        }
        c cVar4 = this.f16246d;
        if (cVar4 == cVar) {
            switch (this.f16248i) {
                case 0:
                    cVar2 = cVar4.f16252v;
                    break;
                default:
                    cVar2 = cVar4.f16251i;
                    break;
            }
            this.f16246d = cVar2;
        }
        c cVar5 = this.f16247e;
        if (cVar5 == cVar) {
            c cVar6 = this.f16246d;
            if (cVar5 != cVar6 && cVar6 != null) {
                cVar3 = b(cVar5);
            }
            this.f16247e = cVar3;
        }
    }

    public final c b(c cVar) {
        switch (this.f16248i) {
            case 0:
                return cVar.f16251i;
            default:
                return cVar.f16252v;
        }
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f16247e != null;
    }

    @Override // java.util.Iterator
    public final Object next() {
        c cVar = this.f16247e;
        c cVar2 = this.f16246d;
        this.f16247e = (cVar == cVar2 || cVar2 == null) ? null : b(cVar);
        return cVar;
    }
}
