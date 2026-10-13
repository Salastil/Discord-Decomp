package androidx.fragment.app;

import android.util.Log;
import androidx.lifecycle.ViewModelStore;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class g1 extends androidx.lifecycle.z0 {

    /* renamed from: h, reason: collision with root package name */
    public static final f1 f2008h = new f1(0);

    /* renamed from: e, reason: collision with root package name */
    public final boolean f2012e;

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f2009b = new HashMap();

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f2010c = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final HashMap f2011d = new HashMap();

    /* renamed from: f, reason: collision with root package name */
    public boolean f2013f = false;

    /* renamed from: g, reason: collision with root package name */
    public boolean f2014g = false;

    public g1(boolean z5) {
        this.f2012e = z5;
    }

    @Override // androidx.lifecycle.z0
    public final void b() {
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "onCleared called for " + this);
        }
        this.f2013f = true;
    }

    public final void c(Fragment fragment) {
        if (this.f2014g) {
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "Ignoring addRetainedFragment as the state is already saved");
                return;
            }
            return;
        }
        String str = fragment.mWho;
        HashMap hashMap = this.f2009b;
        if (hashMap.containsKey(str)) {
            return;
        }
        hashMap.put(fragment.mWho, fragment);
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Updating retained Fragments: Added " + fragment);
        }
    }

    public final void d(Fragment fragment, boolean z5) {
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "Clearing non-config state for " + fragment);
        }
        f(fragment.mWho, z5);
    }

    public final void e(String str, boolean z5) {
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "Clearing non-config state for saved state of Fragment " + str);
        }
        f(str, z5);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && g1.class == obj.getClass()) {
            g1 g1Var = (g1) obj;
            if (this.f2009b.equals(g1Var.f2009b) && this.f2010c.equals(g1Var.f2010c) && this.f2011d.equals(g1Var.f2011d)) {
                return true;
            }
        }
        return false;
    }

    public final void f(String str, boolean z5) {
        HashMap hashMap = this.f2010c;
        g1 g1Var = (g1) hashMap.get(str);
        if (g1Var != null) {
            if (z5) {
                ArrayList arrayList = new ArrayList();
                arrayList.addAll(g1Var.f2010c.keySet());
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    g1Var.e((String) it.next(), true);
                }
            }
            g1Var.b();
            hashMap.remove(str);
        }
        HashMap hashMap2 = this.f2011d;
        ViewModelStore viewModelStore = (ViewModelStore) hashMap2.get(str);
        if (viewModelStore != null) {
            viewModelStore.a();
            hashMap2.remove(str);
        }
    }

    public final void g(Fragment fragment) {
        if (this.f2014g) {
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "Ignoring removeRetainedFragment as the state is already saved");
            }
        } else {
            if (this.f2009b.remove(fragment.mWho) == null || !FragmentManager.M(2)) {
                return;
            }
            Log.v("FragmentManager", "Updating retained Fragments: Removed " + fragment);
        }
    }

    public final int hashCode() {
        return this.f2011d.hashCode() + ((this.f2010c.hashCode() + (this.f2009b.hashCode() * 31)) * 31);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("FragmentManagerViewModel{");
        sb2.append(Integer.toHexString(System.identityHashCode(this)));
        sb2.append("} Fragments (");
        Iterator it = this.f2009b.values().iterator();
        while (it.hasNext()) {
            sb2.append(it.next());
            if (it.hasNext()) {
                sb2.append(", ");
            }
        }
        sb2.append(") Child Non Config (");
        Iterator it2 = this.f2010c.keySet().iterator();
        while (it2.hasNext()) {
            sb2.append((String) it2.next());
            if (it2.hasNext()) {
                sb2.append(", ");
            }
        }
        sb2.append(") ViewModelStores (");
        Iterator it3 = this.f2011d.keySet().iterator();
        while (it3.hasNext()) {
            sb2.append((String) it3.next());
            if (it3.hasNext()) {
                sb2.append(", ");
            }
        }
        sb2.append(')');
        return sb2.toString();
    }
}
