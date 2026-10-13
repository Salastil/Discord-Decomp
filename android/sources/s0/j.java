package s0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;

/* loaded from: classes.dex */
public final class j extends p {
    @Override // s0.e
    public final void a(e eVar) {
        g gVar = this.f17733h;
        if (gVar.f17711c && !gVar.j) {
            gVar.d((int) ((((g) gVar.f17718l.get(0)).f17715g * ((r0.f) this.f17727b).f17110p0) + 0.5f));
        }
    }

    @Override // s0.p
    public final void d() {
        ConstraintWidget constraintWidget = this.f17727b;
        r0.f fVar = (r0.f) constraintWidget;
        int i5 = fVar.f17111q0;
        int i6 = fVar.f17112r0;
        int i10 = fVar.f17114t0;
        g gVar = this.f17733h;
        if (i10 == 1) {
            if (i5 != -1) {
                gVar.f17718l.add(constraintWidget.S.f1225d.f17733h);
                this.f17727b.S.f1225d.f17733h.k.add(gVar);
                gVar.f17714f = i5;
            } else if (i6 != -1) {
                gVar.f17718l.add(constraintWidget.S.f1225d.f17734i);
                this.f17727b.S.f1225d.f17734i.k.add(gVar);
                gVar.f17714f = -i6;
            } else {
                gVar.f17710b = true;
                gVar.f17718l.add(constraintWidget.S.f1225d.f17734i);
                this.f17727b.S.f1225d.f17734i.k.add(gVar);
            }
            m(this.f17727b.f1225d.f17733h);
            m(this.f17727b.f1225d.f17734i);
            return;
        }
        if (i5 != -1) {
            gVar.f17718l.add(constraintWidget.S.f1227e.f17733h);
            this.f17727b.S.f1227e.f17733h.k.add(gVar);
            gVar.f17714f = i5;
        } else if (i6 != -1) {
            gVar.f17718l.add(constraintWidget.S.f1227e.f17734i);
            this.f17727b.S.f1227e.f17734i.k.add(gVar);
            gVar.f17714f = -i6;
        } else {
            gVar.f17710b = true;
            gVar.f17718l.add(constraintWidget.S.f1227e.f17734i);
            this.f17727b.S.f1227e.f17734i.k.add(gVar);
        }
        m(this.f17727b.f1227e.f17733h);
        m(this.f17727b.f1227e.f17734i);
    }

    @Override // s0.p
    public final void e() {
        ConstraintWidget constraintWidget = this.f17727b;
        int i5 = ((r0.f) constraintWidget).f17114t0;
        g gVar = this.f17733h;
        if (i5 == 1) {
            constraintWidget.X = gVar.f17715g;
        } else {
            constraintWidget.Y = gVar.f17715g;
        }
    }

    @Override // s0.p
    public final void f() {
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
