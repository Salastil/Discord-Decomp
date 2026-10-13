package androidx.fragment.app;

import android.content.res.Configuration;
import android.os.Bundle;
import android.os.Looper;
import android.util.Log;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import androidx.activity.OnBackPressedDispatcher;
import androidx.activity.result.ActivityResultRegistry;
import androidx.core.util.Consumer;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.ViewModelStore;
import androidx.savedstate.SavedStateRegistry;
import com.discord.R;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;

/* loaded from: classes.dex */
public abstract class FragmentManager {
    public final u0 A;
    public final ha.k B;
    public f.f C;
    public f.f D;
    public f.f E;
    public ArrayDeque F;
    public boolean G;
    public boolean H;
    public boolean I;
    public boolean J;
    public boolean K;
    public ArrayList L;
    public ArrayList M;
    public ArrayList N;
    public g1 O;
    public final u P;

    /* renamed from: b, reason: collision with root package name */
    public boolean f1914b;

    /* renamed from: e, reason: collision with root package name */
    public ArrayList f1917e;

    /* renamed from: g, reason: collision with root package name */
    public OnBackPressedDispatcher f1919g;

    /* renamed from: n, reason: collision with root package name */
    public final ArrayList f1924n;

    /* renamed from: o, reason: collision with root package name */
    public final l0 f1925o;

    /* renamed from: p, reason: collision with root package name */
    public final CopyOnWriteArrayList f1926p;

    /* renamed from: q, reason: collision with root package name */
    public final q0 f1927q;

    /* renamed from: r, reason: collision with root package name */
    public final q0 f1928r;

    /* renamed from: s, reason: collision with root package name */
    public final q0 f1929s;

    /* renamed from: t, reason: collision with root package name */
    public final q0 f1930t;

    /* renamed from: u, reason: collision with root package name */
    public final t0 f1931u;

    /* renamed from: v, reason: collision with root package name */
    public int f1932v;

    /* renamed from: w, reason: collision with root package name */
    public FragmentHostCallback f1933w;

    /* renamed from: x, reason: collision with root package name */
    public FragmentContainer f1934x;

    /* renamed from: y, reason: collision with root package name */
    public Fragment f1935y;

    /* renamed from: z, reason: collision with root package name */
    public Fragment f1936z;
    public final ArrayList a = new ArrayList();

    /* renamed from: c, reason: collision with root package name */
    public final l1 f1915c = new l1();

    /* renamed from: d, reason: collision with root package name */
    public ArrayList f1916d = new ArrayList();

    /* renamed from: f, reason: collision with root package name */
    public final o0 f1918f = new o0(this);

    /* renamed from: h, reason: collision with root package name */
    public a f1920h = null;

    /* renamed from: i, reason: collision with root package name */
    public boolean f1921i = false;
    public final s0 j = new s0(this);
    public final AtomicInteger k = new AtomicInteger();

    /* renamed from: l, reason: collision with root package name */
    public final Map f1922l = Collections.synchronizedMap(new HashMap());

    /* renamed from: m, reason: collision with root package name */
    public final Map f1923m = Collections.synchronizedMap(new HashMap());

    /* JADX WARN: Type inference failed for: r0v16, types: [androidx.fragment.app.q0] */
    /* JADX WARN: Type inference failed for: r0v17, types: [androidx.fragment.app.q0] */
    /* JADX WARN: Type inference failed for: r0v18, types: [androidx.fragment.app.q0] */
    /* JADX WARN: Type inference failed for: r0v19, types: [androidx.fragment.app.q0] */
    public FragmentManager() {
        Collections.synchronizedMap(new HashMap());
        this.f1924n = new ArrayList();
        this.f1925o = new l0(this);
        this.f1926p = new CopyOnWriteArrayList();
        final int i5 = 0;
        this.f1927q = new Consumer(this) { // from class: androidx.fragment.app.q0

            /* renamed from: b, reason: collision with root package name */
            public final /* synthetic */ FragmentManager f2087b;

            {
                this.f2087b = this;
            }

            @Override // androidx.core.util.Consumer
            public final void accept(Object obj) {
                switch (i5) {
                    case 0:
                        Configuration configuration = (Configuration) obj;
                        FragmentManager fragmentManager = this.f2087b;
                        if (fragmentManager.O()) {
                            fragmentManager.i(false, configuration);
                            break;
                        }
                        break;
                    case 1:
                        Integer num = (Integer) obj;
                        FragmentManager fragmentManager2 = this.f2087b;
                        if (fragmentManager2.O() && num.intValue() == 80) {
                            fragmentManager2.m(false);
                            break;
                        }
                        break;
                    case 2:
                        x0.j jVar = (x0.j) obj;
                        FragmentManager fragmentManager3 = this.f2087b;
                        if (fragmentManager3.O()) {
                            fragmentManager3.n(jVar.a, false);
                            break;
                        }
                        break;
                    default:
                        x0.e1 e1Var = (x0.e1) obj;
                        FragmentManager fragmentManager4 = this.f2087b;
                        if (fragmentManager4.O()) {
                            fragmentManager4.s(e1Var.a, false);
                            break;
                        }
                        break;
                }
            }
        };
        final int i6 = 1;
        this.f1928r = new Consumer(this) { // from class: androidx.fragment.app.q0

            /* renamed from: b, reason: collision with root package name */
            public final /* synthetic */ FragmentManager f2087b;

            {
                this.f2087b = this;
            }

            @Override // androidx.core.util.Consumer
            public final void accept(Object obj) {
                switch (i6) {
                    case 0:
                        Configuration configuration = (Configuration) obj;
                        FragmentManager fragmentManager = this.f2087b;
                        if (fragmentManager.O()) {
                            fragmentManager.i(false, configuration);
                            break;
                        }
                        break;
                    case 1:
                        Integer num = (Integer) obj;
                        FragmentManager fragmentManager2 = this.f2087b;
                        if (fragmentManager2.O() && num.intValue() == 80) {
                            fragmentManager2.m(false);
                            break;
                        }
                        break;
                    case 2:
                        x0.j jVar = (x0.j) obj;
                        FragmentManager fragmentManager3 = this.f2087b;
                        if (fragmentManager3.O()) {
                            fragmentManager3.n(jVar.a, false);
                            break;
                        }
                        break;
                    default:
                        x0.e1 e1Var = (x0.e1) obj;
                        FragmentManager fragmentManager4 = this.f2087b;
                        if (fragmentManager4.O()) {
                            fragmentManager4.s(e1Var.a, false);
                            break;
                        }
                        break;
                }
            }
        };
        final int i10 = 2;
        this.f1929s = new Consumer(this) { // from class: androidx.fragment.app.q0

            /* renamed from: b, reason: collision with root package name */
            public final /* synthetic */ FragmentManager f2087b;

            {
                this.f2087b = this;
            }

            @Override // androidx.core.util.Consumer
            public final void accept(Object obj) {
                switch (i10) {
                    case 0:
                        Configuration configuration = (Configuration) obj;
                        FragmentManager fragmentManager = this.f2087b;
                        if (fragmentManager.O()) {
                            fragmentManager.i(false, configuration);
                            break;
                        }
                        break;
                    case 1:
                        Integer num = (Integer) obj;
                        FragmentManager fragmentManager2 = this.f2087b;
                        if (fragmentManager2.O() && num.intValue() == 80) {
                            fragmentManager2.m(false);
                            break;
                        }
                        break;
                    case 2:
                        x0.j jVar = (x0.j) obj;
                        FragmentManager fragmentManager3 = this.f2087b;
                        if (fragmentManager3.O()) {
                            fragmentManager3.n(jVar.a, false);
                            break;
                        }
                        break;
                    default:
                        x0.e1 e1Var = (x0.e1) obj;
                        FragmentManager fragmentManager4 = this.f2087b;
                        if (fragmentManager4.O()) {
                            fragmentManager4.s(e1Var.a, false);
                            break;
                        }
                        break;
                }
            }
        };
        final int i11 = 3;
        this.f1930t = new Consumer(this) { // from class: androidx.fragment.app.q0

            /* renamed from: b, reason: collision with root package name */
            public final /* synthetic */ FragmentManager f2087b;

            {
                this.f2087b = this;
            }

            @Override // androidx.core.util.Consumer
            public final void accept(Object obj) {
                switch (i11) {
                    case 0:
                        Configuration configuration = (Configuration) obj;
                        FragmentManager fragmentManager = this.f2087b;
                        if (fragmentManager.O()) {
                            fragmentManager.i(false, configuration);
                            break;
                        }
                        break;
                    case 1:
                        Integer num = (Integer) obj;
                        FragmentManager fragmentManager2 = this.f2087b;
                        if (fragmentManager2.O() && num.intValue() == 80) {
                            fragmentManager2.m(false);
                            break;
                        }
                        break;
                    case 2:
                        x0.j jVar = (x0.j) obj;
                        FragmentManager fragmentManager3 = this.f2087b;
                        if (fragmentManager3.O()) {
                            fragmentManager3.n(jVar.a, false);
                            break;
                        }
                        break;
                    default:
                        x0.e1 e1Var = (x0.e1) obj;
                        FragmentManager fragmentManager4 = this.f2087b;
                        if (fragmentManager4.O()) {
                            fragmentManager4.s(e1Var.a, false);
                            break;
                        }
                        break;
                }
            }
        };
        this.f1931u = new t0(this);
        this.f1932v = -1;
        this.A = new u0(this);
        int i12 = 2;
        this.B = new ha.k(i12);
        this.F = new ArrayDeque();
        this.P = new u(i12, this);
    }

