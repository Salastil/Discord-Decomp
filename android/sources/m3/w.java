package m3;

import android.animation.Animator;
import android.os.Build;
import android.util.SparseArray;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.view.WindowId;
import androidx.transition.Transition;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Objects;

/* loaded from: classes.dex */
public final class w implements ViewTreeObserver.OnPreDrawListener, View.OnAttachStateChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public Transition f14390d;

    /* renamed from: e, reason: collision with root package name */
    public ViewGroup f14391e;

    /* JADX WARN: Removed duplicated region for block: B:117:0x01e5 A[EDGE_INSN: B:117:0x01e5->B:118:0x01e5 BREAK  A[LOOP:1: B:18:0x0087->B:29:0x01dc], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:121:0x01ec  */
    /* JADX WARN: Removed duplicated region for block: B:12:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:131:0x020d  */
    /* JADX WARN: Removed duplicated region for block: B:141:0x023e  */
    /* JADX WARN: Removed duplicated region for block: B:183:0x02c0  */
    /* JADX WARN: Removed duplicated region for block: B:192:0x02ea  */
    /* JADX WARN: Removed duplicated region for block: B:194:0x02f0  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x008d  */
    @Override // android.view.ViewTreeObserver.OnPreDrawListener
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onPreDraw() {
        ArrayList arrayList;
        int i5;
        s.e eVar;
        s.e eVar2;
        int i6;
        int[] iArr;
        int i10;
        int i11;
        ArrayList arrayList2;
        int i12;
        int i13;
        p pVar;
        boolean z5;
        b0 b0Var;
        View view;
        View view2;
        boolean z6;
        Transition transition = this.f14390d;
        ViewGroup viewGroup = this.f14391e;
        viewGroup.getViewTreeObserver().removeOnPreDrawListener(this);
        viewGroup.removeOnAttachStateChangeListener(this);
        boolean z7 = true;
        if (!x.f14393c.remove(viewGroup)) {
            return true;
        }
        s.e b10 = x.b();
        ArrayList arrayList3 = (ArrayList) b10.get(viewGroup);
        if (arrayList3 == null) {
            arrayList3 = new ArrayList();
            b10.put(viewGroup, arrayList3);
        } else if (arrayList3.size() > 0) {
            arrayList = new ArrayList(arrayList3);
            arrayList3.add(transition);
            transition.a(new v(this, b10));
            i5 = 0;
            transition.h(viewGroup, false);
            if (arrayList != null) {
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    ((Transition) it.next()).F(viewGroup);
                }
            }
            transition.I = new ArrayList();
            transition.J = new ArrayList();
            com.google.firebase.messaging.r rVar = transition.E;
            com.google.firebase.messaging.r rVar2 = transition.F;
            eVar = new s.e((s.e) rVar.f6259e);
            eVar2 = new s.e((s.e) rVar2.f6259e);
            i6 = 0;
            while (true) {
                iArr = transition.H;
                if (i6 < iArr.length) {
                    break;
                }
                int i14 = iArr[i6];
                if (i14 == z7) {
                    z5 = z7;
                    for (int i15 = eVar.f1208i - 1; i15 >= 0; i15--) {
                        View view3 = (View) eVar.f(i15);
                        if (view3 != null && transition.y(view3) && (b0Var = (b0) eVar2.remove(view3)) != null && transition.y(b0Var.f14327b)) {
                            transition.I.add((b0) eVar.g(i15));
                            transition.J.add(b0Var);
                        }
                    }
                } else if (i14 == 2) {
                    z5 = z7;
                    s.e eVar3 = (s.e) rVar.f6262w;
                    s.e eVar4 = (s.e) rVar2.f6262w;
                    int i16 = eVar3.f1208i;
                    for (int i17 = 0; i17 < i16; i17++) {
                        View view4 = (View) eVar3.i(i17);
                        if (view4 != null && transition.y(view4) && (view = (View) eVar4.get((String) eVar3.f(i17))) != null && transition.y(view)) {
                            b0 b0Var2 = (b0) eVar.get(view4);
                            b0 b0Var3 = (b0) eVar2.get(view);
                            if (b0Var2 != null && b0Var3 != null) {
                                transition.I.add(b0Var2);
                                transition.J.add(b0Var3);
                                eVar.remove(view4);
                                eVar2.remove(view);
                            }
                        }
                    }
                } else if (i14 != 3) {
                    if (i14 == 4) {
                        s.k kVar = (s.k) rVar.f6261v;
                        s.k kVar2 = (s.k) rVar2.f6261v;
                        int f2 = kVar.f();
                        int i18 = i5;
                        while (i18 < f2) {
                            View view5 = (View) kVar.g(i18);
                            if (view5 == null || !transition.y(view5)) {
                                z6 = z7;
                            } else {
                                z6 = z7;
                                View view6 = (View) kVar2.b(kVar.d(i18));
                                if (view6 != null && transition.y(view6)) {
                                    b0 b0Var4 = (b0) eVar.get(view5);
                                    b0 b0Var5 = (b0) eVar2.get(view6);
                                    if (b0Var4 != null && b0Var5 != null) {
                                        transition.I.add(b0Var4);
                                        transition.J.add(b0Var5);
                                        eVar.remove(view5);
                                        eVar2.remove(view6);
                                    }
                                }
                            }
                            i18++;
                            z7 = z6;
                        }
                    }
                    z5 = z7;
                } else {
                    z5 = z7;
                    SparseArray sparseArray = (SparseArray) rVar.f6260i;
                    SparseArray sparseArray2 = (SparseArray) rVar2.f6260i;
                    int size = sparseArray.size();
                    for (int i19 = 0; i19 < size; i19++) {
                        View view7 = (View) sparseArray.valueAt(i19);
                        if (view7 != null && transition.y(view7) && (view2 = (View) sparseArray2.get(sparseArray.keyAt(i19))) != null && transition.y(view2)) {
                            b0 b0Var6 = (b0) eVar.get(view7);
                            b0 b0Var7 = (b0) eVar2.get(view2);
                            if (b0Var6 != null && b0Var7 != null) {
                                transition.I.add(b0Var6);
                                transition.J.add(b0Var7);
                                eVar.remove(view7);
                                eVar2.remove(view2);
                            }
                        }
                    }
                }
                i6++;
                z7 = z5;
                i5 = 0;
            }
            boolean z8 = z7;
            for (i10 = 0; i10 < eVar.f1208i; i10++) {
                b0 b0Var8 = (b0) eVar.i(i10);
                if (transition.y(b0Var8.f14327b)) {
                    transition.I.add(b0Var8);
                    transition.J.add(null);
                }
            }
            for (i11 = 0; i11 < eVar2.f1208i; i11++) {
                b0 b0Var9 = (b0) eVar2.i(i11);
                if (transition.y(b0Var9.f14327b)) {
                    transition.J.add(b0Var9);
                    transition.I.add(null);
                }
            }
            s.e r5 = Transition.r();
            int i20 = r5.f1208i;
            WindowId windowId = viewGroup.getWindowId();
            arrayList2 = new ArrayList();
            i12 = i20 - 1;
            while (i12 >= 0) {
                Animator animator = (Animator) r5.f(i12);
                if (animator != null && (pVar = (p) r5.get(animator)) != null) {
                    Transition transition2 = pVar.f14375e;
                    View view8 = pVar.a;
                    if (view8 != null && Objects.equals(windowId, pVar.f14374d)) {
                        b0 b0Var10 = pVar.f14373c;
                        boolean z10 = z8;
                        b0 t5 = transition.t(view8, z10);
                        b0 p3 = transition.p(view8, z10);
                        if (t5 == null && p3 == null) {
                            p3 = (b0) ((s.e) transition.F.f6259e).get(view8);
                        }
                        if ((t5 != null || p3 != null) && transition2.w(b0Var10, p3)) {
                            Transition q5 = transition2.q();
                            ArrayList arrayList4 = transition2.L;
                            if (q5.X != null) {
                                animator.cancel();
                                arrayList4.remove(animator);
                                r5.g(i12);
                                if (arrayList4.size() == 0) {
                                    arrayList2.add(transition2);
                                }
                            } else if (animator.isRunning() || animator.isStarted()) {
                                animator.cancel();
                            } else {
                                r5.g(i12);
                            }
                        }
                    }
                }
                i12--;
                z8 = true;
            }
            for (i13 = 0; i13 < arrayList2.size(); i13++) {
                Transition transition3 = (Transition) arrayList2.get(i13);
                transition3.A(transition3, t.f14386m, false);
                if (!transition3.P) {
                    transition3.P = true;
                    transition3.A(transition3, t.f14385l, false);
                }
            }
            transition.m(viewGroup, transition.E, transition.F, transition.I, transition.J);
            if (transition.X != null) {
                transition.G();
                return true;
            }
            if (Build.VERSION.SDK_INT < 34) {
                return true;
            }
            transition.C();
            r rVar3 = transition.X;
            z zVar = rVar3.f14384h;
            long j = zVar.W == 0 ? 1L : 0L;
            zVar.H(j, rVar3.a);
            rVar3.a = j;
            r rVar4 = transition.X;
            rVar4.f14378b = true;
            int i21 = rVar4.f14380d;
            if (i21 == 1) {
                rVar4.f14380d = 0;
                rVar4.a();
                return true;
            }
            if (i21 != 2) {
                return true;
            }
            rVar4.f14380d = 0;
            rVar4.f14383g = rVar4.f14383g;
            rVar4.b();
            rVar4.f14381e.a(0.0f);
            return true;
        }
        arrayList = null;
        arrayList3.add(transition);
        transition.a(new v(this, b10));
        i5 = 0;
        transition.h(viewGroup, false);
        if (arrayList != null) {
        }
        transition.I = new ArrayList();
        transition.J = new ArrayList();
        com.google.firebase.messaging.r rVar5 = transition.E;
        com.google.firebase.messaging.r rVar22 = transition.F;
        eVar = new s.e((s.e) rVar5.f6259e);
        eVar2 = new s.e((s.e) rVar22.f6259e);
        i6 = 0;
        while (true) {
            iArr = transition.H;
            if (i6 < iArr.length) {
            }
            i6++;
            z7 = z5;
            i5 = 0;
        }
        boolean z82 = z7;
        while (i10 < eVar.f1208i) {
        }
        while (i11 < eVar2.f1208i) {
        }
        s.e r52 = Transition.r();
        int i202 = r52.f1208i;
        WindowId windowId2 = viewGroup.getWindowId();
        arrayList2 = new ArrayList();
        i12 = i202 - 1;
        while (i12 >= 0) {
        }
        while (i13 < arrayList2.size()) {
        }
        transition.m(viewGroup, transition.E, transition.F, transition.I, transition.J);
        if (transition.X != null) {
        }
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewDetachedFromWindow(View view) {
        ViewGroup viewGroup = this.f14391e;
        viewGroup.getViewTreeObserver().removeOnPreDrawListener(this);
        viewGroup.removeOnAttachStateChangeListener(this);
        x.f14393c.remove(viewGroup);
        ArrayList arrayList = (ArrayList) x.b().get(viewGroup);
        if (arrayList != null && arrayList.size() > 0) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                ((Transition) it.next()).F(viewGroup);
            }
        }
        this.f14390d.j(true);
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewAttachedToWindow(View view) {
    }
}
