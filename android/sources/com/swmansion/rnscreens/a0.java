package com.swmansion.rnscreens;

import android.os.Build;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.d1;
import androidx.core.view.m1;
import com.swmansion.rnscreens.bottomsheet.SheetAnimationCoordinator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a0 extends d1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ nm.k f6720d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ b0 f6721e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a0(nm.k kVar, b0 b0Var) {
        super(0);
        this.f6720d = kVar;
        this.f6721e = b0Var;
    }

    @Override // androidx.core.view.d1
    public final void onEnd(m1 animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        if ((animation.a.c() & 8) != 0) {
            Screen screen = this.f6720d.f15571d;
            screen.getSheetAnimationCoordinator$react_native_screens_release().f6722b = Math.max(0, r0.f6722b - 1);
            ScreenFooter footer = screen.getFooter();
            if (footer != null) {
                footer.f6701i = false;
            }
        }
        this.f6721e.a().onSheetYTranslationChanged$react_native_screens_release();
    }

    @Override // androidx.core.view.d1
    public final void onPrepare(m1 animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        super.onPrepare(animation);
        if ((animation.a.c() & 8) != 0) {
            Screen screen = this.f6720d.f15571d;
            SheetAnimationCoordinator sheetAnimationCoordinator$react_native_screens_release = screen.getSheetAnimationCoordinator$react_native_screens_release();
            sheetAnimationCoordinator$react_native_screens_release.f6722b++;
            sheetAnimationCoordinator$react_native_screens_release.d();
            ScreenFooter footer = screen.getFooter();
            if (footer != null) {
                footer.f6701i = true;
            }
        }
    }

    @Override // androidx.core.view.d1
    public final WindowInsetsCompat onProgress(WindowInsetsCompat insets, List runningAnimations) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        Intrinsics.checkNotNullParameter(runningAnimations, "runningAnimations");
        if (Build.VERSION.SDK_INT >= 30) {
            this.f6720d.e(insets);
        }
        return insets;
    }
}
