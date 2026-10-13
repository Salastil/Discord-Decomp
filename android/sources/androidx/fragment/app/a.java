package androidx.fragment.app;

import android.util.Log;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.PrintWriter;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class a extends FragmentTransaction implements a1 {

    /* renamed from: r, reason: collision with root package name */
    public final FragmentManager f1956r;

    /* renamed from: s, reason: collision with root package name */
    public boolean f1957s;

    /* renamed from: t, reason: collision with root package name */
    public int f1958t;

    public a(FragmentManager fragmentManager) {
        fragmentManager.J();
        FragmentHostCallback fragmentHostCallback = fragmentManager.f1933w;
        if (fragmentHostCallback != null) {
            fragmentHostCallback.f1911e.getClassLoader();
        }
        this.a = new ArrayList();
        this.f1943h = true;
        this.f1949p = false;
        this.f1958t = -1;
        this.f1956r = fragmentManager;
    }

    @Override // androidx.fragment.app.a1
    public final boolean a(ArrayList arrayList, ArrayList arrayList2) {
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Run: " + this);
        }
        arrayList.add(this);
        arrayList2.add(Boolean.FALSE);
        if (!this.f1942g) {
            return true;
        }
        this.f1956r.f1916d.add(this);
        return true;
    }

    @Override // androidx.fragment.app.FragmentTransaction
    public final int c() {
        return m(false, true);
    }

    @Override // androidx.fragment.app.FragmentTransaction
    public final void d() {
        if (this.f1942g) {
            throw new IllegalStateException("This transaction is already being added to the back stack");
        }
        this.f1943h = false;
        this.f1956r.A(this, true);
    }

    @Override // androidx.fragment.app.FragmentTransaction
    public final void e(Fragment fragment) {
        FragmentManager fragmentManager = fragment.mFragmentManager;
        if (fragmentManager == null || fragmentManager == this.f1956r) {
            super.e(fragment);
            return;
        }
        throw new IllegalStateException("Cannot detach Fragment attached to a different FragmentManager. Fragment " + fragment.toString() + " is already attached to a FragmentManager.");
    }

    @Override // androidx.fragment.app.FragmentTransaction
    public final void f(int i5, Fragment fragment, String str, int i6) {
        super.f(i5, fragment, str, i6);
        fragment.mFragmentManager = this.f1956r;
    }

    @Override // androidx.fragment.app.FragmentTransaction
    public final void g(Fragment fragment) {
        FragmentManager fragmentManager = fragment.mFragmentManager;
        if (fragmentManager == null || fragmentManager == this.f1956r) {
            super.g(fragment);
            return;
        }
        throw new IllegalStateException("Cannot remove Fragment attached to a different FragmentManager. Fragment " + fragment.toString() + " is already attached to a FragmentManager.");
    }

    @Override // androidx.fragment.app.FragmentTransaction
    public final void j(Fragment fragment) {
        FragmentManager fragmentManager = fragment.mFragmentManager;
        if (fragmentManager == null || fragmentManager == this.f1956r) {
            super.j(fragment);
            return;
        }
        throw new IllegalStateException("Cannot setPrimaryNavigation for Fragment attached to a different FragmentManager. Fragment " + fragment.toString() + " is already attached to a FragmentManager.");
    }

    public final void k(int i5) {
        ArrayList arrayList = this.a;
        if (this.f1942g) {
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "Bump nesting in " + this + " by " + i5);
            }
            int size = arrayList.size();
            for (int i6 = 0; i6 < size; i6++) {
                m1 m1Var = (m1) arrayList.get(i6);
                Fragment fragment = m1Var.f2048b;
                if (fragment != null) {
                    fragment.mBackStackNesting += i5;
                    if (FragmentManager.M(2)) {
                        Log.v("FragmentManager", "Bump nesting of " + m1Var.f2048b + " to " + m1Var.f2048b.mBackStackNesting);
                    }
                }
            }
        }
    }

    public final void l() {
        ArrayList arrayList = this.a;
        int size = arrayList.size() - 1;
        while (size >= 0) {
            m1 m1Var = (m1) arrayList.get(size);
            if (m1Var.f2049c) {
                if (m1Var.a == 8) {
                    m1Var.f2049c = false;
                    arrayList.remove(size - 1);
                    size--;
                } else {
                    int i5 = m1Var.f2048b.mContainerId;
                    m1Var.a = 2;
                    m1Var.f2049c = false;
                    for (int i6 = size - 1; i6 >= 0; i6--) {
                        m1 m1Var2 = (m1) arrayList.get(i6);
                        if (m1Var2.f2049c && m1Var2.f2048b.mContainerId == i5) {
                            arrayList.remove(i6);
                            size--;
                        }
                    }
                }
            }
            size--;
        }
    }

    public final int m(boolean z5, boolean z6) {
        if (this.f1957s) {
            throw new IllegalStateException("commit already called");
        }
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Commit: " + this);
            PrintWriter printWriter = new PrintWriter(new v1());
            o("  ", printWriter, true);
            printWriter.close();
        }
        this.f1957s = true;
        boolean z7 = this.f1942g;
        FragmentManager fragmentManager = this.f1956r;
        if (z7) {
            this.f1958t = fragmentManager.k.getAndIncrement();
        } else {
            this.f1958t = -1;
        }
        if (z6) {
            fragmentManager.x(this, z5);
        }
        return this.f1958t;
    }

    public final void n() {
        if (this.f1942g) {
            throw new IllegalStateException("This transaction is already being added to the back stack");
        }
        this.f1943h = false;
        this.f1956r.A(this, false);
    }

    public final void o(String str, PrintWriter printWriter, boolean z5) {
        String str2;
        ArrayList arrayList = this.a;
        if (z5) {
            printWriter.print(str);
            printWriter.print("mName=");
            printWriter.print(this.f1944i);
            printWriter.print(" mIndex=");
            printWriter.print(this.f1958t);
            printWriter.print(" mCommitted=");
            printWriter.println(this.f1957s);
            if (this.f1941f != 0) {
                printWriter.print(str);
                printWriter.print("mTransition=#");
                printWriter.print(Integer.toHexString(this.f1941f));
            }
            if (this.f1937b != 0 || this.f1938c != 0) {
                printWriter.print(str);
                printWriter.print("mEnterAnim=#");
                printWriter.print(Integer.toHexString(this.f1937b));
                printWriter.print(" mExitAnim=#");
                printWriter.println(Integer.toHexString(this.f1938c));
            }
            if (this.f1939d != 0 || this.f1940e != 0) {
                printWriter.print(str);
                printWriter.print("mPopEnterAnim=#");
                printWriter.print(Integer.toHexString(this.f1939d));
                printWriter.print(" mPopExitAnim=#");
                printWriter.println(Integer.toHexString(this.f1940e));
            }
            if (this.j != 0 || this.k != null) {
                printWriter.print(str);
                printWriter.print("mBreadCrumbTitleRes=#");
                printWriter.print(Integer.toHexString(this.j));
                printWriter.print(" mBreadCrumbTitleText=");
                printWriter.println(this.k);
            }
            if (this.f1945l != 0 || this.f1946m != null) {
                printWriter.print(str);
                printWriter.print("mBreadCrumbShortTitleRes=#");
                printWriter.print(Integer.toHexString(this.f1945l));
                printWriter.print(" mBreadCrumbShortTitleText=");
                printWriter.println(this.f1946m);
            }
        }
        if (arrayList.isEmpty()) {
            return;
        }
        printWriter.print(str);
        printWriter.println("Operations:");
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            m1 m1Var = (m1) arrayList.get(i5);
            switch (m1Var.a) {
                case 0:
                    str2 = "NULL";
                    break;
                case 1:
                    str2 = "ADD";
                    break;
                case 2:
                    str2 = "REPLACE";
                    break;
                case 3:
                    str2 = "REMOVE";
                    break;
                case 4:
                    str2 = "HIDE";
                    break;
                case 5:
                    str2 = "SHOW";
                    break;
                case 6:
                    str2 = "DETACH";
                    break;
                case 7:
                    str2 = "ATTACH";
                    break;
                case 8:
                    str2 = "SET_PRIMARY_NAV";
                    break;
                case 9:
                    str2 = "UNSET_PRIMARY_NAV";
                    break;
                case 10:
                    str2 = "OP_SET_MAX_LIFECYCLE";
                    break;
                default:
                    str2 = "cmd=" + m1Var.a;
                    break;
            }
            printWriter.print(str);
            printWriter.print("  Op #");
            printWriter.print(i5);
            printWriter.print(": ");
            printWriter.print(str2);
            printWriter.print(" ");
            printWriter.println(m1Var.f2048b);
            if (z5) {
                if (m1Var.f2050d != 0 || m1Var.f2051e != 0) {
                    printWriter.print(str);
                    printWriter.print("enterAnim=#");
                    printWriter.print(Integer.toHexString(m1Var.f2050d));
                    printWriter.print(" exitAnim=#");
                    printWriter.println(Integer.toHexString(m1Var.f2051e));
                }
                if (m1Var.f2052f != 0 || m1Var.f2053g != 0) {
                    printWriter.print(str);
                    printWriter.print("popEnterAnim=#");
                    printWriter.print(Integer.toHexString(m1Var.f2052f));
                    printWriter.print(" popExitAnim=#");
                    printWriter.println(Integer.toHexString(m1Var.f2053g));
                }
            }
        }
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        sb2.append("BackStackEntry{");
        sb2.append(Integer.toHexString(System.identityHashCode(this)));
        if (this.f1958t >= 0) {
            sb2.append(" #");
            sb2.append(this.f1958t);
        }
        if (this.f1944i != null) {
            sb2.append(" ");
            sb2.append(this.f1944i);
        }
        sb2.append("}");
        return sb2.toString();
    }
}
