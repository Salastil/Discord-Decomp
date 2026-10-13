package i;

import android.content.Context;
import android.graphics.Rect;
import android.os.Build;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import androidx.appcompat.widget.ActionBarContextView;
import androidx.appcompat.widget.e4;
import androidx.appcompat.widget.f4;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.c2;
import androidx.core.view.k0;
import androidx.core.view.o1;
import androidx.core.view.q1;
import androidx.core.view.r1;
import androidx.core.view.s0;
import androidx.core.view.s1;
import androidx.core.view.t1;
import androidx.core.view.u1;
import com.discord.R;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Objects;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class m implements androidx.core.view.r {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10347d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f10348e;

    public /* synthetic */ m(int i5, Object obj) {
        this.f10347d = i5;
        this.f10348e = obj;
    }

    @Override // androidx.core.view.r
    public final WindowInsetsCompat a(View v5, WindowInsetsCompat insets) {
        int i5;
        int i6;
        boolean z5;
        WindowInsetsCompat windowInsetsCompat;
        boolean z6;
        boolean z7;
        WindowInsetsCompat windowInsetsCompat2;
        int i10 = this.f10347d;
        Object obj = this.f10348e;
        switch (i10) {
            case 0:
                int d6 = insets.d();
                androidx.appcompat.app.a aVar = (androidx.appcompat.app.a) obj;
                Context context = aVar.H;
                int d7 = insets.d();
                ActionBarContextView actionBarContextView = aVar.S;
                if (actionBarContextView == null || !(actionBarContextView.getLayoutParams() instanceof ViewGroup.MarginLayoutParams)) {
                    i5 = 0;
                    i6 = 8;
                    z5 = false;
                } else {
                    ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) aVar.S.getLayoutParams();
                    if (aVar.S.isShown()) {
                        if (aVar.f790z0 == null) {
                            aVar.f790z0 = new Rect();
                            aVar.A0 = new Rect();
                        }
                        Rect rect = aVar.f790z0;
                        Rect rect2 = aVar.A0;
                        rect.set(insets.b(), insets.d(), insets.c(), insets.a());
                        ViewGroup viewGroup = aVar.X;
                        if (Build.VERSION.SDK_INT >= 29) {
                            boolean z8 = f4.a;
                            e4.a(viewGroup, rect, rect2);
                        } else {
                            if (!f4.a) {
                                f4.a = true;
                                try {
                                    Method declaredMethod = View.class.getDeclaredMethod("computeFitSystemWindows", Rect.class, Rect.class);
                                    f4.f978b = declaredMethod;
                                    if (!declaredMethod.isAccessible()) {
                                        f4.f978b.setAccessible(true);
                                    }
                                } catch (NoSuchMethodException unused) {
                                    Log.d("ViewUtils", "Could not find method computeFitSystemWindows. Oh well.");
                                }
                            }
                            Method method = f4.f978b;
                            if (method != null) {
                                try {
                                    method.invoke(viewGroup, rect, rect2);
                                } catch (Exception e9) {
                                    Log.d("ViewUtils", "Could not invoke computeFitSystemWindows", e9);
                                }
                            }
                        }
                        int i11 = rect.top;
                        int i12 = rect.left;
                        int i13 = rect.right;
                        ViewGroup viewGroup2 = aVar.X;
                        WeakHashMap weakHashMap = s0.a;
                        WindowInsetsCompat a = k0.a(viewGroup2);
                        int b10 = a == null ? 0 : a.b();
                        int c6 = a == null ? 0 : a.c();
                        if (marginLayoutParams.topMargin == i11 && marginLayoutParams.leftMargin == i12 && marginLayoutParams.rightMargin == i13) {
                            z7 = false;
                        } else {
                            marginLayoutParams.topMargin = i11;
                            marginLayoutParams.leftMargin = i12;
                            marginLayoutParams.rightMargin = i13;
                            z7 = true;
                        }
                        if (i11 <= 0 || aVar.Z != null) {
                            i6 = 8;
                            View view = aVar.Z;
                            if (view != null) {
                                ViewGroup.MarginLayoutParams marginLayoutParams2 = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
                                int i14 = marginLayoutParams2.height;
                                int i15 = marginLayoutParams.topMargin;
                                if (i14 != i15 || marginLayoutParams2.leftMargin != b10 || marginLayoutParams2.rightMargin != c6) {
                                    marginLayoutParams2.height = i15;
                                    marginLayoutParams2.leftMargin = b10;
                                    marginLayoutParams2.rightMargin = c6;
                                    aVar.Z.setLayoutParams(marginLayoutParams2);
                                }
                            }
                        } else {
                            View view2 = new View(context);
                            aVar.Z = view2;
                            i6 = 8;
                            view2.setVisibility(8);
                            FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, marginLayoutParams.topMargin, 51);
                            layoutParams.leftMargin = b10;
                            layoutParams.rightMargin = c6;
                            aVar.X.addView(aVar.Z, -1, layoutParams);
                        }
                        View view3 = aVar.Z;
                        boolean z10 = view3 != null;
                        if (z10 && view3.getVisibility() != 0) {
                            View view4 = aVar.Z;
                            view4.setBackgroundColor((view4.getWindowSystemUiVisibility() & 8192) != 0 ? context.getColor(R.color.abc_decor_view_status_guard_light) : context.getColor(R.color.abc_decor_view_status_guard));
                        }
                        if (!aVar.f770e0 && z10) {
                            d7 = 0;
                        }
                        z5 = z10;
                        z6 = z7;
                        i5 = 0;
                    } else {
                        i6 = 8;
                        i5 = 0;
                        if (marginLayoutParams.topMargin != 0) {
                            marginLayoutParams.topMargin = 0;
                            z5 = false;
                            z6 = true;
                        } else {
                            z5 = false;
                            z6 = false;
                        }
                    }
                    if (z6) {
                        aVar.S.setLayoutParams(marginLayoutParams);
                    }
                }
                View view5 = aVar.Z;
                if (view5 != null) {
                    if (!z5) {
                        i5 = i6;
                    }
                    view5.setVisibility(i5);
                }
                if (d6 != d7) {
                    int b11 = insets.b();
                    int c8 = insets.c();
                    int a10 = insets.a();
                    insets.getClass();
                    int i16 = Build.VERSION.SDK_INT;
                    u1 t1Var = i16 >= 34 ? new t1(insets) : i16 >= 31 ? new s1(insets) : i16 >= 30 ? new r1(insets) : i16 >= 29 ? new q1(insets) : new o1(insets);
                    t1Var.g(Insets.b(b11, d7, c8, a10));
                    windowInsetsCompat = t1Var.b();
                } else {
                    windowInsetsCompat = insets;
                }
                break;
            case 1:
                ng.g gVar = (ng.g) obj;
                windowInsetsCompat2 = gVar.getFitsSystemWindows() ? insets : null;
                if (!Objects.equals(gVar.f15446y, windowInsetsCompat2)) {
                    gVar.f15446y = windowInsetsCompat2;
                    gVar.setWillNotDraw(!(gVar.U != null && gVar.getTopInset() > 0));
                    gVar.requestLayout();
                    break;
                }
                break;
            case 2:
                ng.k kVar = (ng.k) obj;
                windowInsetsCompat2 = kVar.getFitsSystemWindows() ? insets : null;
                if (!Objects.equals(kVar.f15453e0, windowInsetsCompat2)) {
                    kVar.f15453e0 = windowInsetsCompat2;
                    kVar.requestLayout();
                }
                break;
            case 3:
                Intrinsics.checkNotNullParameter(v5, "v");
                Intrinsics.checkNotNullParameter(insets, "insets");
                Iterator it = ((ArrayList) obj).iterator();
                while (it.hasNext()) {
                    ((androidx.core.view.r) it.next()).a(v5, insets);
                }
                break;
            case 4:
                wm.m mVar = (wm.m) obj;
                sg.e eVar = mVar.J;
                if (eVar != null) {
                    mVar.f19922x.I(eVar);
                }
                sg.e eVar2 = new sg.e(mVar.F, insets);
                mVar.J = eVar2;
                eVar2.e(mVar.getWindow());
                mVar.f19922x.w(mVar.J);
                break;
            default:
                c2 c2Var = insets.a;
                CoordinatorLayout coordinatorLayout = (CoordinatorLayout) obj;
                if (!Objects.equals(coordinatorLayout.J, insets)) {
                    coordinatorLayout.J = insets;
                    boolean z11 = insets.d() > 0;
                    coordinatorLayout.K = z11;
                    coordinatorLayout.setWillNotDraw(!z11 && coordinatorLayout.getBackground() == null);
                    if (!c2Var.n()) {
                        int childCount = coordinatorLayout.getChildCount();
                        for (int i17 = 0; i17 < childCount; i17++) {
                            View childAt = coordinatorLayout.getChildAt(i17);
                            WeakHashMap weakHashMap2 = s0.a;
                            if (!childAt.getFitsSystemWindows() || ((v0.d) childAt.getLayoutParams()).a == null || !c2Var.n()) {
                            }
                        }
                    }
                    coordinatorLayout.requestLayout();
                    break;
                }
                break;
        }
        return insets;
    }

    public m() {
        this.f10347d = 3;
        this.f10348e = new ArrayList();
    }
}
