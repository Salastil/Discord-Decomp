package m3;

import android.view.View;
import androidx.transition.Transition;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class h implements s {
    public final /* synthetic */ View a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ArrayList f14356b;

    public h(View view, ArrayList arrayList) {
        this.a = view;
        this.f14356b = arrayList;
    }

    @Override // m3.s
    public final void onTransitionEnd(Transition transition) {
        transition.D(this);
        this.a.setVisibility(8);
        ArrayList arrayList = this.f14356b;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((View) arrayList.get(i5)).setVisibility(0);
        }
    }

    @Override // m3.s
    public final void onTransitionStart(Transition transition) {
        transition.D(this);
        transition.a(this);
    }

    @Override // m3.s
    public final void onTransitionCancel(Transition transition) {
    }

    @Override // m3.s
    public final void onTransitionPause(Transition transition) {
    }

    @Override // m3.s
    public final void onTransitionResume(Transition transition) {
    }
}
