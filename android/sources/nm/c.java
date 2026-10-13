package nm;

import android.animation.ValueAnimator;
import android.view.View;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.swmansion.rnscreens.Screen;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends sg.b {
    public final Screen a;

    /* renamed from: b, reason: collision with root package name */
    public final View f15554b;

    /* renamed from: c, reason: collision with root package name */
    public float f15555c;

    /* renamed from: d, reason: collision with root package name */
    public float f15556d;

    /* renamed from: e, reason: collision with root package name */
    public float f15557e;

    /* renamed from: f, reason: collision with root package name */
    public final ValueAnimator f15558f;

    public c(Screen screen, b viewToAnimate, float f2) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        Intrinsics.checkNotNullParameter(viewToAnimate, "viewToAnimate");
        this.a = screen;
        this.f15554b = viewToAnimate;
        this.f15555c = d(screen.getSheetLargestUndimmedDetentIndex());
        float d6 = d(yo.j.d(screen.getSheetLargestUndimmedDetentIndex() + 1, 0, screen.getSheetDetents().a.size() - 1));
        this.f15556d = d6;
        this.f15557e = d6 - this.f15555c;
        ValueAnimator ofFloat = ValueAnimator.ofFloat(0.0f, f2);
        ofFloat.setDuration(1L);
        ofFloat.addUpdateListener(new am.c(6, this));
        this.f15558f = ofFloat;
    }

    @Override // sg.b
    public final void b(View bottomSheet, float f2) {
        Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
        float f10 = this.f15555c;
        if (f10 >= f2 || f2 >= this.f15556d) {
            return;
        }
        this.f15558f.setCurrentFraction((f2 - f10) / this.f15557e);
    }

    @Override // sg.b
    public final void c(int i5, View bottomSheet) {
        Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
        if (i5 == 1 || i5 == 2) {
            Screen screen = this.a;
            this.f15555c = d(screen.getSheetLargestUndimmedDetentIndex());
            float d6 = d(yo.j.d(screen.getSheetLargestUndimmedDetentIndex() + 1, 0, screen.getSheetDetents().a.size() - 1));
            this.f15556d = d6;
            this.f15557e = d6 - this.f15555c;
        }
    }

    public final float d(int i5) {
        Screen screen = this.a;
        int size = screen.getSheetDetents().a.size();
        if (size == 1) {
            return (i5 == -1 || i5 != 0) ? -1.0f : 1.0f;
        }
        if (size == 2) {
            if (i5 == -1) {
                return -1.0f;
            }
            if (i5 != 0) {
                return i5 != 1 ? -1.0f : 1.0f;
            }
            return 0.0f;
        }
        if (size != 3 || i5 == -1) {
            return -1.0f;
        }
        if (i5 == 0) {
            return 0.0f;
        }
        if (i5 != 1) {
            return i5 != 2 ? -1.0f : 1.0f;
        }
        BottomSheetBehavior<Screen> sheetBehavior = screen.getSheetBehavior();
        Intrinsics.checkNotNull(sheetBehavior);
        return sheetBehavior.F;
    }
}