    public static Fragment C(ViewGroup viewGroup) {
        Fragment F = F(viewGroup);
        if (F != null) {
            return F;
        }
        throw new IllegalStateException("View " + viewGroup + " does not have a Fragment set");
    }

    public static Fragment F(View view) {
        while (view != null) {
            Object tag = view.getTag(R.id.fragment_container_view_tag);
            Fragment fragment = tag instanceof Fragment ? (Fragment) tag : null;
            if (fragment != null) {
                return fragment;
            }
            Object parent = view.getParent();
            view = parent instanceof View ? (View) parent : null;
        }
        return null;
    }

    public static HashSet H(a aVar) {
        HashSet hashSet = new HashSet();
        for (int i5 = 0; i5 < aVar.a.size(); i5++) {
            Fragment fragment = ((m1) aVar.a.get(i5)).f2048b;
            if (fragment != null && aVar.f1942g) {
                hashSet.add(fragment);
            }
        }
        return hashSet;
    }

    public static boolean M(int i5) {
        return Log.isLoggable("FragmentManager", i5);
    }

    public static boolean N(Fragment fragment) {
        if (fragment.mHasMenu && fragment.mMenuVisible) {
            return true;
        }
        Iterator it = fragment.mChildFragmentManager.f1915c.e().iterator();
        boolean z5 = false;
        while (it.hasNext()) {
            Fragment fragment2 = (Fragment) it.next();
            if (fragment2 != null) {
                z5 = N(fragment2);
            }
            if (z5) {
                return true;
            }
        }
        return false;
    }

    public static boolean P(Fragment fragment) {
        if (fragment == null) {
            return true;
        }
        FragmentManager fragmentManager = fragment.mFragmentManager;
        return fragment.equals(fragmentManager.f1936z) && P(fragmentManager.f1935y);
    }

    public static void g0(Fragment fragment) {
        if (M(2)) {
            Log.v("FragmentManager", "show: " + fragment);
        }
        if (fragment.mHidden) {
            fragment.mHidden = false;
            fragment.mHiddenChanged = !fragment.mHiddenChanged;
        }
    }

    public final void A(a aVar, boolean z5) {
        if (z5 && (this.f1933w == null || this.J)) {
            return;
        }
        y(z5);
        a aVar2 = this.f1920h;
        if (aVar2 != null) {
            aVar2.f1957s = false;
            aVar2.l();
            if (M(3)) {
                Log.d("FragmentManager", "Reversing mTransitioningOp " + this.f1920h + " as part of execSingleAction for action " + aVar);
            }
            this.f1920h.m(false, false);
            this.f1920h.a(this.L, this.M);
            Iterator it = this.f1920h.a.iterator();
            while (it.hasNext()) {
                Fragment fragment = ((m1) it.next()).f2048b;
                if (fragment != null) {
                    fragment.mTransitioning = false;
                }
            }
            this.f1920h = null;
        }
        aVar.a(this.L, this.M);
        this.f1914b = true;
        try {
            Y(this.L, this.M);
            d();
            i0();
            boolean z6 = this.K;
            l1 l1Var = this.f1915c;
            if (z6) {
                this.K = false;
                Iterator it2 = l1Var.d().iterator();
                while (it2.hasNext()) {
                    k1 k1Var = (k1) it2.next();
                    Fragment fragment2 = k1Var.f2036c;
                    if (fragment2.mDeferStart) {
                        if (this.f1914b) {
                            this.K = true;
                        } else {
                            fragment2.mDeferStart = false;
                            k1Var.k();
                        }
                    }
                }
            }
            l1Var.f2040b.values().removeAll(Collections.singleton(null));
        } catch (Throwable th2) {
            d();
            throw th2;
        }
    }

