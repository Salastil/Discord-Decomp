package n4;

import java.util.ArrayList;
import java.util.List;

/* loaded from: classes.dex */
public final class t implements c, o4.a {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f14953b = new ArrayList();

    /* renamed from: c, reason: collision with root package name */
    public final int f14954c;

    /* renamed from: d, reason: collision with root package name */
    public final o4.i f14955d;

    /* renamed from: e, reason: collision with root package name */
    public final o4.i f14956e;

    /* renamed from: f, reason: collision with root package name */
    public final o4.i f14957f;

    public t(t4.b bVar, s4.q qVar) {
        this.a = qVar.f17811e;
        this.f14954c = qVar.a;
        o4.i l02 = qVar.f17808b.l0();
        this.f14955d = l02;
        o4.i l03 = qVar.f17809c.l0();
        this.f14956e = l03;
        o4.i l04 = qVar.f17810d.l0();
        this.f14957f = l04;
        bVar.f(l02);
        bVar.f(l03);
        bVar.f(l04);
        l02.a(this);
        l03.a(this);
        l04.a(this);
    }

    @Override // o4.a
    public final void a() {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f14953b;
            if (i5 >= arrayList.size()) {
                return;
            }
            ((o4.a) arrayList.get(i5)).a();
            i5++;
        }
    }

    public final void c(o4.a aVar) {
        this.f14953b.add(aVar);
    }

    @Override // n4.c
    public final void b(List list, List list2) {
    }
}
