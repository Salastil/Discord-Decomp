package androidx.fragment.app;

import android.graphics.Rect;
import android.os.Build;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import androidx.activity.BackEventCompat;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.WeakHashMap;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes.dex */
public final class q extends x1 {

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f2073c;

    /* renamed from: d, reason: collision with root package name */
    public final y1 f2074d;

    /* renamed from: e, reason: collision with root package name */
    public final y1 f2075e;

    /* renamed from: f, reason: collision with root package name */
    public final u1 f2076f;

    /* renamed from: g, reason: collision with root package name */
    public final Object f2077g;

    /* renamed from: h, reason: collision with root package name */
    public final ArrayList f2078h;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f2079i;
    public final s.e j;
    public final ArrayList k;

    /* renamed from: l, reason: collision with root package name */
    public final ArrayList f2080l;

    /* renamed from: m, reason: collision with root package name */
    public final s.e f2081m;

    /* renamed from: n, reason: collision with root package name */
    public final s.e f2082n;

    /* renamed from: o, reason: collision with root package name */
    public final boolean f2083o;

    /* renamed from: p, reason: collision with root package name */
    public final f1.b f2084p;

    /* renamed from: q, reason: collision with root package name */
    public Object f2085q;

    /* renamed from: r, reason: collision with root package name */
    public boolean f2086r;

    public q(ArrayList transitionInfos, y1 y1Var, y1 y1Var2, u1 transitionImpl, Object obj, ArrayList sharedElementFirstOutViews, ArrayList sharedElementLastInViews, s.e sharedElementNameMapping, ArrayList enteringNames, ArrayList exitingNames, s.e firstOutViews, s.e lastInViews, boolean z5) {
        Intrinsics.checkNotNullParameter(transitionInfos, "transitionInfos");
        Intrinsics.checkNotNullParameter(transitionImpl, "transitionImpl");
        Intrinsics.checkNotNullParameter(sharedElementFirstOutViews, "sharedElementFirstOutViews");
        Intrinsics.checkNotNullParameter(sharedElementLastInViews, "sharedElementLastInViews");
        Intrinsics.checkNotNullParameter(sharedElementNameMapping, "sharedElementNameMapping");
        Intrinsics.checkNotNullParameter(enteringNames, "enteringNames");
        Intrinsics.checkNotNullParameter(exitingNames, "exitingNames");
        Intrinsics.checkNotNullParameter(firstOutViews, "firstOutViews");
        Intrinsics.checkNotNullParameter(lastInViews, "lastInViews");
        this.f2073c = transitionInfos;
        this.f2074d = y1Var;
        this.f2075e = y1Var2;
        this.f2076f = transitionImpl;
        this.f2077g = obj;
        this.f2078h = sharedElementFirstOutViews;
        this.f2079i = sharedElementLastInViews;
        this.j = sharedElementNameMapping;
        this.k = enteringNames;
        this.f2080l = exitingNames;
        this.f2081m = firstOutViews;
        this.f2082n = lastInViews;
        this.f2083o = z5;
        this.f2084p = new f1.b();
    }

    public static void f(View view, ArrayList arrayList) {
        if (!(view instanceof ViewGroup)) {
            if (arrayList.contains(view)) {
                return;
            }
            arrayList.add(view);
            return;
        }
        ViewGroup viewGroup = (ViewGroup) view;
        int i5 = androidx.core.view.u0.a;
        if (viewGroup.isTransitionGroup()) {
            if (arrayList.contains(view)) {
                return;
            }
            arrayList.add(view);
            return;
        }
        int childCount = viewGroup.getChildCount();
        for (int i6 = 0; i6 < childCount; i6++) {
            View child = viewGroup.getChildAt(i6);
            if (child.getVisibility() == 0) {
                Intrinsics.checkNotNullExpressionValue(child, "child");
                f(child, arrayList);
            }
        }
    }