    public final void B(ArrayList arrayList, ArrayList arrayList2, int i5, int i6) {
        int i10;
        boolean z5;
        int i11;
        boolean z6;
        int i12;
        int i13;
        boolean z7;
        int i14;
        int i15;
        int i16 = i5;
        boolean z8 = ((a) arrayList.get(i16)).f1949p;
        ArrayList arrayList3 = this.N;
        if (arrayList3 == null) {
            this.N = new ArrayList();
        } else {
            arrayList3.clear();
        }
        ArrayList arrayList4 = this.N;
        l1 l1Var = this.f1915c;
        arrayList4.addAll(l1Var.f());
        Fragment fragment = this.f1936z;
        int i17 = i16;
        boolean z10 = false;
        while (true) {
            int i18 = 1;
            if (i17 >= i6) {
                boolean z11 = z8;
                boolean z12 = z10;
                this.N.clear();
                if (!z11 && this.f1932v >= 1) {
                    for (int i19 = i16; i19 < i6; i19++) {
                        Iterator it = ((a) arrayList.get(i19)).a.iterator();
                        while (it.hasNext()) {
                            Fragment fragment2 = ((m1) it.next()).f2048b;
                            if (fragment2 != null && fragment2.mFragmentManager != null) {
                                l1Var.g(g(fragment2));
                            }
                        }
                    }
                }
                int i20 = i16;
                while (i20 < i6) {
                    a aVar = (a) arrayList.get(i20);
                    if (((Boolean) arrayList2.get(i20)).booleanValue()) {
                        aVar.k(-1);
                        FragmentManager fragmentManager = aVar.f1956r;
                        ArrayList arrayList5 = aVar.a;
                        boolean z13 = true;
                        for (int size = arrayList5.size() - 1; size >= 0; size--) {
                            m1 m1Var = (m1) arrayList5.get(size);
                            Fragment fragment3 = m1Var.f2048b;
                            if (fragment3 != null) {
                                fragment3.mBeingSaved = false;
                                fragment3.setPopDirection(z13);
                                int i21 = aVar.f1941f;
                                int i22 = 8194;
                                int i23 = 4097;
                                if (i21 != 4097) {
                                    if (i21 != 8194) {
                                        i22 = 4100;
                                        if (i21 != 8197) {
                                            i23 = 4099;
                                            if (i21 != 4099) {
                                                i22 = i21 != 4100 ? 0 : 8197;
                                            }
                                        }
                                    }
                                    i22 = i23;
                                }
                                fragment3.setNextTransition(i22);
                                fragment3.setSharedElementNames(aVar.f1948o, aVar.f1947n);
                            }
                            switch (m1Var.a) {
                                case 1:
                                    fragment3.setAnimations(m1Var.f2050d, m1Var.f2051e, m1Var.f2052f, m1Var.f2053g);
                                    z13 = true;
                                    fragmentManager.c0(fragment3, true);
                                    fragmentManager.X(fragment3);
                                case 2:
                                default:
                                    throw new IllegalArgumentException("Unknown cmd: " + m1Var.a);
                                case 3:
                                    fragment3.setAnimations(m1Var.f2050d, m1Var.f2051e, m1Var.f2052f, m1Var.f2053g);
                                    fragmentManager.a(fragment3);
                                    z13 = true;
                                case 4:
                                    fragment3.setAnimations(m1Var.f2050d, m1Var.f2051e, m1Var.f2052f, m1Var.f2053g);
                                    fragmentManager.getClass();
                                    g0(fragment3);
                                    z13 = true;
                                case 5:
                                    fragment3.setAnimations(m1Var.f2050d, m1Var.f2051e, m1Var.f2052f, m1Var.f2053g);
                                    fragmentManager.c0(fragment3, true);
                                    fragmentManager.L(fragment3);
                                    z13 = true;
                                case 6:
                                    fragment3.setAnimations(m1Var.f2050d, m1Var.f2051e, m1Var.f2052f, m1Var.f2053g);
                                    fragmentManager.c(fragment3);
                                    z13 = true;
                                case 7:
                                    fragment3.setAnimations(m1Var.f2050d, m1Var.f2051e, m1Var.f2052f, m1Var.f2053g);
                                    fragmentManager.c0(fragment3, true);
                                    fragmentManager.h(fragment3);
                                    z13 = true;
                                case 8:
                                    fragmentManager.e0(null);
                                    z13 = true;
                                case 9:
                                    fragmentManager.e0(fragment3);
                                    z13 = true;
                                case 10:
                                    m1Var.f2055i = fragment3.mMaxState;
                                    fragmentManager.d0(fragment3, m1Var.f2054h);
                                    z13 = true;
                            }
                        }
                    } else {
                        aVar.k(1);
                        FragmentManager fragmentManager2 = aVar.f1956r;
                        ArrayList arrayList6 = aVar.a;
                        int size2 = arrayList6.size();
                        int i24 = 0;
                        while (i24 < size2) {
                            m1 m1Var2 = (m1) arrayList6.get(i24);
                            Fragment fragment4 = m1Var2.f2048b;
                            if (fragment4 != null) {
                                fragment4.mBeingSaved = false;
                                fragment4.setPopDirection(false);
                                fragment4.setNextTransition(aVar.f1941f);
                                fragment4.setSharedElementNames(aVar.f1947n, aVar.f1948o);
                            }
                            switch (m1Var2.a) {
                                case 1:
                                    i10 = i20;
                                    fragment4.setAnimations(m1Var2.f2050d, m1Var2.f2051e, m1Var2.f2052f, m1Var2.f2053g);
                                    fragmentManager2.c0(fragment4, false);
                                    fragmentManager2.a(fragment4);
                                    i24++;
                                    i20 = i10;
                                case 2:
                                default:
                                    throw new IllegalArgumentException("Unknown cmd: " + m1Var2.a);
                                case 3:
                                    i10 = i20;
                                    fragment4.setAnimations(m1Var2.f2050d, m1Var2.f2051e, m1Var2.f2052f, m1Var2.f2053g);
                                    fragmentManager2.X(fragment4);
                                    i24++;
                                    i20 = i10;
                                case 4:
                                    i10 = i20;
                                    fragment4.setAnimations(m1Var2.f2050d, m1Var2.f2051e, m1Var2.f2052f, m1Var2.f2053g);
                                    fragmentManager2.L(fragment4);
                                    i24++;
                                    i20 = i10;
                                case 5:
                                    i10 = i20;
                                    fragment4.setAnimations(m1Var2.f2050d, m1Var2.f2051e, m1Var2.f2052f, m1Var2.f2053g);
                                    fragmentManager2.c0(fragment4, false);
                                    g0(fragment4);
                                    i24++;
                                    i20 = i10;
                                case 6:
                                    i10 = i20;
                                    fragment4.setAnimations(m1Var2.f2050d, m1Var2.f2051e, m1Var2.f2052f, m1Var2.f2053g);
                                    fragmentManager2.h(fragment4);
                                    i24++;
                                    i20 = i10;
                                case 7:
                                    i10 = i20;
                                    fragment4.setAnimations(m1Var2.f2050d, m1Var2.f2051e, m1Var2.f2052f, m1Var2.f2053g);
                                    fragmentManager2.c0(fragment4, false);
                                    fragmentManager2.c(fragment4);
                                    i24++;
                                    i20 = i10;
                                case 8:
                                    fragmentManager2.e0(fragment4);
                                    i10 = i20;
                                    i24++;
                                    i20 = i10;
                                case 9:
                                    fragmentManager2.e0(null);
                                    i10 = i20;
                                    i24++;
                                    i20 = i10;
                                case 10:
                                    m1Var2.f2054h = fragment4.mMaxState;
                                    fragmentManager2.d0(fragment4, m1Var2.f2055i);
                                    i10 = i20;
                                    i24++;
                                    i20 = i10;
                            }
                        }
                    }
                    i20++;
                }
                boolean booleanValue = ((Boolean) arrayList2.get(i6 - 1)).booleanValue();
                ArrayList arrayList7 = this.f1924n;
                if (z12 && !arrayList7.isEmpty()) {
                    LinkedHashSet<Fragment> linkedHashSet = new LinkedHashSet();
                    Iterator it2 = arrayList.iterator();
                    while (it2.hasNext()) {
                        linkedHashSet.addAll(H((a) it2.next()));
                    }
                    if (this.f1920h == null) {
                        Iterator it3 = arrayList7.iterator();
                        while (it3.hasNext()) {
                            z0 z0Var = (z0) it3.next();
                            for (Fragment fragment5 : linkedHashSet) {
                                z0Var.getClass();
                            }
                        }
                        Iterator it4 = arrayList7.iterator();
                        while (it4.hasNext()) {
                            z0 z0Var2 = (z0) it4.next();
                            Iterator it5 = linkedHashSet.iterator();
                            while (it5.hasNext()) {
                                ((dn.f) z0Var2).a((Fragment) it5.next());
                            }
                        }
                    }
                }
                for (int i25 = i16; i25 < i6; i25++) {
                    a aVar2 = (a) arrayList.get(i25);
                    if (booleanValue) {
                        for (int size3 = aVar2.a.size() - 1; size3 >= 0; size3--) {
                            Fragment fragment6 = ((m1) aVar2.a.get(size3)).f2048b;
                            if (fragment6 != null) {
                                g(fragment6).k();
                            }
                        }
                    } else {
                        Iterator it6 = aVar2.a.iterator();
                        while (it6.hasNext()) {
                            Fragment fragment7 = ((m1) it6.next()).f2048b;
                            if (fragment7 != null) {
                                g(fragment7).k();
                            }
                        }
                    }
                }
                R(this.f1932v, true);
                Iterator it7 = f(arrayList, i16, i6).iterator();
                while (it7.hasNext()) {
                    c2 c2Var = (c2) it7.next();
                    c2Var.f1981e = booleanValue;
                    c2Var.l();
                    c2Var.f();
                }
                while (i16 < i6) {
                    a aVar3 = (a) arrayList.get(i16);
                    if (((Boolean) arrayList2.get(i16)).booleanValue() && aVar3.f1958t >= 0) {
                        aVar3.f1958t = -1;
                    }
                    if (aVar3.f1950q != null) {
                        for (int i26 = 0; i26 < aVar3.f1950q.size(); i26++) {
                            ((Runnable) aVar3.f1950q.get(i26)).run();
                        }
                        aVar3.f1950q = null;
                    }
                    i16++;
                }
                if (z12) {
                    for (int i27 = 0; i27 < arrayList7.size(); i27++) {
                        ((z0) arrayList7.get(i27)).getClass();
                    }
                    return;
                }
                return;
            }
            a aVar4 = (a) arrayList.get(i17);
            if (((Boolean) arrayList2.get(i17)).booleanValue()) {
                z5 = z8;
                i11 = i17;
                z6 = z10;
                int i28 = 1;
                ArrayList arrayList8 = this.N;
                ArrayList arrayList9 = aVar4.a;
                int size4 = arrayList9.size() - 1;
                while (size4 >= 0) {
                    m1 m1Var3 = (m1) arrayList9.get(size4);
                    int i29 = m1Var3.a;
                    if (i29 != i28) {
                        if (i29 != 3) {
                            switch (i29) {
                                case 8:
                                    fragment = null;
                                    break;
                                case 9:
                                    fragment = m1Var3.f2048b;
                                    break;
                                case 10:
                                    m1Var3.f2055i = m1Var3.f2054h;
                                    break;
                            }
                            size4--;
                            i28 = 1;
                        }
                        arrayList8.add(m1Var3.f2048b);
                        size4--;
                        i28 = 1;
                    }
                    arrayList8.remove(m1Var3.f2048b);
                    size4--;
                    i28 = 1;
                }
            } else {
                ArrayList arrayList10 = this.N;
                ArrayList arrayList11 = aVar4.a;
                int i30 = 0;
                while (i30 < arrayList11.size()) {
                    m1 m1Var4 = (m1) arrayList11.get(i30);
                    boolean z14 = z8;
                    int i31 = m1Var4.a;
                    if (i31 != i18) {
                        i12 = i17;
                        if (i31 != 2) {
                            if (i31 == 3 || i31 == 6) {
                                arrayList10.remove(m1Var4.f2048b);
                                Fragment fragment8 = m1Var4.f2048b;
                                if (fragment8 == fragment) {
                                    arrayList11.add(i30, new m1(fragment8, 9));
                                    i30++;
                                    z7 = z10;
                                    fragment = null;
                                    i13 = 1;
                                }
                            } else if (i31 == 7) {
                                i13 = 1;
                            } else if (i31 == 8) {
                                arrayList11.add(i30, new m1(9, fragment, 0));
                                m1Var4.f2049c = true;
                                i30++;
                                fragment = m1Var4.f2048b;
                            }
                            z7 = z10;
                            i13 = 1;
                        } else {
                            Fragment fragment9 = m1Var4.f2048b;
                            int i32 = fragment9.mContainerId;
                            int size5 = arrayList10.size() - 1;
                            boolean z15 = false;
                            while (size5 >= 0) {
                                int i33 = size5;
                                Fragment fragment10 = (Fragment) arrayList10.get(size5);
                                boolean z16 = z10;
                                if (fragment10.mContainerId != i32) {
                                    i14 = i32;
                                } else if (fragment10 == fragment9) {
                                    i14 = i32;
                                    z15 = true;
                                } else {
                                    if (fragment10 == fragment) {
                                        i14 = i32;
                                        i15 = 0;
                                        arrayList11.add(i30, new m1(9, fragment10, 0));
                                        i30++;
                                        fragment = null;
                                    } else {
                                        i14 = i32;
                                        i15 = 0;
                                    }
                                    m1 m1Var5 = new m1(3, fragment10, i15);
                                    m1Var5.f2050d = m1Var4.f2050d;
                                    m1Var5.f2052f = m1Var4.f2052f;
                                    m1Var5.f2051e = m1Var4.f2051e;
                                    m1Var5.f2053g = m1Var4.f2053g;
                                    arrayList11.add(i30, m1Var5);
                                    arrayList10.remove(fragment10);
                                    i30++;
                                    fragment = fragment;
                                }
                                size5 = i33 - 1;
                                i32 = i14;
                                z10 = z16;
                            }
                            z7 = z10;
                            i13 = 1;
                            if (z15) {
                                arrayList11.remove(i30);
                                i30--;
                            } else {
                                m1Var4.a = 1;
                                m1Var4.f2049c = true;
                                arrayList10.add(fragment9);
                            }
                        }
                        i30 += i13;
                        i18 = i13;
                        z8 = z14;
                        i17 = i12;
                        z10 = z7;
                    } else {
                        i12 = i17;
                        i13 = i18;
                    }
                    z7 = z10;
                    arrayList10.add(m1Var4.f2048b);
                    i30 += i13;
                    i18 = i13;
                    z8 = z14;
                    i17 = i12;
                    z10 = z7;
                }
                z5 = z8;
                i11 = i17;
                z6 = z10;
            }
            z10 = z6 || aVar4.f1942g;
            i17 = i11 + 1;
            z8 = z5;
        }
    }

