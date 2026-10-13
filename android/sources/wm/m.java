package wm;

import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.FrameLayout;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.view.j0;
import androidx.core.view.s0;
import com.discord.R;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import i.z;
import java.util.WeakHashMap;
import kotlin.Unit;

/* loaded from: classes3.dex */
public final class m extends z {
    public CoordinatorLayout E;
    public FrameLayout F;
    public boolean G;
    public boolean H;
    public boolean I;
    public sg.e J;
    public boolean K;
    public e4.m L;
    public com.swmansion.rnscreens.r M;

    /* renamed from: x, reason: collision with root package name */
    public BottomSheetBehavior f19922x;

    /* renamed from: y, reason: collision with root package name */
    public FrameLayout f19923y;

    @Override // android.app.Dialog, android.content.DialogInterface
    public final void cancel() {
        if (this.f19922x == null) {
            e();
        }
        super.cancel();
    }

    public final void e() {
        if (this.f19923y == null) {
            FrameLayout frameLayout = (FrameLayout) View.inflate(getContext(), R.layout.design_bottom_sheet_dialog, null);
            this.f19923y = frameLayout;
            this.E = (CoordinatorLayout) frameLayout.findViewById(R.id.coordinator);
            FrameLayout frameLayout2 = (FrameLayout) this.f19923y.findViewById(R.id.design_bottom_sheet);
            this.F = frameLayout2;
            BottomSheetBehavior D = BottomSheetBehavior.D(frameLayout2);
            this.f19922x = D;
            D.w(this.M);
            this.f19922x.N(this.G);
            this.L = new e4.m(this.f19922x, this.F);
        }
    }

    public final void f() {
        super.onAttachedToWindow();
        Window window = getWindow();
        if (window != null) {
            boolean z5 = this.K && Color.alpha(window.getNavigationBarColor()) < 255;
            FrameLayout frameLayout = this.f19923y;
            if (frameLayout != null) {
                frameLayout.setFitsSystemWindows(!z5);
            }
            CoordinatorLayout coordinatorLayout = this.E;
            if (coordinatorLayout != null) {
                coordinatorLayout.setFitsSystemWindows(!z5);
            }
            ah.d.k(window, !z5);
            sg.e eVar = this.J;
            if (eVar != null) {
                eVar.e(window);
            }
        }
        e4.m mVar = this.L;
        if (mVar == null) {
            return;
        }
        View view = (View) mVar.f7965v;
        eh.c cVar = (eh.c) mVar.f7963e;
        if (this.G) {
            if (cVar != null) {
                cVar.b((eh.b) mVar.f7964i, view, false);
            }
        } else if (cVar != null) {
            cVar.c(view);
        }
    }

    public final void g(Bundle bundle) {
        super.onCreate(bundle);
        Window window = getWindow();
        if (window != null) {
            window.setStatusBarColor(0);
            window.addFlags(Integer.MIN_VALUE);
            window.setLayout(-1, -1);
        }
    }

    public final FrameLayout h(View view, int i5, ViewGroup.LayoutParams layoutParams) {
        e();
        CoordinatorLayout coordinatorLayout = (CoordinatorLayout) this.f19923y.findViewById(R.id.coordinator);
        if (i5 != 0 && view == null) {
            view = getLayoutInflater().inflate(i5, (ViewGroup) coordinatorLayout, false);
        }
        if (this.K) {
            FrameLayout frameLayout = this.f19923y;
            i.m mVar = new i.m(4, this);
            WeakHashMap weakHashMap = s0.a;
            j0.m(frameLayout, mVar);
        }
        this.F.removeAllViews();
        if (layoutParams == null) {
            this.F.addView(view);
        } else {
            this.F.addView(view, layoutParams);
        }
        coordinatorLayout.findViewById(R.id.touch_outside).setOnClickListener(new androidx.appcompat.widget.b(7, this));
        s0.p(this.F, new ch.a(3, this));
        this.F.setOnTouchListener(new nh.b(1));
        return this.f19923y;
    }

    @Override // android.app.Dialog, android.view.Window.Callback
    public final void onAttachedToWindow() {
        f();
        Window window = getWindow();
        if (window == null) {
            return;
        }
        ah.d.k(window, false);
        View findViewById = findViewById(R.id.container);
        if (findViewById != null) {
            findViewById.setFitsSystemWindows(false);
        }
        View findViewById2 = findViewById(R.id.coordinator);
        if (findViewById2 != null) {
            findViewById2.setFitsSystemWindows(false);
        }
    }

    @Override // i.z, androidx.activity.ComponentDialog, android.app.Dialog
    public final void onCreate(Bundle bundle) {
        ViewGroup.LayoutParams layoutParams;
        g(bundle);
        Window window = getWindow();
        if (window != null) {
            window.clearFlags(2);
            Unit unit = Unit.a;
        }
        Window window2 = getWindow();
        if (window2 != null) {
            window2.setWindowAnimations(0);
            Unit unit2 = Unit.a;
        }
        FrameLayout frameLayout = (FrameLayout) findViewById(R.id.design_bottom_sheet);
        if (frameLayout == null || (layoutParams = frameLayout.getLayoutParams()) == null) {
            return;
        }
        layoutParams.height = -1;
    }

    @Override // android.app.Dialog, android.view.Window.Callback
    public final void onDetachedFromWindow() {
        eh.c cVar;
        sg.e eVar = this.J;
        if (eVar != null) {
            eVar.e(null);
        }
        e4.m mVar = this.L;
        if (mVar == null || (cVar = (eh.c) mVar.f7963e) == null) {
            return;
        }
        cVar.c((View) mVar.f7965v);
    }

    @Override // androidx.activity.ComponentDialog, android.app.Dialog
    public final void onStart() {
        super.onStart();
        BottomSheetBehavior bottomSheetBehavior = this.f19922x;
        if (bottomSheetBehavior == null || bottomSheetBehavior.N != 5) {
            return;
        }
        bottomSheetBehavior.P(4);
    }

    @Override // android.app.Dialog
    public final void setCancelable(boolean z5) {
        e4.m mVar;
        super.setCancelable(z5);
        if (this.G != z5) {
            this.G = z5;
            BottomSheetBehavior bottomSheetBehavior = this.f19922x;
            if (bottomSheetBehavior != null) {
                bottomSheetBehavior.N(z5);
            }
            if (getWindow() == null || (mVar = this.L) == null) {
                return;
            }
            View view = (View) mVar.f7965v;
            eh.c cVar = (eh.c) mVar.f7963e;
            if (this.G) {
                if (cVar != null) {
                    cVar.b((eh.b) mVar.f7964i, view, false);
                }
            } else if (cVar != null) {
                cVar.c(view);
            }
        }
    }

    @Override // android.app.Dialog
    public final void setCanceledOnTouchOutside(boolean z5) {
        super.setCanceledOnTouchOutside(z5);
        if (z5 && !this.G) {
            this.G = true;
        }
        this.H = z5;
        this.I = true;
    }

    @Override // i.z, androidx.activity.ComponentDialog, android.app.Dialog
    public final void setContentView(int i5) {
        super.setContentView(h(null, i5, null));
    }

    @Override // i.z, androidx.activity.ComponentDialog, android.app.Dialog
    public final void setContentView(View view) {
        super.setContentView(h(view, 0, null));
    }

    @Override // i.z, androidx.activity.ComponentDialog, android.app.Dialog
    public final void setContentView(View view, ViewGroup.LayoutParams layoutParams) {
        super.setContentView(h(view, 0, layoutParams));
    }
}
