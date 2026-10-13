package m3;

import androidx.transition.Transition;

/* loaded from: classes.dex */
public final class y extends u {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public Transition f14394b;

    public /* synthetic */ y() {
        this.a = 1;
    }

    @Override // m3.u, m3.s
    public void onTransitionCancel(Transition transition) {
        switch (this.a) {
            case 0:
                z zVar = (z) this.f14394b;
                zVar.f14395d0.remove(transition);
                if (!zVar.u()) {
                    zVar.A(zVar, t.f14386m, false);
                    zVar.P = true;
                    zVar.A(zVar, t.f14385l, false);
                    break;
                }
                break;
            default:
                super.onTransitionCancel(transition);
                break;
        }
    }

    @Override // m3.u, m3.s
    public void onTransitionEnd(Transition transition) {
        switch (this.a) {
            case 1:
                z zVar = (z) this.f14394b;
                int i5 = zVar.f14397f0 - 1;
                zVar.f14397f0 = i5;
                if (i5 == 0) {
                    zVar.f14398g0 = false;
                    zVar.n();
                }
                transition.D(this);
                break;
            case 2:
                this.f14394b.G();
                transition.D(this);
                break;
        }
    }

    @Override // m3.u, m3.s
    public void onTransitionStart(Transition transition) {
        switch (this.a) {
            case 1:
                z zVar = (z) this.f14394b;
                if (!zVar.f14398g0) {
                    zVar.O();
                    zVar.f14398g0 = true;
                    break;
                }
                break;
            default:
                super.onTransitionStart(transition);
                break;
        }
    }

    public /* synthetic */ y(Transition transition, int i5) {
        this.a = i5;
        this.f14394b = transition;
    }
}