    public final Fragment D(int i5) {
        l1 l1Var = this.f1915c;
        ArrayList arrayList = l1Var.a;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            Fragment fragment = (Fragment) arrayList.get(size);
            if (fragment != null && fragment.mFragmentId == i5) {
                return fragment;
            }
        }
        for (k1 k1Var : l1Var.f2040b.values()) {
            if (k1Var != null) {
                Fragment fragment2 = k1Var.f2036c;
                if (fragment2.mFragmentId == i5) {
                    return fragment2;
                }
            }
        }
        return null;
    }

    public final Fragment E(String str) {
        l1 l1Var = this.f1915c;
        ArrayList arrayList = l1Var.a;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            Fragment fragment = (Fragment) arrayList.get(size);
            if (fragment != null && str.equals(fragment.mTag)) {
                return fragment;
            }
        }
        for (k1 k1Var : l1Var.f2040b.values()) {
            if (k1Var != null) {
                Fragment fragment2 = k1Var.f2036c;
                if (str.equals(fragment2.mTag)) {
                    return fragment2;
                }
            }
        }
        return null;
    }

    public final void G() {
        Iterator it = e().iterator();
        while (it.hasNext()) {
            c2 c2Var = (c2) it.next();
            if (c2Var.f1982f) {
                if (M(2)) {
                    Log.v("FragmentManager", "SpecialEffectsController: Forcing postponed operations");
                }
                c2Var.f1982f = false;
                c2Var.f();
            }
        }
    }

    public final ViewGroup I(Fragment fragment) {
        ViewGroup viewGroup = fragment.mContainer;
        if (viewGroup != null) {
            return viewGroup;
        }
        if (fragment.mContainerId <= 0 || !this.f1934x.c()) {
            return null;
        }
        View b10 = this.f1934x.b(fragment.mContainerId);
        if (b10 instanceof ViewGroup) {
            return (ViewGroup) b10;
        }
        return null;
    }

    public final u0 J() {
        Fragment fragment = this.f1935y;
        return fragment != null ? fragment.mFragmentManager.J() : this.A;
    }

    public final ha.k K() {
        Fragment fragment = this.f1935y;
        return fragment != null ? fragment.mFragmentManager.K() : this.B;
    }

    public final void L(Fragment fragment) {
        if (M(2)) {
            Log.v("FragmentManager", "hide: " + fragment);
        }
        if (fragment.mHidden) {
            return;
        }
        fragment.mHidden = true;
        fragment.mHiddenChanged = true ^ fragment.mHiddenChanged;
        f0(fragment);
    }

    public final boolean O() {
        Fragment fragment = this.f1935y;
        if (fragment == null) {
            return true;
        }
        return fragment.isAdded() && this.f1935y.getParentFragmentManager().O();
    }

    public final boolean Q() {
        return this.H || this.I;
    }

    public final void R(int i5, boolean z5) {
        FragmentHostCallback fragmentHostCallback;
        if (this.f1933w == null && i5 != -1) {
            throw new IllegalStateException("No activity");
        }
        if (z5 || i5 != this.f1932v) {
            this.f1932v = i5;
            l1 l1Var = this.f1915c;
            HashMap hashMap = l1Var.f2040b;
            Iterator it = l1Var.a.iterator();
            while (it.hasNext()) {
                k1 k1Var = (k1) hashMap.get(((Fragment) it.next()).mWho);
                if (k1Var != null) {
                    k1Var.k();
                }
            }
            for (k1 k1Var2 : hashMap.values()) {
                if (k1Var2 != null) {
                    k1Var2.k();
                    Fragment fragment = k1Var2.f2036c;
                    if (fragment.mRemoving && !fragment.isInBackStack()) {
                        if (fragment.mBeingSaved && !l1Var.f2041c.containsKey(fragment.mWho)) {
                            l1Var.i(fragment.mWho, k1Var2.n());
                        }
                        l1Var.h(k1Var2);
                    }
                }
            }
            Iterator it2 = l1Var.d().iterator();
            while (it2.hasNext()) {
                k1 k1Var3 = (k1) it2.next();
                Fragment fragment2 = k1Var3.f2036c;
                if (fragment2.mDeferStart) {
                    if (this.f1914b) {
                        this.K = true;
                    } else {
                        fragment2.mDeferStart = false;
                        k1Var3.k();
                    }
                }
            }
            if (this.G && (fragmentHostCallback = this.f1933w) != null && this.f1932v == 7) {
                fragmentHostCallback.h();
                this.G = false;
            }
        }
    }

    public final void S() {
        if (this.f1933w == null) {
            return;
        }
        this.H = false;
        this.I = false;
        this.O.f2014g = false;
        for (Fragment fragment : this.f1915c.f()) {
            if (fragment != null) {
                fragment.noteStateNotSaved();
            }
        }
    }

    public final boolean T() {
        return U(-1, 0);
    }

    public final boolean U(int i5, int i6) {
        z(false);
        y(true);
        Fragment fragment = this.f1936z;
        if (fragment != null && i5 < 0 && fragment.getChildFragmentManager().T()) {
            return true;
        }
        boolean V = V(this.L, this.M, null, i5, i6);
        if (V) {
            this.f1914b = true;
            try {
                Y(this.L, this.M);
            } finally {
                d();
            }
        }
        i0();
        boolean z5 = this.K;
        l1 l1Var = this.f1915c;
        if (z5) {
            this.K = false;
            Iterator it = l1Var.d().iterator();
            while (it.hasNext()) {
                k1 k1Var = (k1) it.next();
                Fragment fragment2 = k1Var.f2036c;
                if (fragment2.mDeferStart) {
                    if (this.f1914b) {
                        this.K = true;
                    } else {
                        fragment2.mDeferStart = false;
                        k1Var.k();
                    }
                }
            }
        }
        l1Var.f2040b.values().removeAll(Collections.singleton(null));
        return V;
    }

    public final boolean V(ArrayList arrayList, ArrayList arrayList2, String str, int i5, int i6) {
        boolean z5 = (i6 & 1) != 0;
        int i10 = -1;
        if (!this.f1916d.isEmpty()) {
            if (str != null || i5 >= 0) {
                int size = this.f1916d.size() - 1;
                while (size >= 0) {
                    a aVar = (a) this.f1916d.get(size);
                    if ((str != null && str.equals(aVar.f1944i)) || (i5 >= 0 && i5 == aVar.f1958t)) {
                        break;
                    }
                    size--;
                }
                if (size < 0) {
                    i10 = size;
                } else if (z5) {
                    i10 = size;
                    while (i10 > 0) {
                        a aVar2 = (a) this.f1916d.get(i10 - 1);
                        if ((str == null || !str.equals(aVar2.f1944i)) && (i5 < 0 || i5 != aVar2.f1958t)) {
                            break;
                        }
                        i10--;
                    }
                } else if (size != this.f1916d.size() - 1) {
                    i10 = size + 1;
                }
            } else {
                i10 = z5 ? 0 : this.f1916d.size() - 1;
            }
        }
        if (i10 < 0) {
            return false;
        }
        for (int size2 = this.f1916d.size() - 1; size2 >= i10; size2--) {
            arrayList.add((a) this.f1916d.remove(size2));
            arrayList2.add(Boolean.TRUE);
        }
        return true;
    }

    public final void W(x0 cb2) {
        l0 l0Var = this.f1925o;
        l0Var.getClass();
        Intrinsics.checkNotNullParameter(cb2, "cb");
        ((CopyOnWriteArrayList) l0Var.f2039b).add(new p0(cb2));
    }

    public final void X(Fragment fragment) {
        if (M(2)) {
            Log.v("FragmentManager", "remove: " + fragment + " nesting=" + fragment.mBackStackNesting);
        }
        boolean isInBackStack = fragment.isInBackStack();
        if (fragment.mDetached && isInBackStack) {
            return;
        }
        l1 l1Var = this.f1915c;
        synchronized (l1Var.a) {
            l1Var.a.remove(fragment);
        }
        fragment.mAdded = false;
        if (N(fragment)) {
            this.G = true;
        }
        fragment.mRemoving = true;
        f0(fragment);
    }

    public final void Y(ArrayList arrayList, ArrayList arrayList2) {
        if (arrayList.isEmpty()) {
            return;
        }
        if (arrayList.size() != arrayList2.size()) {
            throw new IllegalStateException("Internal error with the back stack records");
        }
        int size = arrayList.size();
        int i5 = 0;
        int i6 = 0;
        while (i5 < size) {
            if (!((a) arrayList.get(i5)).f1949p) {
                if (i6 != i5) {
                    B(arrayList, arrayList2, i6, i5);
                }
                i6 = i5 + 1;
                if (((Boolean) arrayList2.get(i5)).booleanValue()) {
                    while (i6 < size && ((Boolean) arrayList2.get(i6)).booleanValue() && !((a) arrayList.get(i6)).f1949p) {
                        i6++;
                    }
                }
                B(arrayList, arrayList2, i5, i6);
                i5 = i6 - 1;
            }
            i5++;
        }
        if (i6 != size) {
            B(arrayList, arrayList2, i6, size);
        }
    }

    public final void Z(Bundle bundle) {
        l0 l0Var;
        int i5;
        boolean z5;
        int i6;
        k1 k1Var;
        Bundle bundle2;
        Bundle bundle3;
        for (String str : bundle.keySet()) {
            if (str.startsWith("result_") && (bundle3 = bundle.getBundle(str)) != null) {
                bundle3.setClassLoader(this.f1933w.f1911e.getClassLoader());
                this.f1923m.put(str.substring(7), bundle3);
            }
        }
        HashMap hashMap = new HashMap();
        for (String str2 : bundle.keySet()) {
            if (str2.startsWith("fragment_") && (bundle2 = bundle.getBundle(str2)) != null) {
                bundle2.setClassLoader(this.f1933w.f1911e.getClassLoader());
                hashMap.put(str2.substring(9), bundle2);
            }
        }
        l1 l1Var = this.f1915c;
        HashMap hashMap2 = l1Var.f2041c;
        HashMap hashMap3 = l1Var.f2040b;
        hashMap2.clear();
        hashMap2.putAll(hashMap);
        e1 e1Var = (e1) bundle.getParcelable("state");
        if (e1Var == null) {
            return;
        }
        hashMap3.clear();
        Iterator it = e1Var.f1993d.iterator();
        while (true) {
            boolean hasNext = it.hasNext();
            l0Var = this.f1925o;
            i5 = 2;
            if (!hasNext) {
                break;
            }
            Bundle i10 = l1Var.i((String) it.next(), null);
            if (i10 != null) {
                Fragment fragment = (Fragment) this.O.f2009b.get(((i1) i10.getParcelable("state")).f2025e);
                if (fragment != null) {
                    if (M(2)) {
                        Log.v("FragmentManager", "restoreSaveState: re-attaching retained " + fragment);
                    }
                    k1Var = new k1(l0Var, l1Var, fragment, i10);
                } else {
                    k1Var = new k1(this.f1925o, this.f1915c, this.f1933w.f1911e.getClassLoader(), J(), i10);
                }
                Fragment fragment2 = k1Var.f2036c;
                fragment2.mSavedFragmentState = i10;
                fragment2.mFragmentManager = this;
                if (M(2)) {
                    Log.v("FragmentManager", "restoreSaveState: active (" + fragment2.mWho + "): " + fragment2);
                }
                k1Var.l(this.f1933w.f1911e.getClassLoader());
                l1Var.g(k1Var);
                k1Var.f2038e = this.f1932v;
            }
        }
        g1 g1Var = this.O;
        g1Var.getClass();
        Iterator it2 = new ArrayList(g1Var.f2009b.values()).iterator();
        while (true) {
            z5 = true;
            if (!it2.hasNext()) {
                break;
            }
            Fragment fragment3 = (Fragment) it2.next();
            if (hashMap3.get(fragment3.mWho) == null) {
                if (M(2)) {
                    Log.v("FragmentManager", "Discarding retained Fragment " + fragment3 + " that was not found in the set of active Fragments " + e1Var.f1993d);
                }
                this.O.g(fragment3);
                fragment3.mFragmentManager = this;
                k1 k1Var2 = new k1(l0Var, l1Var, fragment3);
                k1Var2.f2038e = 1;
                k1Var2.k();
                fragment3.mRemoving = true;
                k1Var2.k();
            }
        }
        ArrayList<String> arrayList = e1Var.f1994e;
        l1Var.a.clear();
        if (arrayList != null) {
            for (String str3 : arrayList) {
                Fragment b10 = l1Var.b(str3);
                if (b10 == null) {
                    throw new IllegalStateException(s4.h.f("No instantiated fragment for (", str3, ")"));
                }
                if (M(2)) {
                    Log.v("FragmentManager", "restoreSaveState: added (" + str3 + "): " + b10);
                }
                l1Var.a(b10);
            }
        }
        if (e1Var.f1995i != null) {
            this.f1916d = new ArrayList(e1Var.f1995i.length);
            int i11 = 0;
            while (true) {
                b[] bVarArr = e1Var.f1995i;
                if (i11 >= bVarArr.length) {
                    break;
                }
                b bVar = bVarArr[i11];
                ArrayList arrayList2 = bVar.f1967e;
                a aVar = new a(this);
                int[] iArr = bVar.f1966d;
                int i12 = 0;
                int i13 = 0;
                while (i12 < iArr.length) {
                    m1 m1Var = new m1();
                    int i14 = i12 + 1;
                    int i15 = i5;
                    m1Var.a = iArr[i12];
                    if (M(i15)) {
                        Log.v("FragmentManager", "Instantiate " + aVar + " op #" + i13 + " base fragment #" + iArr[i14]);
                    }
                    m1Var.f2054h = Lifecycle.State.values()[bVar.f1968i[i13]];
                    m1Var.f2055i = Lifecycle.State.values()[bVar.f1969v[i13]];
                    int i16 = i12 + 2;
                    m1Var.f2049c = iArr[i14] != 0 ? z5 : false;
                    int i17 = iArr[i16];
                    m1Var.f2050d = i17;
                    int i18 = iArr[i12 + 3];
                    m1Var.f2051e = i18;
                    int i19 = i12 + 5;
                    int i20 = iArr[i12 + 4];
                    m1Var.f2052f = i20;
                    i12 += 6;
                    int[] iArr2 = iArr;
                    int i21 = iArr2[i19];
                    m1Var.f2053g = i21;
                    aVar.f1937b = i17;
                    aVar.f1938c = i18;
                    aVar.f1939d = i20;
                    aVar.f1940e = i21;
                    aVar.b(m1Var);
                    i13++;
                    i5 = i15;
                    iArr = iArr2;
                    z5 = true;
                }
                int i22 = i5;
                aVar.f1941f = bVar.f1970w;
                aVar.f1944i = bVar.f1971x;
                aVar.f1942g = true;
                aVar.j = bVar.E;
                aVar.k = bVar.F;
                aVar.f1945l = bVar.G;
                aVar.f1946m = bVar.H;
                aVar.f1947n = bVar.I;
                aVar.f1948o = bVar.J;
                aVar.f1949p = bVar.K;
                aVar.f1958t = bVar.f1972y;
                for (int i23 = 0; i23 < arrayList2.size(); i23++) {
                    String str4 = (String) arrayList2.get(i23);
                    if (str4 != null) {
                        ((m1) aVar.a.get(i23)).f2048b = l1Var.b(str4);
                    }
                }
                aVar.k(1);
                if (M(i22)) {
                    StringBuilder r5 = a3.e.r(i11, "restoreAllState: back stack #", " (index ");
                    r5.append(aVar.f1958t);
                    r5.append("): ");
                    r5.append(aVar);
                    Log.v("FragmentManager", r5.toString());
                    PrintWriter printWriter = new PrintWriter(new v1());
                    aVar.o("  ", printWriter, false);
                    printWriter.close();
                }
                this.f1916d.add(aVar);
                i11++;
                i5 = i22;
                z5 = true;
            }
            i6 = 0;
        } else {
            i6 = 0;
            this.f1916d = new ArrayList();
        }
        this.k.set(e1Var.f1996v);
        String str5 = e1Var.f1997w;
        if (str5 != null) {
            Fragment b11 = l1Var.b(str5);
            this.f1936z = b11;
            r(b11);
        }
        ArrayList arrayList3 = e1Var.f1998x;
        if (arrayList3 != null) {
            for (int i24 = i6; i24 < arrayList3.size(); i24++) {
                this.f1922l.put((String) arrayList3.get(i24), (c) e1Var.f1999y.get(i24));
            }
        }
        this.F = new ArrayDeque(e1Var.E);
    }

    public final k1 a(Fragment fragment) {
        String str = fragment.mPreviousWho;
        if (str != null) {
            p2.d.d(fragment, str);
        }
        if (M(2)) {
            Log.v("FragmentManager", "add: " + fragment);
        }
        k1 g6 = g(fragment);
        fragment.mFragmentManager = this;
        l1 l1Var = this.f1915c;
        l1Var.g(g6);
        if (!fragment.mDetached) {
            l1Var.a(fragment);
            fragment.mRemoving = false;
            if (fragment.mView == null) {
                fragment.mHiddenChanged = false;
            }
            if (N(fragment)) {
                this.G = true;
            }
        }
        return g6;
    }

    public final Bundle a0() {
        ArrayList arrayList;
        b[] bVarArr;
        Bundle bundle = new Bundle();
        G();
        w();
        z(true);
        this.H = true;
        this.O.f2014g = true;
        l1 l1Var = this.f1915c;
        l1Var.getClass();
        HashMap hashMap = l1Var.f2040b;
        ArrayList arrayList2 = new ArrayList(hashMap.size());
        for (k1 k1Var : hashMap.values()) {
            if (k1Var != null) {
                Fragment fragment = k1Var.f2036c;
                l1Var.i(fragment.mWho, k1Var.n());
                arrayList2.add(fragment.mWho);
                if (M(2)) {
                    Log.v("FragmentManager", "Saved state of " + fragment + ": " + fragment.mSavedFragmentState);
                }
            }
        }
        HashMap hashMap2 = this.f1915c.f2041c;
        if (!hashMap2.isEmpty()) {
            l1 l1Var2 = this.f1915c;
            synchronized (l1Var2.a) {
                try {
                    if (l1Var2.a.isEmpty()) {
                        arrayList = null;
                    } else {
                        arrayList = new ArrayList(l1Var2.a.size());
                        Iterator it = l1Var2.a.iterator();
                        while (it.hasNext()) {
                            Fragment fragment2 = (Fragment) it.next();
                            arrayList.add(fragment2.mWho);
                            if (M(2)) {
                                Log.v("FragmentManager", "saveAllState: adding fragment (" + fragment2.mWho + "): " + fragment2);
                            }
                        }
                    }
                } finally {
                }
            }
            int size = this.f1916d.size();
            if (size > 0) {
                bVarArr = new b[size];
                for (int i5 = 0; i5 < size; i5++) {
                    bVarArr[i5] = new b((a) this.f1916d.get(i5));
                    if (M(2)) {
                        StringBuilder r5 = a3.e.r(i5, "saveAllState: adding back stack #", ": ");
                        r5.append(this.f1916d.get(i5));
                        Log.v("FragmentManager", r5.toString());
                    }
                }
            } else {
                bVarArr = null;
            }
            e1 e1Var = new e1();
            e1Var.f1997w = null;
            ArrayList arrayList3 = new ArrayList();
            e1Var.f1998x = arrayList3;
            ArrayList arrayList4 = new ArrayList();
            e1Var.f1999y = arrayList4;
            e1Var.f1993d = arrayList2;
            e1Var.f1994e = arrayList;
            e1Var.f1995i = bVarArr;
            e1Var.f1996v = this.k.get();
            Fragment fragment3 = this.f1936z;
            if (fragment3 != null) {
                e1Var.f1997w = fragment3.mWho;
            }
            arrayList3.addAll(this.f1922l.keySet());
            arrayList4.addAll(this.f1922l.values());
            e1Var.E = new ArrayList(this.F);
            bundle.putParcelable("state", e1Var);
            for (String str : this.f1923m.keySet()) {
                bundle.putBundle(a3.e.k("result_", str), (Bundle) this.f1923m.get(str));
            }
            for (String str2 : hashMap2.keySet()) {
                bundle.putBundle(a3.e.k("fragment_", str2), (Bundle) hashMap2.get(str2));
            }
        } else if (M(2)) {
            Log.v("FragmentManager", "saveAllState: no fragments!");
            return bundle;
        }
        return bundle;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void b(FragmentHostCallback fragmentHostCallback, FragmentContainer fragmentContainer, Fragment fragment) {
        if (this.f1933w != null) {
            throw new IllegalStateException("Already attached");
        }
        this.f1933w = fragmentHostCallback;
        this.f1934x = fragmentContainer;
        this.f1935y = fragment;
        CopyOnWriteArrayList copyOnWriteArrayList = this.f1926p;
        if (fragment != null) {
            copyOnWriteArrayList.add(new v0(fragment));
        } else if (fragmentHostCallback instanceof h1) {
            copyOnWriteArrayList.add((h1) fragmentHostCallback);
        }
        if (this.f1935y != null) {
            i0();
        }
        if (fragmentHostCallback instanceof e.t) {
            e.t tVar = (e.t) fragmentHostCallback;
            OnBackPressedDispatcher onBackPressedDispatcher = tVar.getOnBackPressedDispatcher();
            this.f1919g = onBackPressedDispatcher;
            LifecycleOwner lifecycleOwner = tVar;
            if (fragment != null) {
                lifecycleOwner = fragment;
            }
            onBackPressedDispatcher.a(lifecycleOwner, this.j);
        }
        if (fragment != null) {
            g1 g1Var = fragment.mFragmentManager.O;
            HashMap hashMap = g1Var.f2010c;
            g1 g1Var2 = (g1) hashMap.get(fragment.mWho);
            if (g1Var2 == null) {
                g1Var2 = new g1(g1Var.f2012e);
                hashMap.put(fragment.mWho, g1Var2);
            }
            this.O = g1Var2;
        } else if (fragmentHostCallback instanceof androidx.lifecycle.d1) {
            ViewModelStore store = ((androidx.lifecycle.d1) fragmentHostCallback).getViewModelStore();
            Intrinsics.checkNotNullParameter(store, "store");
            f1 factory = g1.f2008h;
            Intrinsics.checkNotNullParameter(factory, "factory");
            t2.a defaultCreationExtras = t2.a.f18168b;
            Intrinsics.checkNotNullParameter(store, "store");
            Intrinsics.checkNotNullParameter(factory, "factory");
            Intrinsics.checkNotNullParameter(defaultCreationExtras, "defaultCreationExtras");
            com.google.firebase.messaging.r rVar = new com.google.firebase.messaging.r(store, factory, defaultCreationExtras);
            Intrinsics.checkNotNullParameter(g1.class, "modelClass");
            Intrinsics.checkNotNullParameter(g1.class, "<this>");
            KClass modelClass = Reflection.getOrCreateKotlinClass(g1.class);
            Intrinsics.checkNotNullParameter(modelClass, "modelClass");
            Intrinsics.checkNotNullParameter(modelClass, "modelClass");
            String qualifiedName = modelClass != null ? modelClass.getQualifiedName() : null;
            if (qualifiedName == null) {
                throw new IllegalArgumentException("Local and anonymous classes can not be ViewModels");
            }
            this.O = (g1) rVar.g("androidx.lifecycle.ViewModelProvider.DefaultKey:".concat(qualifiedName), modelClass);
        } else {
            this.O = new g1(false);
        }
        this.O.f2014g = Q();
        this.f1915c.f2042d = this.O;
        Object obj = this.f1933w;
        if ((obj instanceof d3.e) && fragment == null) {
            SavedStateRegistry savedStateRegistry = ((d3.e) obj).getSavedStateRegistry();
            savedStateRegistry.c("android:support:fragments", new h0(1, this));
            Bundle a = savedStateRegistry.a("android:support:fragments");
            if (a != null) {
                Z(a);
            }
        }
        Object obj2 = this.f1933w;
        if (obj2 instanceof f.g) {
            ActivityResultRegistry activityResultRegistry = ((f.g) obj2).getActivityResultRegistry();
            String k = a3.e.k("FragmentManager:", fragment != null ? com.discord.chat.bridge.botuikit.a.j(new StringBuilder(), fragment.mWho, ":") : "");
            this.C = activityResultRegistry.c(k0.d.k(k, "StartActivityForResult"), new w0(3), new r0(this, 1));
            this.D = activityResultRegistry.c(k0.d.k(k, "StartIntentSenderForResult"), new w0(0), new r0(this, 2));
            this.E = activityResultRegistry.c(k0.d.k(k, "RequestPermissions"), new w0(2), new r0(this, 0));
        }
        Object obj3 = this.f1933w;
        if (obj3 instanceof y0.f) {
            ((y0.f) obj3).addOnConfigurationChangedListener(this.f1927q);
        }
        Object obj4 = this.f1933w;
        if (obj4 instanceof y0.g) {
            ((y0.g) obj4).addOnTrimMemoryListener(this.f1928r);
        }
        Object obj5 = this.f1933w;
        if (obj5 instanceof x0.c1) {
            ((x0.c1) obj5).addOnMultiWindowModeChangedListener(this.f1929s);
        }
        Object obj6 = this.f1933w;
        if (obj6 instanceof x0.d1) {
            ((x0.d1) obj6).addOnPictureInPictureModeChangedListener(this.f1930t);
        }
        Object obj7 = this.f1933w;
        if ((obj7 instanceof androidx.core.view.k) && fragment == null) {
            ((androidx.core.view.k) obj7).addMenuProvider(this.f1931u);
        }
    }

    public final void b0() {
        synchronized (this.a) {
            try {
                if (this.a.size() == 1) {
                    this.f1933w.f1912i.removeCallbacks(this.P);
                    this.f1933w.f1912i.post(this.P);
                    i0();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void c(Fragment fragment) {
        if (M(2)) {
            Log.v("FragmentManager", "attach: " + fragment);
        }
        if (fragment.mDetached) {
            fragment.mDetached = false;
            if (fragment.mAdded) {
                return;
            }
            this.f1915c.a(fragment);
            if (M(2)) {
                Log.v("FragmentManager", "add from attach: " + fragment);
            }
            if (N(fragment)) {
                this.G = true;
            }
        }
    }

    public final void c0(Fragment fragment, boolean z5) {
        ViewGroup I = I(fragment);
        if (I == null || !(I instanceof FragmentContainerView)) {
            return;
        }
        ((FragmentContainerView) I).setDrawDisappearingViewsLast(!z5);
    }

    public final void d() {
        this.f1914b = false;
        this.M.clear();
        this.L.clear();
    }

    public final void d0(Fragment fragment, Lifecycle.State state) {
        if (fragment.equals(this.f1915c.b(fragment.mWho)) && (fragment.mHost == null || fragment.mFragmentManager == this)) {
            fragment.mMaxState = state;
            return;
        }
        throw new IllegalArgumentException("Fragment " + fragment + " is not an active fragment of FragmentManager " + this);
    }

    public final HashSet e() {
        Object tVar;
        HashSet hashSet = new HashSet();
        Iterator it = this.f1915c.d().iterator();
        while (it.hasNext()) {
            ViewGroup container = ((k1) it.next()).f2036c.mContainer;
            if (container != null) {
                ha.k factory = K();
                Intrinsics.checkNotNullParameter(container, "container");
                Intrinsics.checkNotNullParameter(factory, "factory");
                Object tag = container.getTag(R.id.special_effects_controller_view_tag);
                if (tag instanceof c2) {
                    tVar = (c2) tag;
                } else {
                    factory.getClass();
                    Intrinsics.checkNotNullParameter(container, "container");
                    tVar = new t(container);
                    Intrinsics.checkNotNullExpressionValue(tVar, "factory.createController(container)");
                    container.setTag(R.id.special_effects_controller_view_tag, tVar);
                }
                hashSet.add(tVar);
            }
        }
        return hashSet;
    }

    public final void e0(Fragment fragment) {
        if (fragment != null) {
            if (!fragment.equals(this.f1915c.b(fragment.mWho)) || (fragment.mHost != null && fragment.mFragmentManager != this)) {
                throw new IllegalArgumentException("Fragment " + fragment + " is not an active fragment of FragmentManager " + this);
            }
        }
        Fragment fragment2 = this.f1936z;
        this.f1936z = fragment;
        r(fragment2);
        r(this.f1936z);
    }

    public final HashSet f(ArrayList arrayList, int i5, int i6) {
        ViewGroup viewGroup;
        HashSet hashSet = new HashSet();
        while (i5 < i6) {
            Iterator it = ((a) arrayList.get(i5)).a.iterator();
            while (it.hasNext()) {
                Fragment fragment = ((m1) it.next()).f2048b;
                if (fragment != null && (viewGroup = fragment.mContainer) != null) {
                    hashSet.add(c2.j(viewGroup, this));
                }
            }
            i5++;
        }
        return hashSet;
    }

    public final void f0(Fragment fragment) {
        ViewGroup I = I(fragment);
        if (I != null) {
            if (fragment.getPopExitAnim() + fragment.getPopEnterAnim() + fragment.getExitAnim() + fragment.getEnterAnim() > 0) {
                if (I.getTag(R.id.visible_removing_fragment_view_tag) == null) {
                    I.setTag(R.id.visible_removing_fragment_view_tag, fragment);
                }
                ((Fragment) I.getTag(R.id.visible_removing_fragment_view_tag)).setPopDirection(fragment.getPopDirection());
            }
        }
    }

    public final k1 g(Fragment fragment) {
        String str = fragment.mWho;
        l1 l1Var = this.f1915c;
        k1 k1Var = (k1) l1Var.f2040b.get(str);
        if (k1Var != null) {
            return k1Var;
        }
        k1 k1Var2 = new k1(this.f1925o, l1Var, fragment);
        k1Var2.l(this.f1933w.f1911e.getClassLoader());
        k1Var2.f2038e = this.f1932v;
        return k1Var2;
    }

    public final void h(Fragment fragment) {
        if (M(2)) {
            Log.v("FragmentManager", "detach: " + fragment);
        }
        if (fragment.mDetached) {
            return;
        }
        fragment.mDetached = true;
        if (fragment.mAdded) {
            if (M(2)) {
                Log.v("FragmentManager", "remove from detach: " + fragment);
            }
            l1 l1Var = this.f1915c;
            synchronized (l1Var.a) {
                l1Var.a.remove(fragment);
            }
            fragment.mAdded = false;
            if (N(fragment)) {
                this.G = true;
            }
            f0(fragment);
        }
    }

    public final void h0(IllegalStateException illegalStateException) {
        Log.e("FragmentManager", illegalStateException.getMessage());
        Log.e("FragmentManager", "Activity state:");
        PrintWriter printWriter = new PrintWriter(new v1());
        FragmentHostCallback fragmentHostCallback = this.f1933w;
        if (fragmentHostCallback != null) {
            try {
                fragmentHostCallback.d(printWriter, new String[0]);
                throw illegalStateException;
            } catch (Exception e9) {
                Log.e("FragmentManager", "Failed dumping state", e9);
                throw illegalStateException;
            }
        }
        try {
            v("  ", null, printWriter, new String[0]);
            throw illegalStateException;
        } catch (Exception e10) {
            Log.e("FragmentManager", "Failed dumping state", e10);
            throw illegalStateException;
        }
    }

    public final void i(boolean z5, Configuration configuration) {
        if (z5 && (this.f1933w instanceof y0.f)) {
            h0(new IllegalStateException("Do not call dispatchConfigurationChanged() on host. Host implements OnConfigurationChangedProvider and automatically dispatches configuration changes to fragments."));
            throw null;
        }
        for (Fragment fragment : this.f1915c.f()) {
            if (fragment != null) {
                fragment.performConfigurationChanged(configuration);
                if (z5) {
                    fragment.mChildFragmentManager.i(true, configuration);
                }
            }
        }
    }

    public final void i0() {
        synchronized (this.a) {
            try {
                if (!this.a.isEmpty()) {
                    this.j.setEnabled(true);
                    if (M(3)) {
                        Log.d("FragmentManager", "FragmentManager " + this + " enabling OnBackPressedCallback, caused by non-empty pending actions");
                    }
                    return;
                }
                boolean z5 = this.f1916d.size() + (this.f1920h != null ? 1 : 0) > 0 && P(this.f1935y);
                if (M(3)) {
                    Log.d("FragmentManager", "OnBackPressedCallback for FragmentManager " + this + " enabled state is " + z5);
                }
                this.j.setEnabled(z5);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final boolean j(MenuItem menuItem) {
        if (this.f1932v < 1) {
            return false;
        }
        for (Fragment fragment : this.f1915c.f()) {
            if (fragment != null && fragment.performContextItemSelected(menuItem)) {
                return true;
            }
        }
        return false;
    }

    public final boolean k(Menu menu, MenuInflater menuInflater) {
        if (this.f1932v < 1) {
            return false;
        }
        ArrayList arrayList = null;
        boolean z5 = false;
        for (Fragment fragment : this.f1915c.f()) {
            if (fragment != null && fragment.isMenuVisible() && fragment.performCreateOptionsMenu(menu, menuInflater)) {
                if (arrayList == null) {
                    arrayList = new ArrayList();
                }
                arrayList.add(fragment);
                z5 = true;
            }
        }
        if (this.f1917e != null) {
            for (int i5 = 0; i5 < this.f1917e.size(); i5++) {
                Fragment fragment2 = (Fragment) this.f1917e.get(i5);
                if (arrayList == null || !arrayList.contains(fragment2)) {
                    fragment2.onDestroyOptionsMenu();
                }
            }
        }
        this.f1917e = arrayList;
        return z5;
    }

    public final void l() {
        boolean z5 = true;
        this.J = true;
        z(true);
        w();
        FragmentHostCallback fragmentHostCallback = this.f1933w;
        boolean z6 = fragmentHostCallback instanceof androidx.lifecycle.d1;
        l1 l1Var = this.f1915c;
        if (z6) {
            z5 = l1Var.f2042d.f2013f;
        } else {
            FragmentActivity fragmentActivity = fragmentHostCallback.f1911e;
            if (fragmentActivity != null) {
                z5 = true ^ fragmentActivity.isChangingConfigurations();
            }
        }
        if (z5) {
            Iterator it = this.f1922l.values().iterator();
            while (it.hasNext()) {
                Iterator it2 = ((c) it.next()).f1975d.iterator();
                while (it2.hasNext()) {
                    l1Var.f2042d.e((String) it2.next(), false);
                }
            }
        }
        u(-1);
        Object obj = this.f1933w;
        if (obj instanceof y0.g) {
            ((y0.g) obj).removeOnTrimMemoryListener(this.f1928r);
        }
        Object obj2 = this.f1933w;
        if (obj2 instanceof y0.f) {
            ((y0.f) obj2).removeOnConfigurationChangedListener(this.f1927q);
        }
        Object obj3 = this.f1933w;
        if (obj3 instanceof x0.c1) {
            ((x0.c1) obj3).removeOnMultiWindowModeChangedListener(this.f1929s);
        }
        Object obj4 = this.f1933w;
        if (obj4 instanceof x0.d1) {
            ((x0.d1) obj4).removeOnPictureInPictureModeChangedListener(this.f1930t);
        }
        Object obj5 = this.f1933w;
        if ((obj5 instanceof androidx.core.view.k) && this.f1935y == null) {
            ((androidx.core.view.k) obj5).removeMenuProvider(this.f1931u);
        }
        this.f1933w = null;
        this.f1934x = null;
        this.f1935y = null;
        if (this.f1919g != null) {
            this.j.remove();
            this.f1919g = null;
        }
        f.f fVar = this.C;
        if (fVar != null) {
            fVar.b();
            this.D.b();
            this.E.b();
        }
    }

    public final void m(boolean z5) {
        if (z5 && (this.f1933w instanceof y0.g)) {
            h0(new IllegalStateException("Do not call dispatchLowMemory() on host. Host implements OnTrimMemoryProvider and automatically dispatches low memory callbacks to fragments."));
            throw null;
        }
        for (Fragment fragment : this.f1915c.f()) {
            if (fragment != null) {
                fragment.performLowMemory();
                if (z5) {
                    fragment.mChildFragmentManager.m(true);
                }
            }
        }
    }

    public final void n(boolean z5, boolean z6) {
        if (z6 && (this.f1933w instanceof x0.c1)) {
            h0(new IllegalStateException("Do not call dispatchMultiWindowModeChanged() on host. Host implements OnMultiWindowModeChangedProvider and automatically dispatches multi-window mode changes to fragments."));
            throw null;
        }
        for (Fragment fragment : this.f1915c.f()) {
            if (fragment != null) {
                fragment.performMultiWindowModeChanged(z5);
                if (z6) {
                    fragment.mChildFragmentManager.n(z5, true);
                }
            }
        }
    }

    public final void o() {
        Iterator it = this.f1915c.e().iterator();
        while (it.hasNext()) {
            Fragment fragment = (Fragment) it.next();
            if (fragment != null) {
                fragment.onHiddenChanged(fragment.isHidden());
                fragment.mChildFragmentManager.o();
            }
        }
    }

    public final boolean p(MenuItem menuItem) {
        if (this.f1932v < 1) {
            return false;
        }
        for (Fragment fragment : this.f1915c.f()) {
            if (fragment != null && fragment.performOptionsItemSelected(menuItem)) {
                return true;
            }
        }
        return false;
    }

    public final void q(Menu menu) {
        if (this.f1932v < 1) {
            return;
        }
        for (Fragment fragment : this.f1915c.f()) {
            if (fragment != null) {
                fragment.performOptionsMenuClosed(menu);
            }
        }
    }

    public final void r(Fragment fragment) {
        if (fragment != null) {
            if (fragment.equals(this.f1915c.b(fragment.mWho))) {
                fragment.performPrimaryNavigationFragmentChanged();
            }
        }
    }

    public final void s(boolean z5, boolean z6) {
        if (z6 && (this.f1933w instanceof x0.d1)) {
            h0(new IllegalStateException("Do not call dispatchPictureInPictureModeChanged() on host. Host implements OnPictureInPictureModeChangedProvider and automatically dispatches picture-in-picture mode changes to fragments."));
            throw null;
        }
        for (Fragment fragment : this.f1915c.f()) {
            if (fragment != null) {
                fragment.performPictureInPictureModeChanged(z5);
                if (z6) {
                    fragment.mChildFragmentManager.s(z5, true);
                }
            }
        }
    }

    public final boolean t(Menu menu) {
        boolean z5 = false;
        if (this.f1932v < 1) {
            return false;
        }
        for (Fragment fragment : this.f1915c.f()) {
            if (fragment != null && fragment.isMenuVisible() && fragment.performPrepareOptionsMenu(menu)) {
                z5 = true;
            }
        }
        return z5;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        sb2.append("FragmentManager{");
        sb2.append(Integer.toHexString(System.identityHashCode(this)));
        sb2.append(" in ");
        Fragment fragment = this.f1935y;
        if (fragment != null) {
            sb2.append(fragment.getClass().getSimpleName());
            sb2.append("{");
            sb2.append(Integer.toHexString(System.identityHashCode(this.f1935y)));
            sb2.append("}");
        } else {
            FragmentHostCallback fragmentHostCallback = this.f1933w;
            if (fragmentHostCallback != null) {
                sb2.append(fragmentHostCallback.getClass().getSimpleName());
                sb2.append("{");
                sb2.append(Integer.toHexString(System.identityHashCode(this.f1933w)));
                sb2.append("}");
            } else {
                sb2.append("null");
            }
        }
        sb2.append("}}");
        return sb2.toString();
    }

    public final void u(int i5) {
        try {
            this.f1914b = true;
            for (k1 k1Var : this.f1915c.f2040b.values()) {
                if (k1Var != null) {
                    k1Var.f2038e = i5;
                }
            }
            R(i5, false);
            Iterator it = e().iterator();
            while (it.hasNext()) {
                ((c2) it.next()).i();
            }
            this.f1914b = false;
            z(true);
        } catch (Throwable th2) {
            this.f1914b = false;
            throw th2;
        }
    }

    public final void v(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        int size;
        String k = k0.d.k(str, "    ");
        l1 l1Var = this.f1915c;
        ArrayList arrayList = l1Var.a;
        String k5 = k0.d.k(str, "    ");
        HashMap hashMap = l1Var.f2040b;
        if (!hashMap.isEmpty()) {
            printWriter.print(str);
            printWriter.println("Active Fragments:");
            for (k1 k1Var : hashMap.values()) {
                printWriter.print(str);
                if (k1Var != null) {
                    Fragment fragment = k1Var.f2036c;
                    printWriter.println(fragment);
                    fragment.dump(k5, fileDescriptor, printWriter, strArr);
                } else {
                    printWriter.println("null");
                }
            }
        }
        int size2 = arrayList.size();
        if (size2 > 0) {
            printWriter.print(str);
            printWriter.println("Added Fragments:");
            for (int i5 = 0; i5 < size2; i5++) {
                Fragment fragment2 = (Fragment) arrayList.get(i5);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(i5);
                printWriter.print(": ");
                printWriter.println(fragment2.toString());
            }
        }
        ArrayList arrayList2 = this.f1917e;
        if (arrayList2 != null && (size = arrayList2.size()) > 0) {
            printWriter.print(str);
            printWriter.println("Fragments Created Menus:");
            for (int i6 = 0; i6 < size; i6++) {
                Fragment fragment3 = (Fragment) this.f1917e.get(i6);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(i6);
                printWriter.print(": ");
                printWriter.println(fragment3.toString());
            }
        }
        int size3 = this.f1916d.size();
        if (size3 > 0) {
            printWriter.print(str);
            printWriter.println("Back Stack:");
            for (int i10 = 0; i10 < size3; i10++) {
                a aVar = (a) this.f1916d.get(i10);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(i10);
                printWriter.print(": ");
                printWriter.println(aVar.toString());
                aVar.o(k, printWriter, true);
            }
        }
        printWriter.print(str);
        printWriter.println("Back Stack Index: " + this.k.get());
        synchronized (this.a) {
            try {
                int size4 = this.a.size();
                if (size4 > 0) {
                    printWriter.print(str);
                    printWriter.println("Pending Actions:");
                    for (int i11 = 0; i11 < size4; i11++) {
                        Object obj = (a1) this.a.get(i11);
                        printWriter.print(str);
                        printWriter.print("  #");
                        printWriter.print(i11);
                        printWriter.print(": ");
                        printWriter.println(obj);
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        printWriter.print(str);
        printWriter.println("FragmentManager misc state:");
        printWriter.print(str);
        printWriter.print("  mHost=");
        printWriter.println(this.f1933w);
        printWriter.print(str);
        printWriter.print("  mContainer=");
        printWriter.println(this.f1934x);
        if (this.f1935y != null) {
            printWriter.print(str);
            printWriter.print("  mParent=");
            printWriter.println(this.f1935y);
        }
        printWriter.print(str);
        printWriter.print("  mCurState=");
        printWriter.print(this.f1932v);
        printWriter.print(" mStateSaved=");
        printWriter.print(this.H);
        printWriter.print(" mStopped=");
        printWriter.print(this.I);
        printWriter.print(" mDestroyed=");
        printWriter.println(this.J);
        if (this.G) {
            printWriter.print(str);
            printWriter.print("  mNeedMenuInvalidate=");
            printWriter.println(this.G);
        }
    }

    public final void w() {
        Iterator it = e().iterator();
        while (it.hasNext()) {
            ((c2) it.next()).i();
        }
    }

    public final void x(a1 a1Var, boolean z5) {
        if (!z5) {
            if (this.f1933w == null) {
                if (!this.J) {
                    throw new IllegalStateException("FragmentManager has not been attached to a host.");
                }
                throw new IllegalStateException("FragmentManager has been destroyed");
            }
            if (Q()) {
                throw new IllegalStateException("Can not perform this action after onSaveInstanceState");
            }
        }
        synchronized (this.a) {
            try {
                if (this.f1933w == null) {
                    if (!z5) {
                        throw new IllegalStateException("Activity has been destroyed");
                    }
                } else {
                    this.a.add(a1Var);
                    b0();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void y(boolean z5) {
        if (this.f1914b) {
            throw new IllegalStateException("FragmentManager is already executing transactions");
        }
        if (this.f1933w == null) {
            if (!this.J) {
                throw new IllegalStateException("FragmentManager has not been attached to a host.");
            }
            throw new IllegalStateException("FragmentManager has been destroyed");
        }
        if (Looper.myLooper() != this.f1933w.f1912i.getLooper()) {
            throw new IllegalStateException("Must be called from main thread of fragment host");
        }
        if (!z5 && Q()) {
            throw new IllegalStateException("Can not perform this action after onSaveInstanceState");
        }
        if (this.L == null) {
            this.L = new ArrayList();
            this.M = new ArrayList();
        }
    }

    public final boolean z(boolean z5) {
        boolean z6;
        a aVar;
        y(z5);
        if (!this.f1921i && (aVar = this.f1920h) != null) {
            aVar.f1957s = false;
            aVar.l();
            if (M(3)) {
                Log.d("FragmentManager", "Reversing mTransitioningOp " + this.f1920h + " as part of execPendingActions for actions " + this.a);
            }
            this.f1920h.m(false, false);
            this.a.add(0, this.f1920h);
            Iterator it = this.f1920h.a.iterator();
            while (it.hasNext()) {
                Fragment fragment = ((m1) it.next()).f2048b;
                if (fragment != null) {
                    fragment.mTransitioning = false;
                }
            }
            this.f1920h = null;
        }
        boolean z7 = false;
        while (true) {
            ArrayList arrayList = this.L;
            ArrayList arrayList2 = this.M;
            synchronized (this.a) {
                if (this.a.isEmpty()) {
                    z6 = false;
                } else {
                    try {
                        int size = this.a.size();
                        z6 = false;
                        for (int i5 = 0; i5 < size; i5++) {
                            z6 |= ((a1) this.a.get(i5)).a(arrayList, arrayList2);
                        }
                    } finally {
                    }
                }
            }
            if (!z6) {
                break;
            }
            this.f1914b = true;
            try {
                Y(this.L, this.M);
                d();
                z7 = true;
            } catch (Throwable th2) {
                d();
                throw th2;
            }
        }
        i0();
        if (this.K) {
            this.K = false;
            Iterator it2 = this.f1915c.d().iterator();
            while (it2.hasNext()) {
                k1 k1Var = (k1) it2.next();
                Fragment fragment2 = k1Var.f2036c;
                if (fragment2.mDeferStart) {
                    if (this.f1914b) {
                        this.K = true;
                    } else {
                        fragment2.mDeferStart = false;
                        k1Var.k();
                    }
                }
            }
        }
        this.f1915c.f2040b.values().removeAll(Collections.singleton(null));
        return z7;
    }
}
