package androidx.core.view;

import android.view.WindowInsetsAnimationControlListener;
import android.view.WindowInsetsAnimationController;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class h2 implements WindowInsetsAnimationControlListener {
    public gj.c a = null;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ul.a f1600b;

    public h2(ul.a aVar) {
        this.f1600b = aVar;
    }

    public final void onCancelled(WindowInsetsAnimationController windowInsetsAnimationController) {
        this.f1600b.a.x();
    }

    public final void onFinished(WindowInsetsAnimationController windowInsetsAnimationController) {
        gj.c controller = this.a;
        ul.a aVar = this.f1600b;
        aVar.getClass();
        Intrinsics.checkNotNullParameter(controller, "controller");
        aVar.a.x();
    }

    public final void onReady(WindowInsetsAnimationController windowInsetsAnimationController, int i5) {
        gj.c controller = new gj.c(windowInsetsAnimationController);
        this.a = controller;
        ul.a aVar = this.f1600b;
        aVar.getClass();
        Intrinsics.checkNotNullParameter(controller, "controller");
        af.s sVar = aVar.a;
        sVar.f595c = null;
        sVar.f594b = controller;
        Function1 function1 = (Function1) sVar.f596d;
        if (function1 != null) {
            function1.invoke(controller);
        }
        sVar.f596d = null;
    }
}
