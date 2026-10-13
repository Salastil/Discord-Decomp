package com.horcrux.svg;

/* loaded from: classes3.dex */
public final class x1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6450d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Runnable f6451e;

    public /* synthetic */ x1(int i5, Runnable runnable) {
        this.f6450d = i5;
        this.f6451e = runnable;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f6450d) {
            case 0:
                SvgView svgViewByTag = SvgViewManager.getSvgViewByTag(((y1) this.f6451e).f6454d);
                if (svgViewByTag != null) {
                    svgViewByTag.setToDataUrlTask(new x1(2, this));
                    break;
                }
                break;
            case 1:
                y1 y1Var = (y1) this.f6451e;
                SvgViewModule.toDataURL(y1Var.f6454d, y1Var.f6455e, y1Var.f6456i, y1Var.f6457v + 1);
                break;
            default:
                y1 y1Var2 = (y1) ((x1) this.f6451e).f6451e;
                SvgViewModule.toDataURL(y1Var2.f6454d, y1Var2.f6455e, y1Var2.f6456i, y1Var2.f6457v + 1);
                break;
        }
    }
}
