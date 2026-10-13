package m3;

import androidx.transition.Transition;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class v extends u {
    public final /* synthetic */ s.e a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ w f14389b;

    public v(w wVar, s.e eVar) {
        this.f14389b = wVar;
        this.a = eVar;
    }

    @Override // m3.u, m3.s
    public final void onTransitionEnd(Transition transition) {
        ((ArrayList) this.a.get(this.f14389b.f14391e)).remove(transition);
        transition.D(this);
    }
}
