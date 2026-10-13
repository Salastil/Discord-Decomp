package ym;

/* loaded from: classes3.dex */
public final /* synthetic */ class f {
    public final /* synthetic */ h a;

    public /* synthetic */ f(h hVar) {
        this.a = hVar;
    }

    public final void a(zm.g gVar, zm.h hVar) {
        h hVar2 = this.a;
        zm.g gVar2 = hVar2.W;
        if (gVar2 != null) {
            ((zm.c) gVar2).setConfigurationObserver(null);
        }
        hVar2.W = gVar;
        hVar2.a0 = hVar;
        if (gVar != null) {
            ((zm.c) gVar).setConfigurationObserver(hVar2.f20969b0);
            hVar2.w(gVar);
        } else {
            hVar2.y();
            hVar2.x();
            hVar2.requestLayout();
        }
    }
}
