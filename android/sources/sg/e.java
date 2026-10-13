package sg;

import android.content.res.ColorStateList;
import android.view.View;
import android.view.Window;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.WindowInsetsControllerCompat;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import lh.i;

/* loaded from: classes3.dex */
public final class e extends b {
    public final Boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final WindowInsetsCompat f18020b;

    /* renamed from: c, reason: collision with root package name */
    public Window f18021c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f18022d;

    public e(View view, WindowInsetsCompat windowInsetsCompat) {
        this.f18020b = windowInsetsCompat;
        i iVar = BottomSheetBehavior.D(view).f5966i;
        ColorStateList backgroundTintList = iVar != null ? iVar.f14001e.f13985d : view.getBackgroundTintList();
        if (backgroundTintList != null) {
            this.a = Boolean.valueOf(com.facebook.imagepipeline.nativecode.c.M(backgroundTintList.getDefaultColor()));
            return;
        }
        ColorStateList b10 = ah.d.b(view.getBackground());
        Integer valueOf = b10 != null ? Integer.valueOf(b10.getDefaultColor()) : null;
        if (valueOf != null) {
            this.a = Boolean.valueOf(com.facebook.imagepipeline.nativecode.c.M(valueOf.intValue()));
        } else {
            this.a = null;
        }
    }

    @Override // sg.b
    public final void a(View view) {
        d(view);
    }

    @Override // sg.b
    public final void b(View view, float f2) {
        d(view);
    }

    @Override // sg.b
    public final void c(int i5, View view) {
        d(view);
    }

    public final void d(View view) {
        int top = view.getTop();
        WindowInsetsCompat windowInsetsCompat = this.f18020b;
        if (top < windowInsetsCompat.d()) {
            Window window = this.f18021c;
            if (window != null) {
                Boolean bool = this.a;
                new WindowInsetsControllerCompat(window, window.getDecorView()).c(bool == null ? this.f18022d : bool.booleanValue());
            }
            view.setPadding(view.getPaddingLeft(), windowInsetsCompat.d() - view.getTop(), view.getPaddingRight(), view.getPaddingBottom());
            return;
        }
        if (view.getTop() != 0) {
            Window window2 = this.f18021c;
            if (window2 != null) {
                new WindowInsetsControllerCompat(window2, window2.getDecorView()).c(this.f18022d);
            }
            view.setPadding(view.getPaddingLeft(), 0, view.getPaddingRight(), view.getPaddingBottom());
        }
    }

    public final void e(Window window) {
        if (this.f18021c == window) {
            return;
        }
        this.f18021c = window;
        if (window != null) {
            this.f18022d = new WindowInsetsControllerCompat(window, window.getDecorView()).a.v();
        }
    }
}
