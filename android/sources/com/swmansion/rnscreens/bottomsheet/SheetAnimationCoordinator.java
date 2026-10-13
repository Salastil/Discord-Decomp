package com.swmansion.rnscreens.bottomsheet;

import android.animation.AnimatorSet;
import android.animation.ValueAnimator;
import android.graphics.Rect;
import androidx.fragment.app.Fragment;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.ScreenContainer;
import com.swmansion.rnscreens.ScreenContentWrapper;
import com.swmansion.rnscreens.b0;
import java.lang.ref.WeakReference;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import nm.k;
import nm.l;
import om.a;
import u4.c;
import yo.j;

/* loaded from: classes3.dex */
public final class SheetAnimationCoordinator {
    public final WeakReference a;

    /* renamed from: b, reason: collision with root package name */
    public int f6722b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f6723c;

    /* renamed from: d, reason: collision with root package name */
    public ValueAnimator f6724d;

    /* renamed from: e, reason: collision with root package name */
    public int f6725e;

    /* renamed from: f, reason: collision with root package name */
    public int f6726f;

    /* renamed from: g, reason: collision with root package name */
    public final Rect f6727g;

    /* renamed from: h, reason: collision with root package name */
    public int f6728h;

    public SheetAnimationCoordinator(Screen screen) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        this.a = new WeakReference(screen);
        this.f6727g = new Rect();
    }

    public static void c(Screen screen, int i5) {
        screen.layout(screen.getLeft(), screen.getBottom() - i5, screen.getRight(), screen.getBottom());
    }

    public final void a(AnimatorSet animatorSet, boolean z5, b0 b0Var) {
        Screen screen = b();
        Intrinsics.checkNotNullParameter(screen, "screen");
        c cVar = new c();
        cVar.f18811d = screen;
        animatorSet.addListener(new om.c(b0Var, cVar, z5 ? a.f16129d : a.f16130e));
        animatorSet.addListener(new androidx.appcompat.widget.c(6, this));
    }

    public final Screen b() {
        Object obj = this.a.get();
        if (obj != null) {
            return (Screen) obj;
        }
        throw new IllegalStateException("[RNScreens] Screen has been destroyed and shouldn't be the subject of any animations");
    }

    public final void d() {
        ScreenContainer container = b().getContainer();
        if (container == null || !container.isLaidOut() || container.getHeight() <= 0) {
            return;
        }
        Rect rect = this.f6727g;
        container.getGlobalVisibleRect(rect);
        this.f6726f = Math.max(0, container.getRootView().getHeight() - rect.bottom);
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0099  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0030  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e(float f2) {
        Integer num;
        int min;
        Screen b10 = b();
        int max = Math.max(0, this.f6725e - this.f6726f);
        float f10 = 0.0f;
        if (max > 0) {
            Fragment fragment = b().getFragment();
            if (fragment != null) {
                Intrinsics.checkNotNullParameter(fragment, "<this>");
                k kVar = ((b0) fragment).P;
                if (kVar != null) {
                    num = kVar.g();
                    if (num != null) {
                        throw new IllegalStateException("[RNScreens] Failed to find window height during bottom sheet behaviour configuration");
                    }
                    if (l.a(b())) {
                        ScreenContentWrapper contentWrapper = b().getContentWrapper();
                        min = Math.min(Math.max(num.intValue() - (contentWrapper != null ? contentWrapper.getHeight() : 0), 0), max);
                    } else {
                        min = Math.min(num.intValue() - ((int) (j.b(((Number) CollectionsKt.Q(b().getSheetDetents().a)).doubleValue(), 0.0d, 1.0d) * num.intValue())), max);
                    }
                    f10 = Math.max(0.0f, min - Math.max(0, this.f6728h - this.f6726f));
                }
            }
            num = null;
            if (num != null) {
            }
        }
        b10.setTranslationY(f2 - f10);
    }
}
