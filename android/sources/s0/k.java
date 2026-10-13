package s0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class k extends p {
    @Override // s0.e
    public final void a(e eVar) {
        r0.a aVar = (r0.a) this.f17727b;
        int i5 = aVar.f17059r0;
        g gVar = this.f17733h;
        Iterator it = gVar.f17718l.iterator();
        int i6 = 0;
        int i10 = -1;
        while (it.hasNext()) {
            int i11 = ((g) it.next()).f17715g;
            if (i10 == -1 || i11 < i10) {
                i10 = i11;
            }
            if (i6 < i11) {
                i6 = i11;
            }
        }
        if (i5 == 0 || i5 == 2) {
            gVar.d(i10 + aVar.f17061t0);
        } else {
            gVar.d(i6 + aVar.f17061t0);
        }
    }

    @Override // s0.p
    public final void d() {
        ConstraintWidget constraintWidget = this.f17727b;
        if (constraintWidget instanceof r0.a) {
            g gVar = this.f17733h;
            gVar.f17710b = true;
            ArrayList arrayList = gVar.f17718l;
            r0.a aVar = (r0.a) constraintWidget;
            int i5 = aVar.f17059r0;
            boolean z5 = aVar.f17060s0;
            int i6 = 0;
            if (i5 == 0) {
                gVar.f17713e = 4;
                while (i6 < aVar.f17117q0) {
                    ConstraintWidget constraintWidget2 = aVar.f17116p0[i6];
                    if (z5 || constraintWidget2.f1230f0 != 8) {
                        g gVar2 = constraintWidget2.f1225d.f17733h;
                        gVar2.k.add(gVar);
                        arrayList.add(gVar2);
                    }
                    i6++;
                }
                m(this.f17727b.f1225d.f17733h);
                m(this.f17727b.f1225d.f17734i);
                return;
            }
            if (i5 == 1) {
                gVar.f17713e = 5;
                while (i6 < aVar.f17117q0) {
                    ConstraintWidget constraintWidget3 = aVar.f17116p0[i6];
                    if (z5 || constraintWidget3.f1230f0 != 8) {
                        g gVar3 = constraintWidget3.f1225d.f17734i;
                        gVar3.k.add(gVar);
                        arrayList.add(gVar3);
                    }
                    i6++;
                }
                m(this.f17727b.f1225d.f17733h);
                m(this.f17727b.f1225d.f17734i);
                return;
            }
            if (i5 == 2) {
                gVar.f17713e = 6;
                while (i6 < aVar.f17117q0) {
                    ConstraintWidget constraintWidget4 = aVar.f17116p0[i6];
                    if (z5 || constraintWidget4.f1230f0 != 8) {
                        g gVar4 = constraintWidget4.f1227e.f17733h;
                        gVar4.k.add(gVar);
                        arrayList.add(gVar4);
                    }
                    i6++;
                }
                m(this.f17727b.f1227e.f17733h);
                m(this.f17727b.f1227e.f17734i);
                return;
            }
            if (i5 != 3) {
                return;
            }
            gVar.f17713e = 7;
            while (i6 < aVar.f17117q0) {
                ConstraintWidget constraintWidget5 = aVar.f17116p0[i6];
                if (z5 || constraintWidget5.f1230f0 != 8) {
                    g gVar5 = constraintWidget5.f1227e.f17734i;
                    gVar5.k.add(gVar);
                    arrayList.add(gVar5);
                }
                i6++;
            }
            m(this.f17727b.f1227e.f17733h);
            m(this.f17727b.f1227e.f17734i);
        }
    }

    @Override // s0.p
    public final void e() {
        ConstraintWidget constraintWidget = this.f17727b;
        if (constraintWidget instanceof r0.a) {
            int i5 = ((r0.a) constraintWidget).f17059r0;
            g gVar = this.f17733h;
            if (i5 == 0 || i5 == 1) {
                constraintWidget.X = gVar.f17715g;
            } else {
                constraintWidget.Y = gVar.f17715g;
            }
        }
    }

    @Override // s0.p
    public final void f() {
        this.f17728c = null;
        this.f17733h.c();
    }

    @Override // s0.p
    public final boolean k() {
        return false;
    }

    public final void m(g gVar) {
        g gVar2 = this.f17733h;
        gVar2.k.add(gVar);
        gVar.f17718l.add(gVar2);
    }
}
