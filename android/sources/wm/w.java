package wm;

import android.animation.AnimatorSet;
import android.animation.ValueAnimator;
import android.content.DialogInterface;
import android.util.Log;
import android.view.View;
import android.widget.FrameLayout;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.discord.R;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class w {
    public final m a;

    /* renamed from: b, reason: collision with root package name */
    public final View f19947b;

    /* renamed from: c, reason: collision with root package name */
    public final hc.b f19948c;

    /* renamed from: d, reason: collision with root package name */
    public final h8.a f19949d;

    /* renamed from: e, reason: collision with root package name */
    public r f19950e;

    /* renamed from: f, reason: collision with root package name */
    public x f19951f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f19952g;

    /* renamed from: h, reason: collision with root package name */
    public final qa.t f19953h;

    /* renamed from: i, reason: collision with root package name */
    public AnimatorSet f19954i;
    public final k2.r j;

    public w(m dialog, FrameLayout frameLayout, hc.b dimmingManager, h8.a onNativeDismiss) {
        Intrinsics.checkNotNullParameter(dialog, "dialog");
        Intrinsics.checkNotNullParameter(dimmingManager, "dimmingManager");
        Intrinsics.checkNotNullParameter(onNativeDismiss, "onNativeDismiss");
        this.a = dialog;
        this.f19947b = frameLayout;
        this.f19948c = dimmingManager;
        this.f19949d = onNativeDismiss;
        this.f19951f = x.f19955d;
        this.f19953h = new qa.t(dimmingManager);
        this.j = new k2.r(dialog, dimmingManager, new h8.a(15, this));
    }

    public final void a() {
        boolean z5 = this.f19952g;
        m mVar = this.a;
        if (z5) {
            if (this.f19951f != x.f19955d) {
                return;
            }
            this.f19951f = x.f19958v;
            r rVar = this.f19950e;
            if (rVar != null) {
                rVar.c();
            }
            mVar.setOnShowListener(new DialogInterface.OnShowListener() { // from class: wm.u
                @Override // android.content.DialogInterface.OnShowListener
                public final void onShow(DialogInterface dialogInterface) {
                    w wVar = w.this;
                    wVar.a.setOnShowListener(null);
                    hc.b bVar = wVar.f19948c;
                    vm.a aVar = (vm.a) bVar.f9625c;
                    m mVar2 = (m) bVar.a;
                    CoordinatorLayout coordinatorLayout = (CoordinatorLayout) mVar2.findViewById(R.id.coordinator);
                    View findViewById = mVar2.findViewById(R.id.design_bottom_sheet);
                    if (coordinatorLayout != null && aVar.getParent() == null && findViewById != null) {
                        int indexOfChild = coordinatorLayout.indexOfChild(findViewById);
                        if (indexOfChild >= 0) {
                            coordinatorLayout.addView(aVar, indexOfChild);
                        } else {
                            Log.e("DimmingViewManager", "[RNScreens] BottomSheetView not found! Falling back to bottom index.");
                            coordinatorLayout.addView(aVar, 0);
                        }
                    }
                    View view = wVar.f19947b;
                    if (view == null) {
                        if (wVar.f19951f == x.f19958v) {
                            wVar.f19951f = x.f19957i;
                            r rVar2 = wVar.f19950e;
                            if (rVar2 != null) {
                                rVar2.b();
                            }
                            wVar.a();
                            return;
                        }
                        return;
                    }
                    AnimatorSet animatorSet = wVar.f19954i;
                    boolean z6 = animatorSet != null && animatorSet.isRunning();
                    AnimatorSet animatorSet2 = wVar.f19954i;
                    if (animatorSet2 != null) {
                        animatorSet2.removeAllListeners();
                    }
                    AnimatorSet animatorSet3 = wVar.f19954i;
                    if (animatorSet3 != null) {
                        animatorSet3.cancel();
                    }
                    bVar.f9624b = true;
                    qa.t tVar = wVar.f19953h;
                    hc.b bVar2 = (hc.b) tVar.f16718e;
                    Intrinsics.checkNotNullParameter(view, "view");
                    float translationY = z6 ? view.getTranslationY() : view.getHeight();
                    float alpha = z6 ? ((vm.a) bVar2.f9625c).getAlpha() : 0.0f;
                    ValueAnimator ofFloat = ValueAnimator.ofFloat(translationY, 0.0f);
                    ofFloat.addUpdateListener(new com.discord.chat.presentation.list.c(1, view));
                    ValueAnimator ofFloat2 = ValueAnimator.ofFloat(alpha, 0.3f);
                    ofFloat2.addUpdateListener(new a(tVar, 0));
                    AnimatorSet animatorSet4 = new AnimatorSet();
                    animatorSet4.playTogether(ofFloat, ofFloat2);
                    animatorSet4.setDuration(250L);
                    animatorSet4.addListener(new b(view, translationY));
                    animatorSet4.addListener(new v(wVar, animatorSet4, 0));
                    animatorSet4.start();
                    wVar.f19954i = animatorSet4;
                }
            });
            mVar.show();
            return;
        }
        if (this.f19951f != x.f19957i) {
            return;
        }
        x xVar = x.f19956e;
        this.f19951f = xVar;
        r rVar2 = this.f19950e;
        if (rVar2 != null) {
            rVar2.d();
        }
        View view = this.f19947b;
        if (view == null || BottomSheetBehavior.D(view).N == 5) {
            mVar.dismiss();
            if (this.f19951f == xVar) {
                this.f19951f = x.f19955d;
                r rVar3 = this.f19950e;
                if (rVar3 != null) {
                    rVar3.a();
                }
                a();
                return;
            }
            return;
        }
        AnimatorSet animatorSet = this.f19954i;
        int i5 = 1;
        boolean z6 = animatorSet != null && animatorSet.isRunning();
        AnimatorSet animatorSet2 = this.f19954i;
        if (animatorSet2 != null) {
            animatorSet2.removeAllListeners();
        }
        AnimatorSet animatorSet3 = this.f19954i;
        if (animatorSet3 != null) {
            animatorSet3.cancel();
        }
        this.f19948c.f9624b = true;
        qa.t tVar = this.f19953h;
        hc.b bVar = (hc.b) tVar.f16718e;
        Intrinsics.checkNotNullParameter(view, "view");
        float translationY = z6 ? view.getTranslationY() : 0.0f;
        float alpha = z6 ? ((vm.a) bVar.f9625c).getAlpha() : 0.3f;
        ValueAnimator ofFloat = ValueAnimator.ofFloat(translationY, view.getHeight());
        ofFloat.addUpdateListener(new com.discord.chat.presentation.list.c(2, view));
        ValueAnimator ofFloat2 = ValueAnimator.ofFloat(alpha, 0.0f);
        ofFloat2.addUpdateListener(new a(tVar, i5));
        AnimatorSet animatorSet4 = new AnimatorSet();
        animatorSet4.playTogether(ofFloat, ofFloat2);
        animatorSet4.setDuration(250L);
        animatorSet4.addListener(new v(this, animatorSet4, 1));
        animatorSet4.start();
        this.f19954i = animatorSet4;
    }
}
