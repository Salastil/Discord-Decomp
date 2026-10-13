package androidx.fragment.app;

import android.util.Log;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;

/* loaded from: classes.dex */
public final class c1 implements a1 {
    public final /* synthetic */ FragmentManager a;

    public c1(FragmentManager fragmentManager) {
        this.a = fragmentManager;
    }

    @Override // androidx.fragment.app.a1
    public final boolean a(ArrayList arrayList, ArrayList arrayList2) {
        ArrayList arrayList3;
        ArrayList arrayList4;
        boolean V;
        FragmentManager fragmentManager = this.a;
        ArrayList arrayList5 = fragmentManager.f1924n;
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "FragmentManager has the following pending actions inside of prepareBackStackState: " + fragmentManager.a);
        }
        if (fragmentManager.f1916d.isEmpty()) {
            Log.i("FragmentManager", "Ignoring call to start back stack pop because the back stack is empty.");
            V = false;
            arrayList3 = arrayList;
            arrayList4 = arrayList2;
        } else {
            a aVar = (a) k0.d.f(1, fragmentManager.f1916d);
            fragmentManager.f1920h = aVar;
            Iterator it = aVar.a.iterator();
            while (it.hasNext()) {
                Fragment fragment = ((m1) it.next()).f2048b;
                if (fragment != null) {
                    fragment.mTransitioning = true;
                }
            }
            arrayList3 = arrayList;
            arrayList4 = arrayList2;
            V = fragmentManager.V(arrayList3, arrayList4, null, -1, 0);
        }
        if (!arrayList5.isEmpty() && arrayList3.size() > 0) {
            ((Boolean) arrayList4.get(arrayList3.size() - 1)).getClass();
            LinkedHashSet<Fragment> linkedHashSet = new LinkedHashSet();
            Iterator it2 = arrayList3.iterator();
            while (it2.hasNext()) {
                linkedHashSet.addAll(FragmentManager.H((a) it2.next()));
            }
            Iterator it3 = arrayList5.iterator();
            while (it3.hasNext()) {
                z0 z0Var = (z0) it3.next();
                for (Fragment fragment2 : linkedHashSet) {
                    z0Var.getClass();
                }
            }
        }
        return V;
    }
}
