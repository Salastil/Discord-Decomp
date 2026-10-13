package androidx.fragment.app;

import android.util.Log;
import androidx.activity.BackEventCompat;
import androidx.activity.OnBackPressedCallback;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class s0 extends OnBackPressedCallback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ FragmentManager f2099d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s0(FragmentManager fragmentManager) {
        super(false);
        this.f2099d = fragmentManager;
    }

    @Override // androidx.activity.OnBackPressedCallback
    public final void handleOnBackCancelled() {
        boolean M = FragmentManager.M(3);
        FragmentManager fragmentManager = this.f2099d;
        if (M) {
            Log.d("FragmentManager", "handleOnBackCancelled. PREDICTIVE_BACK = true fragment manager " + fragmentManager);
        }
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "cancelBackStackTransition for transition " + fragmentManager.f1920h);
        }
        a aVar = fragmentManager.f1920h;
        if (aVar != null) {
            aVar.f1957s = false;
            aVar.l();
            fragmentManager.f1920h.h(true, new y(4, fragmentManager));
            fragmentManager.f1920h.c();
            fragmentManager.f1921i = true;
            fragmentManager.z(true);
            fragmentManager.G();
            fragmentManager.f1921i = false;
            fragmentManager.f1920h = null;
        }
    }

    @Override // androidx.activity.OnBackPressedCallback
    public final void handleOnBackPressed() {
        boolean M = FragmentManager.M(3);
        FragmentManager fragmentManager = this.f2099d;
        if (M) {
            Log.d("FragmentManager", "handleOnBackPressed. PREDICTIVE_BACK = true fragment manager " + fragmentManager);
        }
        s0 s0Var = fragmentManager.j;
        ArrayList arrayList = fragmentManager.f1924n;
        fragmentManager.f1921i = true;
        fragmentManager.z(true);
        fragmentManager.f1921i = false;
        if (fragmentManager.f1920h == null) {
            if (s0Var.isEnabled()) {
                if (FragmentManager.M(3)) {
                    Log.d("FragmentManager", "Calling popBackStackImmediate via onBackPressed callback");
                }
                fragmentManager.T();
                return;
            } else {
                if (FragmentManager.M(3)) {
                    Log.d("FragmentManager", "Calling onBackPressed via onBackPressed callback");
                }
                fragmentManager.f1919g.d();
                return;
            }
        }
        if (!arrayList.isEmpty()) {
            LinkedHashSet linkedHashSet = new LinkedHashSet(FragmentManager.H(fragmentManager.f1920h));
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                z0 z0Var = (z0) it.next();
                Iterator it2 = linkedHashSet.iterator();
                while (it2.hasNext()) {
                    ((dn.f) z0Var).a((Fragment) it2.next());
                }
            }
        }
        Iterator it3 = fragmentManager.f1920h.a.iterator();
        while (it3.hasNext()) {
            Fragment fragment = ((m1) it3.next()).f2048b;
            if (fragment != null) {
                fragment.mTransitioning = false;
            }
        }
        Iterator it4 = fragmentManager.f(new ArrayList(Collections.singletonList(fragmentManager.f1920h)), 0, 1).iterator();
        while (it4.hasNext()) {
            c2 c2Var = (c2) it4.next();
            ArrayList arrayList2 = c2Var.f1979c;
            if (FragmentManager.M(3)) {
                Log.d("FragmentManager", "SpecialEffectsController: Completing Back ");
            }
            c2Var.m(arrayList2);
            c2Var.c(arrayList2);
        }
        Iterator it5 = fragmentManager.f1920h.a.iterator();
        while (it5.hasNext()) {
            Fragment fragment2 = ((m1) it5.next()).f2048b;
            if (fragment2 != null && fragment2.mContainer == null) {
                fragmentManager.g(fragment2).k();
            }
        }
        fragmentManager.f1920h = null;
        fragmentManager.i0();
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "Op is being set to null");
            Log.d("FragmentManager", "OnBackPressedCallback enabled=" + s0Var.isEnabled() + " for  FragmentManager " + fragmentManager);
        }
    }

    @Override // androidx.activity.OnBackPressedCallback
    public final void handleOnBackProgressed(BackEventCompat backEvent) {
        boolean M = FragmentManager.M(2);
        FragmentManager fragmentManager = this.f2099d;
        if (M) {
            Log.v("FragmentManager", "handleOnBackProgressed. PREDICTIVE_BACK = true fragment manager " + fragmentManager);
        }
        if (fragmentManager.f1920h != null) {
            Iterator it = fragmentManager.f(new ArrayList(Collections.singletonList(fragmentManager.f1920h)), 0, 1).iterator();
            while (it.hasNext()) {
                c2 c2Var = (c2) it.next();
                c2Var.getClass();
                Intrinsics.checkNotNullParameter(backEvent, "backEvent");
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "SpecialEffectsController: Processing Progress " + backEvent.f731c);
                }
                ArrayList arrayList = c2Var.f1979c;
                ArrayList arrayList2 = new ArrayList();
                Iterator it2 = arrayList.iterator();
                while (it2.hasNext()) {
                    kotlin.collections.h0.o(arrayList2, ((y1) it2.next()).k);
                }
                List i02 = CollectionsKt.i0(CollectionsKt.l0(arrayList2));
                int size = i02.size();
                for (int i5 = 0; i5 < size; i5++) {
                    ((x1) i02.get(i5)).d(backEvent, c2Var.a);
                }
            }
            Iterator it3 = fragmentManager.f1924n.iterator();
            while (it3.hasNext()) {
                ((z0) it3.next()).getClass();
            }
        }
    }

    @Override // androidx.activity.OnBackPressedCallback
    public final void handleOnBackStarted(BackEventCompat backEventCompat) {
        boolean M = FragmentManager.M(3);
        FragmentManager fragmentManager = this.f2099d;
        if (M) {
            Log.d("FragmentManager", "handleOnBackStarted. PREDICTIVE_BACK = true fragment manager " + fragmentManager);
        }
        fragmentManager.w();
        fragmentManager.x(new c1(fragmentManager), false);
    }
}
