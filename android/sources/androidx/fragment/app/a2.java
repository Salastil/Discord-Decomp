package androidx.fragment.app;

import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import kotlin.jvm.internal.Intrinsics;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class a2 {

    /* renamed from: d, reason: collision with root package name */
    public static final a2 f1961d;

    /* renamed from: e, reason: collision with root package name */
    public static final a2 f1962e;

    /* renamed from: i, reason: collision with root package name */
    public static final a2 f1963i;

    /* renamed from: v, reason: collision with root package name */
    public static final a2 f1964v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ a2[] f1965w;

    static {
        a2 a2Var = new a2("REMOVED", 0);
        f1961d = a2Var;
        a2 a2Var2 = new a2("VISIBLE", 1);
        f1962e = a2Var2;
        a2 a2Var3 = new a2("GONE", 2);
        f1963i = a2Var3;
        a2 a2Var4 = new a2("INVISIBLE", 3);
        f1964v = a2Var4;
        f1965w = new a2[]{a2Var, a2Var2, a2Var3, a2Var4};
    }

    public static a2 valueOf(String str) {
        return (a2) Enum.valueOf(a2.class, str);
    }

    public static a2[] values() {
        return (a2[]) f1965w.clone();
    }

    public final void a(View view, ViewGroup container) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(container, "container");
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "SpecialEffectsController: Calling apply state");
        }
        int ordinal = ordinal();
        if (ordinal == 0) {
            ViewParent parent = view.getParent();
            ViewGroup viewGroup = parent instanceof ViewGroup ? (ViewGroup) parent : null;
            if (viewGroup != null) {
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "SpecialEffectsController: Removing view " + view + " from container " + viewGroup);
                }
                viewGroup.removeView(view);
                return;
            }
            return;
        }
        if (ordinal == 1) {
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "SpecialEffectsController: Setting view " + view + " to VISIBLE");
            }
            ViewParent parent2 = view.getParent();
            if ((parent2 instanceof ViewGroup ? (ViewGroup) parent2 : null) == null) {
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "SpecialEffectsController: Adding view " + view + " to Container " + container);
                }
                container.addView(view);
            }
            view.setVisibility(0);
            return;
        }
        if (ordinal == 2) {
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "SpecialEffectsController: Setting view " + view + " to GONE");
            }
            view.setVisibility(8);
            return;
        }
        if (ordinal != 3) {
            return;
        }
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "SpecialEffectsController: Setting view " + view + " to INVISIBLE");
        }
        view.setVisibility(4);
    }
}
