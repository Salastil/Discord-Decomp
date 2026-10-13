package gh;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class n extends AnimatorListenerAdapter {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ o f9304b;

    public /* synthetic */ n(o oVar, int i5) {
        this.a = i5;
        this.f9304b = oVar;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationEnd(Animator animator) {
        switch (this.a) {
            case 1:
                super.onAnimationEnd(animator);
                o oVar = this.f9304b;
                super/*android.graphics.drawable.Drawable*/.setVisible(false, false);
                ArrayList arrayList = oVar.f9311y;
                if (arrayList != null && !oVar.E) {
                    Iterator it = arrayList.iterator();
                    while (it.hasNext()) {
                        ((c) it.next()).a(oVar);
                    }
                    break;
                }
                break;
            default:
                super.onAnimationEnd(animator);
                break;
        }
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationStart(Animator animator) {
        switch (this.a) {
            case 0:
                super.onAnimationStart(animator);
                o oVar = this.f9304b;
                ArrayList arrayList = oVar.f9311y;
                if (arrayList != null && !oVar.E) {
                    Iterator it = arrayList.iterator();
                    while (it.hasNext()) {
                        ((c) it.next()).b(oVar);
                    }
                    break;
                }
                break;
            default:
                super.onAnimationStart(animator);
                break;
        }
    }
}
