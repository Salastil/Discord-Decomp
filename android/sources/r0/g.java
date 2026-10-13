package r0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import java.util.ArrayList;
import s0.i;
import s0.o;

/* loaded from: classes.dex */
public abstract class g extends ConstraintWidget {

    /* renamed from: p0, reason: collision with root package name */
    public ConstraintWidget[] f17116p0 = new ConstraintWidget[4];

    /* renamed from: q0, reason: collision with root package name */
    public int f17117q0 = 0;

    public final void M(int i5, ArrayList arrayList, o oVar) {
        for (int i6 = 0; i6 < this.f17117q0; i6++) {
            ConstraintWidget constraintWidget = this.f17116p0[i6];
            ArrayList arrayList2 = oVar.a;
            if (!arrayList2.contains(constraintWidget)) {
                arrayList2.add(constraintWidget);
            }
        }
        for (int i10 = 0; i10 < this.f17117q0; i10++) {
            i.b(this.f17116p0[i10], i5, arrayList, oVar);
        }
    }

    public void N() {
    }
}
