package androidx.fragment.app;

import android.os.Bundle;
import android.util.Log;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes.dex */
public final class l1 {
    public final ArrayList a = new ArrayList();

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f2040b = new HashMap();

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f2041c = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public g1 f2042d;

    public final void a(Fragment fragment) {
        if (this.a.contains(fragment)) {
            throw new IllegalStateException("Fragment already added: " + fragment);
        }
        synchronized (this.a) {
            this.a.add(fragment);
        }
        fragment.mAdded = true;
    }

    public final Fragment b(String str) {
        k1 k1Var = (k1) this.f2040b.get(str);
        if (k1Var != null) {
            return k1Var.f2036c;
        }
        return null;
    }

    public final Fragment c(String str) {
        Fragment findFragmentByWho;
        for (k1 k1Var : this.f2040b.values()) {
            if (k1Var != null && (findFragmentByWho = k1Var.f2036c.findFragmentByWho(str)) != null) {
                return findFragmentByWho;
            }
        }
        return null;
    }

    public final ArrayList d() {
        ArrayList arrayList = new ArrayList();
        for (k1 k1Var : this.f2040b.values()) {
            if (k1Var != null) {
                arrayList.add(k1Var);
            }
        }
        return arrayList;
    }

    public final ArrayList e() {
        ArrayList arrayList = new ArrayList();
        for (k1 k1Var : this.f2040b.values()) {
            if (k1Var != null) {
                arrayList.add(k1Var.f2036c);
            } else {
                arrayList.add(null);
            }
        }
        return arrayList;
    }

    public final List f() {
        ArrayList arrayList;
        if (this.a.isEmpty()) {
            return Collections.EMPTY_LIST;
        }
        synchronized (this.a) {
            arrayList = new ArrayList(this.a);
        }
        return arrayList;
    }

    public final void g(k1 k1Var) {
        Fragment fragment = k1Var.f2036c;
        String str = fragment.mWho;
        HashMap hashMap = this.f2040b;
        if (hashMap.get(str) != null) {
            return;
        }
        hashMap.put(fragment.mWho, k1Var);
        if (fragment.mRetainInstanceChangedWhileDetached) {
            if (fragment.mRetainInstance) {
                this.f2042d.c(fragment);
            } else {
                this.f2042d.g(fragment);
            }
            fragment.mRetainInstanceChangedWhileDetached = false;
        }
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Added fragment to active set " + fragment);
        }
    }

    public final void h(k1 k1Var) {
        Fragment fragment = k1Var.f2036c;
        if (fragment.mRetainInstance) {
            this.f2042d.g(fragment);
        }
        String str = fragment.mWho;
        HashMap hashMap = this.f2040b;
        if (hashMap.get(str) == k1Var && ((k1) hashMap.put(fragment.mWho, null)) != null && FragmentManager.M(2)) {
            Log.v("FragmentManager", "Removed fragment from active set " + fragment);
        }
    }

    public final Bundle i(String str, Bundle bundle) {
        HashMap hashMap = this.f2041c;
        return bundle != null ? (Bundle) hashMap.put(str, bundle) : (Bundle) hashMap.remove(str);
    }
}
