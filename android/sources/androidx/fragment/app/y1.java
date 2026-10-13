package androidx.fragment.app;

import android.util.Log;
import android.view.ViewGroup;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class y1 {
    public a2 a;

    /* renamed from: b, reason: collision with root package name */
    public z1 f2124b;

    /* renamed from: c, reason: collision with root package name */
    public final Fragment f2125c;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f2126d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f2127e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f2128f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f2129g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f2130h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f2131i;
    public final ArrayList j;
    public final ArrayList k;

    /* renamed from: l, reason: collision with root package name */
    public final k1 f2132l;

    public y1(a2 finalState, z1 lifecycleImpact, k1 fragmentStateManager) {
        Intrinsics.checkNotNullParameter(finalState, "finalState");
        Intrinsics.checkNotNullParameter(lifecycleImpact, "lifecycleImpact");
        Intrinsics.checkNotNullParameter(fragmentStateManager, "fragmentStateManager");
        Fragment fragment = fragmentStateManager.f2036c;
        Intrinsics.checkNotNullExpressionValue(fragment, "fragmentStateManager.fragment");
        Intrinsics.checkNotNullParameter(finalState, "finalState");
        Intrinsics.checkNotNullParameter(lifecycleImpact, "lifecycleImpact");
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        this.a = finalState;
        this.f2124b = lifecycleImpact;
        this.f2125c = fragment;
        this.f2126d = new ArrayList();
        this.f2131i = true;
        ArrayList arrayList = new ArrayList();
        this.j = arrayList;
        this.k = arrayList;
        this.f2132l = fragmentStateManager;
    }

    public final void a(ViewGroup container) {
        Intrinsics.checkNotNullParameter(container, "container");
        this.f2130h = false;
        if (this.f2127e) {
            return;
        }
        this.f2127e = true;
        if (this.j.isEmpty()) {
            b();
            return;
        }
        for (x1 x1Var : CollectionsKt.i0(this.k)) {
            x1Var.getClass();
            Intrinsics.checkNotNullParameter(container, "container");
            if (!x1Var.f2119b) {
                x1Var.b(container);
            }
            x1Var.f2119b = true;
        }
    }

    public final void b() {
        this.f2130h = false;
        if (!this.f2128f) {
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "SpecialEffectsController: " + this + " has called complete.");
            }
            this.f2128f = true;
            Iterator it = this.f2126d.iterator();
            while (it.hasNext()) {
                ((Runnable) it.next()).run();
            }
        }
        this.f2125c.mTransitioning = false;
        this.f2132l.k();
    }

    public final void c(x1 effect) {
        Intrinsics.checkNotNullParameter(effect, "effect");
        ArrayList arrayList = this.j;
        if (arrayList.remove(effect) && arrayList.isEmpty()) {
            b();
        }
    }

    public final void d(a2 finalState, z1 lifecycleImpact) {
        Intrinsics.checkNotNullParameter(finalState, "finalState");
        Intrinsics.checkNotNullParameter(lifecycleImpact, "lifecycleImpact");
        int ordinal = lifecycleImpact.ordinal();
        Fragment fragment = this.f2125c;
        a2 a2Var = a2.f1961d;
        if (ordinal == 0) {
            if (this.a != a2Var) {
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "SpecialEffectsController: For fragment " + fragment + " mFinalState = " + this.a + " -> " + finalState + '.');
                }
                this.a = finalState;
                return;
            }
            return;
        }
        if (ordinal == 1) {
            if (this.a == a2Var) {
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "SpecialEffectsController: For fragment " + fragment + " mFinalState = REMOVED -> VISIBLE. mLifecycleImpact = " + this.f2124b + " to ADDING.");
                }
                this.a = a2.f1962e;
                this.f2124b = z1.f2134e;
                this.f2131i = true;
                return;
            }
            return;
        }
        if (ordinal != 2) {
            return;
        }
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "SpecialEffectsController: For fragment " + fragment + " mFinalState = " + this.a + " -> REMOVED. mLifecycleImpact  = " + this.f2124b + " to REMOVING.");
        }
        this.a = a2Var;
        this.f2124b = z1.f2135i;
        this.f2131i = true;
    }

    public final String toString() {
        StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Operation {", Integer.toHexString(System.identityHashCode(this)), "} {finalState = ");
        m5.append(this.a);
        m5.append(" lifecycleImpact = ");
        m5.append(this.f2124b);
        m5.append(" fragment = ");
        m5.append(this.f2125c);
        m5.append('}');
        return m5.toString();
    }
}
