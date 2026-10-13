package androidx.fragment.app;

import java.lang.reflect.Modifier;
import java.util.ArrayList;

/* loaded from: classes.dex */
public abstract class FragmentTransaction {
    public ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public int f1937b;

    /* renamed from: c, reason: collision with root package name */
    public int f1938c;

    /* renamed from: d, reason: collision with root package name */
    public int f1939d;

    /* renamed from: e, reason: collision with root package name */
    public int f1940e;

    /* renamed from: f, reason: collision with root package name */
    public int f1941f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f1942g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f1943h;

    /* renamed from: i, reason: collision with root package name */
    public String f1944i;
    public int j;
    public CharSequence k;

    /* renamed from: l, reason: collision with root package name */
    public int f1945l;

    /* renamed from: m, reason: collision with root package name */
    public CharSequence f1946m;

    /* renamed from: n, reason: collision with root package name */
    public ArrayList f1947n;

    /* renamed from: o, reason: collision with root package name */
    public ArrayList f1948o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f1949p;

    /* renamed from: q, reason: collision with root package name */
    public ArrayList f1950q;

    public final void b(m1 m1Var) {
        this.a.add(m1Var);
        m1Var.f2050d = this.f1937b;
        m1Var.f2051e = this.f1938c;
        m1Var.f2052f = this.f1939d;
        m1Var.f2053g = this.f1940e;
    }

    public abstract int c();

    public abstract void d();

    public void e(Fragment fragment) {
        b(new m1(fragment, 6));
    }

    public void f(int i5, Fragment fragment, String str, int i6) {
        String str2 = fragment.mPreviousWho;
        if (str2 != null) {
            p2.d.d(fragment, str2);
        }
        Class<?> cls = fragment.getClass();
        int modifiers = cls.getModifiers();
        if (cls.isAnonymousClass() || !Modifier.isPublic(modifiers) || (cls.isMemberClass() && !Modifier.isStatic(modifiers))) {
            throw new IllegalStateException("Fragment " + cls.getCanonicalName() + " must be a public static class to be  properly recreated from instance state.");
        }
        if (str != null) {
            String str3 = fragment.mTag;
            if (str3 != null && !str.equals(str3)) {
                StringBuilder sb2 = new StringBuilder("Can't change tag of fragment ");
                sb2.append(fragment);
                sb2.append(": was ");
                throw new IllegalStateException(a3.e.n(sb2, fragment.mTag, " now ", str));
            }
            fragment.mTag = str;
        }
        if (i5 != 0) {
            if (i5 == -1) {
                throw new IllegalArgumentException("Can't add fragment " + fragment + " with tag " + str + " to container view with no id");
            }
            int i10 = fragment.mFragmentId;
            if (i10 != 0 && i10 != i5) {
                throw new IllegalStateException("Can't change container ID of fragment " + fragment + ": was " + fragment.mFragmentId + " now " + i5);
            }
            fragment.mFragmentId = i5;
            fragment.mContainerId = i5;
        }
        b(new m1(fragment, i6));
    }

    public void g(Fragment fragment) {
        b(new m1(fragment, 3));
    }

    public final void h(boolean z5, Runnable runnable) {
        if (!z5) {
            if (this.f1942g) {
                throw new IllegalStateException("This transaction is already being added to the back stack");
            }
            this.f1943h = false;
        }
        if (this.f1950q == null) {
            this.f1950q = new ArrayList();
        }
        this.f1950q.add(runnable);
    }

    public final void i(int i5, int i6) {
        this.f1937b = i5;
        this.f1938c = i6;
        this.f1939d = 0;
        this.f1940e = 0;
    }

    public void j(Fragment fragment) {
        b(new m1(fragment, 8));
    }
}
