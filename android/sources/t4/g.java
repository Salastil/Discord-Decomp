package t4;

import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.RectF;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import l4.v;
import s4.n;

/* loaded from: classes.dex */
public final class g extends b {
    public final n4.d D;
    public final c E;

    public g(v vVar, e eVar, c cVar, l4.i iVar) {
        super(vVar, eVar);
        this.E = cVar;
        n4.d dVar = new n4.d(vVar, this, new n("__container", eVar.a, false), iVar);
        this.D = dVar;
        List list = Collections.EMPTY_LIST;
        dVar.b(list, list);
    }

    @Override // t4.b, n4.e
    public final void e(RectF rectF, Matrix matrix, boolean z5) {
        super.e(rectF, matrix, z5);
        this.D.e(rectF, this.f18181n, z5);
    }

    @Override // t4.b
    public final void k(Canvas canvas, Matrix matrix, int i5) {
        this.D.g(canvas, matrix, i5);
    }

    @Override // t4.b
    public final r3.g l() {
        r3.g gVar = this.f18183p.f18213w;
        return gVar != null ? gVar : this.E.f18183p.f18213w;
    }

    @Override // t4.b
    public final am.f m() {
        am.f fVar = this.f18183p.f18214x;
        return fVar != null ? fVar : this.E.f18183p.f18214x;
    }

    @Override // t4.b
    public final void q(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
        this.D.d(eVar, i5, arrayList, eVar2);
    }
}
