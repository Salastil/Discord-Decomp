package androidx.fragment.app;

import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import com.discord.R;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class c2 {
    public final ViewGroup a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f1978b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f1979c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f1980d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f1981e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f1982f;

    public c2(ViewGroup container) {
        Intrinsics.checkNotNullParameter(container, "container");
        this.a = container;
        this.f1978b = new ArrayList();
        this.f1979c = new ArrayList();
    }

    public static final c2 j(ViewGroup container, FragmentManager fragmentManager) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(fragmentManager, "fragmentManager");
        ha.k factory = fragmentManager.K();
        Intrinsics.checkNotNullExpressionValue(factory, "fragmentManager.specialEffectsControllerFactory");
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(factory, "factory");
        Object tag = container.getTag(R.id.special_effects_controller_view_tag);
        if (tag instanceof c2) {
            return (c2) tag;
        }
        factory.getClass();
        Intrinsics.checkNotNullParameter(container, "container");
        t tVar = new t(container);
        Intrinsics.checkNotNullExpressionValue(tVar, "factory.createController(container)");
        container.setTag(R.id.special_effects_controller_view_tag, tVar);
        return tVar;
    }

    public static boolean k(ArrayList arrayList) {
        boolean z5;
        Iterator it = arrayList.iterator();
        loop0: while (true) {
            z5 = true;
            while (it.hasNext()) {
                y1 y1Var = (y1) it.next();
                if (!y1Var.k.isEmpty()) {
                    ArrayList arrayList2 = y1Var.k;
                    if (arrayList2 == null || !arrayList2.isEmpty()) {
                        Iterator it2 = arrayList2.iterator();
                        while (it2.hasNext()) {
                            if (!((x1) it2.next()).a()) {
                                break;
                            }
                        }
                    }
                }
                z5 = false;
            }
            break loop0;
        }
        if (z5) {
            ArrayList arrayList3 = new ArrayList();
            Iterator it3 = arrayList.iterator();
            while (it3.hasNext()) {
                kotlin.collections.h0.o(arrayList3, ((y1) it3.next()).k);
            }
            if (!arrayList3.isEmpty()) {
                return true;
            }
        }
        return false;
    }

    public final void a(y1 operation) {
        Intrinsics.checkNotNullParameter(operation, "operation");
        if (operation.f2131i) {
            a2 a2Var = operation.a;
            View requireView = operation.f2125c.requireView();
            Intrinsics.checkNotNullExpressionValue(requireView, "operation.fragment.requireView()");
            a2Var.a(requireView, this.a);
            operation.f2131i = false;
        }
    }

    public abstract void b(ArrayList arrayList, boolean z5);

    public final void c(List operations) {
        Intrinsics.checkNotNullParameter(operations, "operations");
        ArrayList arrayList = new ArrayList();
        Iterator it = operations.iterator();
        while (it.hasNext()) {
            kotlin.collections.h0.o(arrayList, ((y1) it.next()).k);
        }
        List i02 = CollectionsKt.i0(CollectionsKt.l0(arrayList));
        int size = i02.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((x1) i02.get(i5)).c(this.a);
        }
        int size2 = operations.size();
        for (int i6 = 0; i6 < size2; i6++) {
            a((y1) operations.get(i6));
        }
        List i03 = CollectionsKt.i0(operations);
        int size3 = i03.size();
        for (int i10 = 0; i10 < size3; i10++) {
            y1 y1Var = (y1) i03.get(i10);
            if (y1Var.k.isEmpty()) {
                y1Var.b();
            }
        }
    }

    public final void d(a2 a2Var, z1 z1Var, k1 k1Var) {
        synchronized (this.f1978b) {
            try {
                Fragment fragment = k1Var.f2036c;
                Intrinsics.checkNotNullExpressionValue(fragment, "fragmentStateManager.fragment");
                y1 g6 = g(fragment);
                if (g6 == null) {
                    Fragment fragment2 = k1Var.f2036c;
                    if (!fragment2.mTransitioning && !fragment2.mRemoving) {
                        g6 = null;
                    }
                    Intrinsics.checkNotNullExpressionValue(fragment2, "fragmentStateManager.fragment");
                    g6 = h(fragment2);
                }
                if (g6 != null) {
                    g6.d(a2Var, z1Var);
                    return;
                }
                final y1 y1Var = new y1(a2Var, z1Var, k1Var);
                this.f1978b.add(y1Var);
                final int i5 = 0;
                Runnable listener = new Runnable(this) { // from class: androidx.fragment.app.w1

                    /* renamed from: e, reason: collision with root package name */
                    public final /* synthetic */ c2 f2115e;

                    {
                        this.f2115e = this;
                    }

                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i5) {
                            case 0:
                                c2 this$0 = this.f2115e;
                                Intrinsics.checkNotNullParameter(this$0, "this$0");
                                y1 operation = y1Var;
                                Intrinsics.checkNotNullParameter(operation, "$operation");
                                if (this$0.f1978b.contains(operation)) {
                                    a2 a2Var2 = operation.a;
                                    View view = operation.f2125c.mView;
                                    Intrinsics.checkNotNullExpressionValue(view, "operation.fragment.mView");
                                    a2Var2.a(view, this$0.a);
                                    break;
                                }
                                break;
                            default:
                                c2 this$02 = this.f2115e;
                                Intrinsics.checkNotNullParameter(this$02, "this$0");
                                y1 operation2 = y1Var;
                                Intrinsics.checkNotNullParameter(operation2, "$operation");
                                this$02.f1978b.remove(operation2);
                                this$02.f1979c.remove(operation2);
                                break;
                        }
                    }
                };
                Intrinsics.checkNotNullParameter(listener, "listener");
                y1Var.f2126d.add(listener);
                final int i6 = 1;
                Runnable listener2 = new Runnable(this) { // from class: androidx.fragment.app.w1

                    /* renamed from: e, reason: collision with root package name */
                    public final /* synthetic */ c2 f2115e;

                    {
                        this.f2115e = this;
                    }

                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i6) {
                            case 0:
                                c2 this$0 = this.f2115e;
                                Intrinsics.checkNotNullParameter(this$0, "this$0");
                                y1 operation = y1Var;
                                Intrinsics.checkNotNullParameter(operation, "$operation");
                                if (this$0.f1978b.contains(operation)) {
                                    a2 a2Var2 = operation.a;
                                    View view = operation.f2125c.mView;
                                    Intrinsics.checkNotNullExpressionValue(view, "operation.fragment.mView");
                                    a2Var2.a(view, this$0.a);
                                    break;
                                }
                                break;
                            default:
                                c2 this$02 = this.f2115e;
                                Intrinsics.checkNotNullParameter(this$02, "this$0");
                                y1 operation2 = y1Var;
                                Intrinsics.checkNotNullParameter(operation2, "$operation");
                                this$02.f1978b.remove(operation2);
                                this$02.f1979c.remove(operation2);
                                break;
                        }
                    }
                };
                Intrinsics.checkNotNullParameter(listener2, "listener");
                y1Var.f2126d.add(listener2);
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void e(a2 finalState, k1 fragmentStateManager) {
        Intrinsics.checkNotNullParameter(finalState, "finalState");
        Intrinsics.checkNotNullParameter(fragmentStateManager, "fragmentStateManager");
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "SpecialEffectsController: Enqueuing add operation for fragment " + fragmentStateManager.f2036c);
        }
        d(finalState, z1.f2134e, fragmentStateManager);
    }

    public final void f() {
        boolean z5;
        if (this.f1982f) {
            return;
        }
        if (!this.a.isAttachedToWindow()) {
            i();
            this.f1981e = false;
            return;
        }
        synchronized (this.f1978b) {
            try {
                ArrayList j02 = CollectionsKt.j0(this.f1979c);
                this.f1979c.clear();
                Iterator it = j02.iterator();
                while (true) {
                    z5 = true;
                    if (!it.hasNext()) {
                        break;
                    }
                    y1 y1Var = (y1) it.next();
                    if (this.f1978b.isEmpty() || !y1Var.f2125c.mTransitioning) {
                        z5 = false;
                    }
                    y1Var.f2129g = z5;
                }
                Iterator it2 = j02.iterator();
                while (it2.hasNext()) {
                    y1 y1Var2 = (y1) it2.next();
                    if (this.f1980d) {
                        if (FragmentManager.M(2)) {
                            Log.v("FragmentManager", "SpecialEffectsController: Completing non-seekable operation " + y1Var2);
                        }
                        y1Var2.b();
                    } else {
                        if (FragmentManager.M(2)) {
                            Log.v("FragmentManager", "SpecialEffectsController: Cancelling operation " + y1Var2);
                        }
                        y1Var2.a(this.a);
                    }
                    this.f1980d = false;
                    if (!y1Var2.f2128f) {
                        this.f1979c.add(y1Var2);
                    }
                }
                if (!this.f1978b.isEmpty()) {
                    n();
                    ArrayList j03 = CollectionsKt.j0(this.f1978b);
                    if (j03.isEmpty()) {
                        return;
                    }
                    this.f1978b.clear();
                    this.f1979c.addAll(j03);
                    if (FragmentManager.M(2)) {
                        Log.v("FragmentManager", "SpecialEffectsController: Executing pending operations");
                    }
                    b(j03, this.f1981e);
                    boolean k = k(j03);
                    Iterator it3 = j03.iterator();
                    boolean z6 = true;
                    while (it3.hasNext()) {
                        if (!((y1) it3.next()).f2125c.mTransitioning) {
                            z6 = false;
                        }
                    }
                    if (!z6 || k) {
                        z5 = false;
                    }
                    this.f1980d = z5;
                    if (FragmentManager.M(2)) {
                        Log.v("FragmentManager", "SpecialEffectsController: Operation seekable = " + k + " \ntransition = " + z6);
                    }
                    if (!z6) {
                        m(j03);
                        c(j03);
                    } else if (k) {
                        m(j03);
                        int size = j03.size();
                        for (int i5 = 0; i5 < size; i5++) {
                            a((y1) j03.get(i5));
                        }
                    }
                    this.f1981e = false;
                    if (FragmentManager.M(2)) {
                        Log.v("FragmentManager", "SpecialEffectsController: Finished executing pending operations");
                    }
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final y1 g(Fragment fragment) {
        Object obj;
        Iterator it = this.f1978b.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            y1 y1Var = (y1) obj;
            if (Intrinsics.areEqual(y1Var.f2125c, fragment) && !y1Var.f2127e) {
                break;
            }
        }
        return (y1) obj;
    }

    public final y1 h(Fragment fragment) {
        Object obj;
        Iterator it = this.f1979c.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            y1 y1Var = (y1) obj;
            if (Intrinsics.areEqual(y1Var.f2125c, fragment) && !y1Var.f2127e) {
                break;
            }
        }
        return (y1) obj;
    }

    public final void i() {
        String str;
        String str2;
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "SpecialEffectsController: Forcing all operations to complete");
        }
        boolean isAttachedToWindow = this.a.isAttachedToWindow();
        synchronized (this.f1978b) {
            try {
                n();
                m(this.f1978b);
                ArrayList j02 = CollectionsKt.j0(this.f1979c);
                Iterator it = j02.iterator();
                while (it.hasNext()) {
                    ((y1) it.next()).f2129g = false;
                }
                Iterator it2 = j02.iterator();
                while (it2.hasNext()) {
                    y1 y1Var = (y1) it2.next();
                    if (FragmentManager.M(2)) {
                        if (isAttachedToWindow) {
                            str2 = "";
                        } else {
                            str2 = "Container " + this.a + " is not attached to window. ";
                        }
                        Log.v("FragmentManager", "SpecialEffectsController: " + str2 + "Cancelling running operation " + y1Var);
                    }
                    y1Var.a(this.a);
                }
                ArrayList j03 = CollectionsKt.j0(this.f1978b);
                Iterator it3 = j03.iterator();
                while (it3.hasNext()) {
                    ((y1) it3.next()).f2129g = false;
                }
                Iterator it4 = j03.iterator();
                while (it4.hasNext()) {
                    y1 y1Var2 = (y1) it4.next();
                    if (FragmentManager.M(2)) {
                        if (isAttachedToWindow) {
                            str = "";
                        } else {
                            str = "Container " + this.a + " is not attached to window. ";
                        }
                        Log.v("FragmentManager", "SpecialEffectsController: " + str + "Cancelling pending operation " + y1Var2);
                    }
                    y1Var2.a(this.a);
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void l() {
        Object obj;
        a2 a2Var;
        synchronized (this.f1978b) {
            try {
                n();
                ArrayList arrayList = this.f1978b;
                ListIterator listIterator = arrayList.listIterator(arrayList.size());
                while (true) {
                    if (!listIterator.hasPrevious()) {
                        obj = null;
                        break;
                    }
                    obj = listIterator.previous();
                    y1 y1Var = (y1) obj;
                    View view = y1Var.f2125c.mView;
                    Intrinsics.checkNotNullExpressionValue(view, "operation.fragment.mView");
                    Intrinsics.checkNotNullParameter(view, "<this>");
                    if (view.getAlpha() == 0.0f && view.getVisibility() == 0) {
                        a2Var = a2.f1964v;
                    } else {
                        int visibility = view.getVisibility();
                        if (visibility == 0) {
                            a2Var = a2.f1962e;
                        } else if (visibility == 4) {
                            a2Var = a2.f1964v;
                        } else {
                            if (visibility != 8) {
                                throw new IllegalArgumentException("Unknown visibility " + visibility);
                            }
                            a2Var = a2.f1963i;
                        }
                    }
                    a2 a2Var2 = y1Var.a;
                    a2 a2Var3 = a2.f1962e;
                    if (a2Var2 == a2Var3 && a2Var != a2Var3) {
                        break;
                    }
                }
                y1 y1Var2 = (y1) obj;
                Fragment fragment = y1Var2 != null ? y1Var2.f2125c : null;
                this.f1982f = fragment != null ? fragment.isPostponed() : false;
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void m(List list) {
        int size = list.size();
        for (int i5 = 0; i5 < size; i5++) {
            y1 y1Var = (y1) list.get(i5);
            k1 k1Var = y1Var.f2132l;
            if (!y1Var.f2130h) {
                y1Var.f2130h = true;
                z1 z1Var = y1Var.f2124b;
                if (z1Var == z1.f2134e) {
                    Fragment fragment = k1Var.f2036c;
                    Intrinsics.checkNotNullExpressionValue(fragment, "fragmentStateManager.fragment");
                    View findFocus = fragment.mView.findFocus();
                    if (findFocus != null) {
                        fragment.setFocusedView(findFocus);
                        if (FragmentManager.M(2)) {
                            Log.v("FragmentManager", "requestFocus: Saved focused view " + findFocus + " for Fragment " + fragment);
                        }
                    }
                    View requireView = y1Var.f2125c.requireView();
                    Intrinsics.checkNotNullExpressionValue(requireView, "this.fragment.requireView()");
                    if (requireView.getParent() == null) {
                        if (FragmentManager.M(2)) {
                            Log.v("FragmentManager", "Adding fragment " + fragment + " view " + requireView + " to container in onStart");
                        }
                        k1Var.b();
                        requireView.setAlpha(0.0f);
                    }
                    if (requireView.getAlpha() == 0.0f && requireView.getVisibility() == 0) {
                        if (FragmentManager.M(2)) {
                            Log.v("FragmentManager", "Making view " + requireView + " INVISIBLE in onStart");
                        }
                        requireView.setVisibility(4);
                    }
                    requireView.setAlpha(fragment.getPostOnViewCreatedAlpha());
                    if (FragmentManager.M(2)) {
                        Log.v("FragmentManager", "Setting view alpha to " + fragment.getPostOnViewCreatedAlpha() + " in onStart");
                    }
                } else if (z1Var == z1.f2135i) {
                    Fragment fragment2 = k1Var.f2036c;
                    Intrinsics.checkNotNullExpressionValue(fragment2, "fragmentStateManager.fragment");
                    View requireView2 = fragment2.requireView();
                    Intrinsics.checkNotNullExpressionValue(requireView2, "fragment.requireView()");
                    if (FragmentManager.M(2)) {
                        Log.v("FragmentManager", "Clearing focus " + requireView2.findFocus() + " on view " + requireView2 + " for Fragment " + fragment2);
                    }
                    requireView2.clearFocus();
                }
            }
        }
        ArrayList arrayList = new ArrayList();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            kotlin.collections.h0.o(arrayList, ((y1) it.next()).k);
        }
        List i02 = CollectionsKt.i0(CollectionsKt.l0(arrayList));
        int size2 = i02.size();
        for (int i6 = 0; i6 < size2; i6++) {
            x1 x1Var = (x1) i02.get(i6);
            x1Var.getClass();
            ViewGroup container = this.a;
            Intrinsics.checkNotNullParameter(container, "container");
            if (!x1Var.a) {
                x1Var.e(container);
            }
            x1Var.a = true;
        }
    }

    public final void n() {
        a2 a2Var;
        Iterator it = this.f1978b.iterator();
        while (it.hasNext()) {
            y1 y1Var = (y1) it.next();
            if (y1Var.f2124b == z1.f2134e) {
                View requireView = y1Var.f2125c.requireView();
                Intrinsics.checkNotNullExpressionValue(requireView, "fragment.requireView()");
                int visibility = requireView.getVisibility();
                if (visibility == 0) {
                    a2Var = a2.f1962e;
                } else if (visibility == 4) {
                    a2Var = a2.f1964v;
                } else {
                    if (visibility != 8) {
                        throw new IllegalArgumentException(k0.d.i(visibility, "Unknown visibility "));
                    }
                    a2Var = a2.f1963i;
                }
                y1Var.d(a2Var, z1.f2133d);
            }
        }
    }
}
