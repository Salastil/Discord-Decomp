package s0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class o {

    /* renamed from: f, reason: collision with root package name */
    public static int f17722f;
    public ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public int f17723b;

    /* renamed from: c, reason: collision with root package name */
    public int f17724c;

    /* renamed from: d, reason: collision with root package name */
    public ArrayList f17725d;

    /* renamed from: e, reason: collision with root package name */
    public int f17726e;

    public final void a(ArrayList arrayList) {
        int size = this.a.size();
        if (this.f17726e != -1 && size > 0) {
            for (int i5 = 0; i5 < arrayList.size(); i5++) {
                o oVar = (o) arrayList.get(i5);
                if (this.f17726e == oVar.f17723b) {
                    c(this.f17724c, oVar);
                }
            }
        }
        if (size == 0) {
            arrayList.remove(this);
        }
    }

    public final int b(p0.c cVar, int i5) {
        int n6;
        int n10;
        ArrayList arrayList = this.a;
        if (arrayList.size() == 0) {
            return 0;
        }
        ConstraintWidgetContainer constraintWidgetContainer = (ConstraintWidgetContainer) ((ConstraintWidget) arrayList.get(0)).S;
        cVar.t();
        constraintWidgetContainer.b(cVar, false);
        for (int i6 = 0; i6 < arrayList.size(); i6++) {
            ((ConstraintWidget) arrayList.get(i6)).b(cVar, false);
        }
        if (i5 == 0 && constraintWidgetContainer.f1266y0 > 0) {
            r0.h.a(constraintWidgetContainer, cVar, arrayList, 0);
        }
        if (i5 == 1 && constraintWidgetContainer.f1267z0 > 0) {
            r0.h.a(constraintWidgetContainer, cVar, arrayList, 1);
        }
        try {
            cVar.p();
        } catch (Exception e9) {
            e9.printStackTrace();
        }
        this.f17725d = new ArrayList();
        for (int i10 = 0; i10 < arrayList.size(); i10++) {
            ConstraintWidget constraintWidget = (ConstraintWidget) arrayList.get(i10);
            ha.k kVar = new ha.k(17);
            new WeakReference(constraintWidget);
            p0.c.n(constraintWidget.H);
            p0.c.n(constraintWidget.I);
            p0.c.n(constraintWidget.J);
            p0.c.n(constraintWidget.K);
            p0.c.n(constraintWidget.L);
            this.f17725d.add(kVar);
        }
        if (i5 == 0) {
            n6 = p0.c.n(constraintWidgetContainer.H);
            n10 = p0.c.n(constraintWidgetContainer.J);
            cVar.t();
        } else {
            n6 = p0.c.n(constraintWidgetContainer.I);
            n10 = p0.c.n(constraintWidgetContainer.K);
            cVar.t();
        }
        return n10 - n6;
    }

    public final void c(int i5, o oVar) {
        int i6 = oVar.f17723b;
        Iterator it = this.a.iterator();
        while (it.hasNext()) {
            ConstraintWidget constraintWidget = (ConstraintWidget) it.next();
            ArrayList arrayList = oVar.a;
            if (!arrayList.contains(constraintWidget)) {
                arrayList.add(constraintWidget);
            }
            if (i5 == 0) {
                constraintWidget.f1241m0 = i6;
            } else {
                constraintWidget.f1243n0 = i6;
            }
        }
        this.f17726e = i6;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        int i5 = this.f17724c;
        sb2.append(i5 == 0 ? "Horizontal" : i5 == 1 ? "Vertical" : i5 == 2 ? "Both" : "Unknown");
        sb2.append(" [");
        String m5 = k0.d.m(sb2, this.f17723b, "] <");
        Iterator it = this.a.iterator();
        while (it.hasNext()) {
            ConstraintWidget constraintWidget = (ConstraintWidget) it.next();
            StringBuilder p3 = k0.d.p(m5, " ");
            p3.append(constraintWidget.f1232g0);
            m5 = p3.toString();
        }
        return k0.d.k(m5, " >");
    }
}