    @Override // androidx.fragment.app.x1
    public final boolean a() {
        Object obj;
        u1 u1Var = this.f2076f;
        if (!u1Var.l()) {
            return false;
        }
        ArrayList arrayList = this.f2073c;
        if (!arrayList.isEmpty()) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                r rVar = (r) it.next();
                if (Build.VERSION.SDK_INT < 34 || (obj = rVar.f2092b) == null || !u1Var.m(obj)) {
                    return false;
                }
            }
        }
        Object obj2 = this.f2077g;
        return obj2 == null || u1Var.m(obj2);
    }

    @Override // androidx.fragment.app.x1
    public final void b(ViewGroup container) {
        Intrinsics.checkNotNullParameter(container, "container");
        this.f2084p.a();
    }

    @Override // androidx.fragment.app.x1
    public final void c(ViewGroup container) {
        Intrinsics.checkNotNullParameter(container, "container");
        boolean isLaidOut = container.isLaidOut();
        ArrayList arrayList = this.f2073c;
        if (!isLaidOut || this.f2086r) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                r rVar = (r) it.next();
                y1 y1Var = rVar.a;
                if (FragmentManager.M(2)) {
                    if (this.f2086r) {
                        Log.v("FragmentManager", "SpecialEffectsController: TransitionSeekController was not created. Completing operation " + y1Var);
                    } else {
                        Log.v("FragmentManager", "SpecialEffectsController: Container " + container + " has not been laid out. Completing operation " + y1Var);
                    }
                }
                rVar.a.c(this);
            }
            this.f2086r = false;
            return;
        }
        Object obj = this.f2085q;
        u1 u1Var = this.f2076f;
        y1 y1Var2 = this.f2075e;
        y1 y1Var3 = this.f2074d;
        if (obj != null) {
            Intrinsics.checkNotNull(obj);
            u1Var.c(obj);
            if (FragmentManager.M(2)) {
                Log.v("FragmentManager", "Ending execution of operations from " + y1Var3 + " to " + y1Var2);
                return;
            }
            return;
        }
        Pair g6 = g(container, y1Var2, y1Var3);
        ArrayList arrayList2 = (ArrayList) g6.f13474d;
        Object obj2 = g6.f13475e;
        ArrayList arrayList3 = new ArrayList(kotlin.collections.d0.l(arrayList, 10));
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            arrayList3.add(((r) it2.next()).a);
        }
        Iterator it3 = arrayList3.iterator();
        while (it3.hasNext()) {
            y1 y1Var4 = (y1) it3.next();
            u1Var.u(y1Var4.f2125c, obj2, this.f2084p, new n(y1Var4, this, 1));
        }
        i(arrayList2, container, new o(this, container, obj2));
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Completed executing operations from " + y1Var3 + " to " + y1Var2);
        }
    }

    @Override // androidx.fragment.app.x1
    public final void d(BackEventCompat backEvent, ViewGroup container) {
        Intrinsics.checkNotNullParameter(backEvent, "backEvent");
        Intrinsics.checkNotNullParameter(container, "container");
        Object obj = this.f2085q;
        if (obj != null) {
            this.f2076f.r(obj, backEvent.f731c);
        }
    }

    @Override // androidx.fragment.app.x1
    public final void e(ViewGroup container) {
        Object obj;
        Intrinsics.checkNotNullParameter(container, "container");
        boolean isLaidOut = container.isLaidOut();
        ArrayList arrayList = this.f2073c;
        if (!isLaidOut) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                y1 y1Var = ((r) it.next()).a;
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "SpecialEffectsController: Container " + container + " has not been laid out. Skipping onStart for operation " + y1Var);
                }
            }
            return;
        }
        boolean h6 = h();
        y1 y1Var2 = this.f2075e;
        y1 y1Var3 = this.f2074d;
        if (h6 && (obj = this.f2077g) != null && !a()) {
            Log.i("FragmentManager", "Ignoring shared elements transition " + obj + " between " + y1Var3 + " and " + y1Var2 + " as neither fragment has set a Transition. In order to run a SharedElementTransition, you must also set either an enter or exit transition on a fragment involved in the transaction. The sharedElementTransition will run after the back gesture has been committed.");
        }
        if (a() && h()) {
            Ref.ObjectRef objectRef = new Ref.ObjectRef();
            Pair g6 = g(container, y1Var2, y1Var3);
            ArrayList arrayList2 = (ArrayList) g6.f13474d;
            Object obj2 = g6.f13475e;
            ArrayList arrayList3 = new ArrayList(kotlin.collections.d0.l(arrayList, 10));
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                arrayList3.add(((r) it2.next()).a);
            }
            Iterator it3 = arrayList3.iterator();
            while (it3.hasNext()) {
                y1 y1Var4 = (y1) it3.next();
                y yVar = new y(1, objectRef);
                Fragment fragment = y1Var4.f2125c;
                this.f2076f.v(obj2, this.f2084p, yVar, new n(y1Var4, this, 0));
            }
            i(arrayList2, container, new p(this, container, obj2, objectRef));
        }
    }

    public final Pair g(ViewGroup viewGroup, y1 y1Var, y1 y1Var2) {
        ArrayList arrayList;
        ArrayList arrayList2;
        Object obj;
        u1 u1Var;
        Object obj2;
        ArrayList arrayList3;
        ArrayList arrayList4;
        Iterator it;
        View view = new View(viewGroup.getContext());
        Rect rect = new Rect();
        ArrayList arrayList5 = this.f2073c;
        Iterator it2 = arrayList5.iterator();
        View view2 = null;
        boolean z5 = false;
        while (true) {
            boolean hasNext = it2.hasNext();
            arrayList = this.f2079i;
            arrayList2 = this.f2078h;
            obj = this.f2077g;
            u1Var = this.f2076f;
            if (!hasNext) {
                break;
            }
            if (((r) it2.next()).f2094d == null || y1Var2 == null || y1Var == null || this.j.isEmpty() || obj == null) {
                arrayList4 = arrayList5;
                it = it2;
            } else {
                Fragment fragment = y1Var.f2125c;
                Fragment fragment2 = y1Var2.f2125c;
                arrayList4 = arrayList5;
                boolean z6 = this.f2083o;
                it = it2;
                s.e eVar = this.f2081m;
                n1.a(fragment, fragment2, z6, eVar);
                androidx.core.view.u.a(viewGroup, new e(y1Var, y1Var2, this, 1));
                arrayList2.addAll(eVar.values());
                ArrayList arrayList6 = this.f2080l;
                if (!arrayList6.isEmpty()) {
                    Object obj3 = arrayList6.get(0);
                    Intrinsics.checkNotNullExpressionValue(obj3, "exitingNames[0]");
                    View view3 = (View) eVar.get((String) obj3);
                    u1Var.s(view3, obj);
                    view2 = view3;
                }
                s.e eVar2 = this.f2082n;
                arrayList.addAll(eVar2.values());
                ArrayList arrayList7 = this.k;
                if (!arrayList7.isEmpty()) {
                    Object obj4 = arrayList7.get(0);
                    Intrinsics.checkNotNullExpressionValue(obj4, "enteringNames[0]");
                    View view4 = (View) eVar2.get((String) obj4);
                    if (view4 != null) {
                        androidx.core.view.u.a(viewGroup, new e(u1Var, view4, rect, 2));
                        z5 = true;
                    }
                }
                u1Var.w(obj, view, arrayList2);
                Object obj5 = this.f2077g;
                u1Var.q(obj5, null, null, obj5, arrayList);
            }
            arrayList5 = arrayList4;
            it2 = it;
        }
        ArrayList arrayList8 = arrayList5;
        ArrayList arrayList9 = arrayList;
        ArrayList arrayList10 = new ArrayList();
        Iterator it3 = arrayList8.iterator();
        Object obj6 = null;
        Object obj7 = null;
        while (it3.hasNext()) {
            ArrayList arrayList11 = arrayList9;
            r rVar = (r) it3.next();
            Iterator it4 = it3;
            y1 y1Var3 = rVar.a;
            boolean z7 = z5;
            Object h6 = u1Var.h(rVar.f2092b);
            if (h6 != null) {
                ArrayList arrayList12 = arrayList2;
                ArrayList arrayList13 = new ArrayList();
                Object obj8 = obj;
                Fragment fragment3 = y1Var3.f2125c;
                Object obj9 = obj7;
                View view5 = fragment3.mView;
                Object obj10 = obj6;
                Intrinsics.checkNotNullExpressionValue(view5, "operation.fragment.mView");
                f(view5, arrayList13);
                if (obj8 != null && (y1Var3 == y1Var2 || y1Var3 == y1Var)) {
                    if (y1Var3 == y1Var2) {
                        arrayList13.removeAll(CollectionsKt.l0(arrayList12));
                    } else {
                        arrayList13.removeAll(CollectionsKt.l0(arrayList11));
                    }
                }
                if (arrayList13.isEmpty()) {
                    u1Var.a(view, h6);
                    obj2 = h6;
                    arrayList3 = arrayList13;
                } else {
                    u1Var.b(h6, arrayList13);
                    u1Var.q(h6, h6, arrayList13, null, null);
                    obj2 = h6;
                    arrayList3 = arrayList13;
                    if (y1Var3.a == a2.f1963i) {
                        y1Var3.f2131i = false;
                        ArrayList arrayList14 = new ArrayList(arrayList3);
                        arrayList14.remove(fragment3.mView);
                        u1Var.p(obj2, fragment3.mView, arrayList14);
                        androidx.core.view.u.a(viewGroup, new y(2, arrayList3));
                    }
                }
                if (y1Var3.a == a2.f1962e) {
                    arrayList10.addAll(arrayList3);
                    if (z7) {
                        u1Var.t(obj2, rect);
                    }
                    if (FragmentManager.M(2)) {
                        Log.v("FragmentManager", "Entering Transition: " + obj2);
                        Log.v("FragmentManager", ">>>>> EnteringViews <<<<<");
                        Iterator it5 = arrayList3.iterator();
                        while (it5.hasNext()) {
                            Object transitioningViews = it5.next();
                            Intrinsics.checkNotNullExpressionValue(transitioningViews, "transitioningViews");
                            Log.v("FragmentManager", "View: " + ((View) transitioningViews));
                        }
                    }
                } else {
                    u1Var.s(view2, obj2);
                    if (FragmentManager.M(2)) {
                        Log.v("FragmentManager", "Exiting Transition: " + obj2);
                        Log.v("FragmentManager", ">>>>> ExitingViews <<<<<");
                        Iterator it6 = arrayList3.iterator();
                        while (it6.hasNext()) {
                            Object transitioningViews2 = it6.next();
                            Intrinsics.checkNotNullExpressionValue(transitioningViews2, "transitioningViews");
                            Log.v("FragmentManager", "View: " + ((View) transitioningViews2));
                        }
                    }
                }
                if (rVar.f2093c) {
                    obj6 = u1Var.o(obj10, obj2);
                    arrayList9 = arrayList11;
                    it3 = it4;
                    z5 = z7;
                    arrayList2 = arrayList12;
                    obj = obj8;
                    obj7 = obj9;
                } else {
                    obj7 = u1Var.o(obj9, obj2);
                    obj6 = obj10;
                    arrayList9 = arrayList11;
                    it3 = it4;
                    z5 = z7;
                    arrayList2 = arrayList12;
                    obj = obj8;
                }
            } else {
                arrayList9 = arrayList11;
                it3 = it4;
                z5 = z7;
            }
        }
        Object n6 = u1Var.n(obj6, obj7, obj);
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Final merged transition: " + n6 + " for container " + viewGroup);
        }
        return new Pair(arrayList10, n6);
    }

    public final boolean h() {
        ArrayList arrayList = this.f2073c;
        if (arrayList.isEmpty()) {
            return true;
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            if (!((r) it.next()).a.f2125c.mTransitioning) {
                return false;
            }
        }
        return true;
    }

    public final void i(ArrayList arrayList, ViewGroup viewGroup, Function0 function0) {
        n1.c(4, arrayList);
        ArrayList arrayList2 = new ArrayList();
        ArrayList arrayList3 = this.f2079i;
        int size = arrayList3.size();
        for (int i5 = 0; i5 < size; i5++) {
            View view = (View) arrayList3.get(i5);
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            arrayList2.add(androidx.core.view.j0.f(view));
            androidx.core.view.j0.n(view, null);
        }
        boolean M = FragmentManager.M(2);
        ArrayList arrayList4 = this.f2078h;
        if (M) {
            Log.v("FragmentManager", ">>>>> Beginning transition <<<<<");
            Log.v("FragmentManager", ">>>>> SharedElementFirstOutViews <<<<<");
            Iterator it = arrayList4.iterator();
            while (it.hasNext()) {
                Object sharedElementFirstOutViews = it.next();
                Intrinsics.checkNotNullExpressionValue(sharedElementFirstOutViews, "sharedElementFirstOutViews");
                View view2 = (View) sharedElementFirstOutViews;
                StringBuilder sb2 = new StringBuilder("View: ");
                sb2.append(view2);
                sb2.append(" Name: ");
                WeakHashMap weakHashMap2 = androidx.core.view.s0.a;
                sb2.append(androidx.core.view.j0.f(view2));
                Log.v("FragmentManager", sb2.toString());
            }
            Log.v("FragmentManager", ">>>>> SharedElementLastInViews <<<<<");
            Iterator it2 = arrayList3.iterator();
            while (it2.hasNext()) {
                Object sharedElementLastInViews = it2.next();
                Intrinsics.checkNotNullExpressionValue(sharedElementLastInViews, "sharedElementLastInViews");
                View view3 = (View) sharedElementLastInViews;
                StringBuilder sb3 = new StringBuilder("View: ");
                sb3.append(view3);
                sb3.append(" Name: ");
                WeakHashMap weakHashMap3 = androidx.core.view.s0.a;
                sb3.append(androidx.core.view.j0.f(view3));
                Log.v("FragmentManager", sb3.toString());
            }
        }
        function0.invoke();
        int size2 = arrayList3.size();
        ArrayList arrayList5 = new ArrayList();
        for (int i6 = 0; i6 < size2; i6++) {
            View view4 = (View) arrayList4.get(i6);
            WeakHashMap weakHashMap4 = androidx.core.view.s0.a;
            String f2 = androidx.core.view.j0.f(view4);
            arrayList5.add(f2);
            if (f2 != null) {
                androidx.core.view.j0.n(view4, null);
                String str = (String) this.j.get(f2);
                int i10 = 0;
                while (true) {
                    if (i10 >= size2) {
                        break;
                    }
                    if (str.equals(arrayList2.get(i10))) {
                        androidx.core.view.j0.n((View) arrayList3.get(i10), f2);
                        break;
                    }
                    i10++;
                }
            }
        }
        androidx.core.view.u.a(viewGroup, new t1(size2, arrayList3, arrayList2, arrayList4, arrayList5));
        n1.c(0, arrayList);
        this.f2076f.x(this.f2077g, arrayList4, arrayList3);
    }
}
