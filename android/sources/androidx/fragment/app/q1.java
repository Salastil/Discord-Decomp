package androidx.fragment.app;

import android.transition.Transition;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class q1 implements Transition.TransitionListener {
    public final /* synthetic */ Object a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ArrayList f2088b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f2089c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ArrayList f2090d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ s1 f2091e;

    public q1(s1 s1Var, Object obj, ArrayList arrayList, Object obj2, ArrayList arrayList2) {
        this.f2091e = s1Var;
        this.a = obj;
        this.f2088b = arrayList;
        this.f2089c = obj2;
        this.f2090d = arrayList2;
    }

    @Override // android.transition.Transition.TransitionListener
    public final void onTransitionCancel(Transition transition) {
    }

    @Override // android.transition.Transition.TransitionListener
    public final void onTransitionEnd(Transition transition) {
        transition.removeListener(this);
    }

    @Override // android.transition.Transition.TransitionListener
    public final void onTransitionPause(Transition transition) {
    }

    @Override // android.transition.Transition.TransitionListener
    public final void onTransitionResume(Transition transition) {
    }

    @Override // android.transition.Transition.TransitionListener
    public final void onTransitionStart(Transition transition) {
        s1 s1Var = this.f2091e;
        Object obj = this.a;
        if (obj != null) {
            s1Var.A(obj, this.f2088b, null);
        }
        Object obj2 = this.f2089c;
        if (obj2 != null) {
            s1Var.A(obj2, this.f2090d, null);
        }
    }
}
