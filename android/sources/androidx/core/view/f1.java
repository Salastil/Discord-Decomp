package androidx.core.view;

import android.animation.ValueAnimator;
import android.view.View;

/* loaded from: classes.dex */
public final class f1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1586d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f1587e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f1588i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f1589v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f1590w;

    public f1(u4.c cVar, n.c cVar2, n.l lVar, n.j jVar) {
        this.f1590w = cVar;
        this.f1587e = cVar2;
        this.f1588i = lVar;
        this.f1589v = jVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f1586d) {
            case 0:
                h1.h((View) this.f1587e, (m1) this.f1588i, (c1) this.f1589v);
                ((ValueAnimator) this.f1590w).start();
                break;
            default:
                n.d dVar = (n.d) ((u4.c) this.f1590w).f18811d;
                n.l lVar = (n.l) this.f1588i;
                n.c cVar = (n.c) this.f1587e;
                if (cVar != null) {
                    dVar.W = true;
                    cVar.f14624b.c(false);
                    dVar.W = false;
                }
                if (lVar.isEnabled() && lVar.hasSubMenu()) {
                    ((n.j) this.f1589v).q(lVar, null, 4);
                    break;
                }
                break;
        }
    }

    public f1(View view, m1 m1Var, c1 c1Var, ValueAnimator valueAnimator) {
        this.f1587e = view;
        this.f1588i = m1Var;
        this.f1589v = c1Var;
        this.f1590w = valueAnimator;
    }
}
