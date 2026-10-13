package s0;

import java.util.Iterator;

/* loaded from: classes.dex */
public class h extends g {

    /* renamed from: m, reason: collision with root package name */
    public int f17719m;

    public h(p pVar) {
        super(pVar);
        if (pVar instanceof l) {
            this.f17713e = 2;
        } else {
            this.f17713e = 3;
        }
    }

    @Override // s0.g
    public final void d(int i5) {
        if (this.j) {
            return;
        }
        this.j = true;
        this.f17715g = i5;
        Iterator it = this.k.iterator();
        while (it.hasNext()) {
            e eVar = (e) it.next();
            eVar.a(eVar);
        }
    }
}
