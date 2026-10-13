package androidx.transition;

import a5.k0;
import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.TimeInterpolator;
import android.graphics.Rect;
import android.util.SparseArray;
import android.util.SparseIntArray;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowId;
import android.widget.ListView;
import android.widget.TextView;
import androidx.core.view.j0;
import androidx.core.view.s0;
import androidx.core.view.z0;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.WeakHashMap;
import kotlin.jvm.internal.LongCompanionObject;
import lh.f;
import m3.b0;
import m3.l;
import m3.p;
import m3.r;
import m3.s;
import m3.t;
import m3.z;
import s.e;
import s.k;

/* loaded from: classes.dex */
public abstract class Transition implements Cloneable {
    public static final Animator[] Z = new Animator[0];
    public static final int[] a0 = {2, 1, 3, 4};

    /* renamed from: b0, reason: collision with root package name */
    public static final f f2535b0 = new f(13);

    /* renamed from: c0, reason: collision with root package name */
    public static final ThreadLocal f2536c0 = new ThreadLocal();
    public ArrayList I;
    public ArrayList J;
    public s[] K;
    public l T;
    public k0 U;
    public long W;
    public r X;
    public long Y;

    /* renamed from: d, reason: collision with root package name */
    public final String f2537d = getClass().getName();

    /* renamed from: e, reason: collision with root package name */
    public long f2538e = -1;

    /* renamed from: i, reason: collision with root package name */
    public long f2539i = -1;

    /* renamed from: v, reason: collision with root package name */
    public TimeInterpolator f2540v = null;

    /* renamed from: w, reason: collision with root package name */
    public final ArrayList f2541w = new ArrayList();

    /* renamed from: x, reason: collision with root package name */
    public final ArrayList f2542x = new ArrayList();

    /* renamed from: y, reason: collision with root package name */
    public ArrayList f2543y = null;
    public com.google.firebase.messaging.r E = new com.google.firebase.messaging.r(9);
    public com.google.firebase.messaging.r F = new com.google.firebase.messaging.r(9);
    public z G = null;
    public final int[] H = a0;
    public final ArrayList L = new ArrayList();
    public Animator[] M = Z;
    public int N = 0;
    public boolean O = false;
    public boolean P = false;
    public Transition Q = null;
    public ArrayList R = null;
    public ArrayList S = new ArrayList();
    public f V = f2535b0;

    public static void c(com.google.firebase.messaging.r rVar, View view, b0 b0Var) {
        e eVar = (e) rVar.f6259e;
        e eVar2 = (e) rVar.f6262w;
        SparseArray sparseArray = (SparseArray) rVar.f6260i;
        k kVar = (k) rVar.f6261v;
        eVar.put(view, b0Var);
        int id2 = view.getId();
        if (id2 >= 0) {
            if (sparseArray.indexOfKey(id2) >= 0) {
                sparseArray.put(id2, null);
            } else {
                sparseArray.put(id2, view);
            }
        }
        WeakHashMap weakHashMap = s0.a;
        String f2 = j0.f(view);
        if (f2 != null) {
            if (eVar2.containsKey(f2)) {
                eVar2.put(f2, null);
            } else {
                eVar2.put(f2, view);
            }
        }
        if (view.getParent() instanceof ListView) {
            ListView listView = (ListView) view.getParent();
            if (listView.getAdapter().hasStableIds()) {
                long itemIdAtPosition = listView.getItemIdAtPosition(listView.getPositionForView(view));
                if (kVar.c(itemIdAtPosition) < 0) {
                    view.setHasTransientState(true);
                    kVar.e(itemIdAtPosition, view);
                    return;
                }
                View view2 = (View) kVar.b(itemIdAtPosition);
                if (view2 != null) {
                    view2.setHasTransientState(false);
                    kVar.e(itemIdAtPosition, null);
                }
            }
        }
    }

    public static e r() {
        ThreadLocal threadLocal = f2536c0;
        e eVar = (e) threadLocal.get();
        if (eVar != null) {
            return eVar;
        }
        e eVar2 = new e(0);
        threadLocal.set(eVar2);
        return eVar2;
    }

    public static boolean z(b0 b0Var, b0 b0Var2, String str) {
        Object obj = b0Var.a.get(str);
        Object obj2 = b0Var2.a.get(str);
        if (obj == null && obj2 == null) {
            return false;
        }
        if (obj == null || obj2 == null) {
            return true;
        }
        return !obj.equals(obj2);
    }

    public final void A(Transition transition, t tVar, boolean z5) {
        Transition transition2 = this.Q;
        if (transition2 != null) {
            transition2.A(transition, tVar, z5);
        }
        ArrayList arrayList = this.R;
        if (arrayList == null || arrayList.isEmpty()) {
            return;
        }
        int size = this.R.size();
        s[] sVarArr = this.K;
        if (sVarArr == null) {
            sVarArr = new s[size];
        }
        this.K = null;
        s[] sVarArr2 = (s[]) this.R.toArray(sVarArr);
        for (int i5 = 0; i5 < size; i5++) {
            tVar.b(sVarArr2[i5], transition, z5);
            sVarArr2[i5] = null;
        }
        this.K = sVarArr2;
    }

    public void B(View view) {
        if (this.P) {
            return;
        }
        ArrayList arrayList = this.L;
        int size = arrayList.size();
        Animator[] animatorArr = (Animator[]) arrayList.toArray(this.M);
        this.M = Z;
        for (int i5 = size - 1; i5 >= 0; i5--) {
            Animator animator = animatorArr[i5];
            animatorArr[i5] = null;
            animator.pause();
        }
        this.M = animatorArr;
        A(this, t.f14387n, false);
        this.O = true;
    }

    public void C() {
        e r5 = r();
        this.W = 0L;
        for (int i5 = 0; i5 < this.S.size(); i5++) {
            Animator animator = (Animator) this.S.get(i5);
            p pVar = (p) r5.get(animator);
            if (animator != null && pVar != null) {
                Animator animator2 = pVar.f14376f;
                long j = this.f2539i;
                if (j >= 0) {
                    animator2.setDuration(j);
                }
                long j5 = this.f2538e;
                if (j5 >= 0) {
                    animator2.setStartDelay(animator2.getStartDelay() + j5);
                }
                TimeInterpolator timeInterpolator = this.f2540v;
                if (timeInterpolator != null) {
                    animator2.setInterpolator(timeInterpolator);
                }
                this.L.add(animator);
                this.W = Math.max(this.W, animator.getTotalDuration());
            }
        }
        this.S.clear();
    }

    public Transition D(s sVar) {
        Transition transition;
        ArrayList arrayList = this.R;
        if (arrayList != null) {
            if (!arrayList.remove(sVar) && (transition = this.Q) != null) {
                transition.D(sVar);
            }
            if (this.R.size() == 0) {
                this.R = null;
            }
        }
        return this;
    }

    public void E(View view) {
        this.f2542x.remove(view);
    }

    public void F(View view) {
        if (this.O) {
            if (!this.P) {
                ArrayList arrayList = this.L;
                int size = arrayList.size();
                Animator[] animatorArr = (Animator[]) arrayList.toArray(this.M);
                this.M = Z;
                for (int i5 = size - 1; i5 >= 0; i5--) {
                    Animator animator = animatorArr[i5];
                    animatorArr[i5] = null;
                    animator.resume();
                }
                this.M = animatorArr;
                A(this, t.f14388o, false);
            }
            this.O = false;
        }
    }

    public void G() {
        O();
        e r5 = r();
        Iterator it = this.S.iterator();
        while (it.hasNext()) {
            Animator animator = (Animator) it.next();
            if (r5.containsKey(animator)) {
                O();
                if (animator != null) {
                    animator.addListener(new z0(this, r5));
                    long j = this.f2539i;
                    if (j >= 0) {
                        animator.setDuration(j);
                    }
                    long j5 = this.f2538e;
                    if (j5 >= 0) {
                        animator.setStartDelay(animator.getStartDelay() + j5);
                    }
                    TimeInterpolator timeInterpolator = this.f2540v;
                    if (timeInterpolator != null) {
                        animator.setInterpolator(timeInterpolator);
                    }
                    animator.addListener(new androidx.appcompat.widget.c(3, this));
                    animator.start();
                }
            }
        }
        this.S.clear();
        n();
    }

    public void H(long j, long j5) {
        long j7 = this.W;
        int i5 = 0;
        boolean z5 = j < j5;
        if ((j5 < 0 && j >= 0) || (j5 > j7 && j <= j7)) {
            this.P = false;
            A(this, t.k, z5);
        }
        ArrayList arrayList = this.L;
        int size = arrayList.size();
        Animator[] animatorArr = (Animator[]) arrayList.toArray(this.M);
        this.M = Z;
        while (i5 < size) {
            Animator animator = animatorArr[i5];
            animatorArr[i5] = null;
            jf.a.m(animator, Math.min(Math.max(0L, j), animator.getTotalDuration()));
            i5++;
            j7 = j7;
        }
        long j10 = j7;
        this.M = animatorArr;
        if ((j <= j10 || j5 > j10) && (j >= 0 || j5 < 0)) {
            return;
        }
        if (j > j10) {
            this.P = true;
        }
        A(this, t.f14385l, z5);
    }

    public void I(long j) {
        this.f2539i = j;
    }

    public void J(k0 k0Var) {
        this.U = k0Var;
    }

    public void K(TimeInterpolator timeInterpolator) {
        this.f2540v = timeInterpolator;
    }

    public void L(f fVar) {
        if (fVar == null) {
            this.V = f2535b0;
        } else {
            this.V = fVar;
        }
    }

    public void M(l lVar) {
        this.T = lVar;
    }

    public void N(long j) {
        this.f2538e = j;
    }

    public final void O() {
        if (this.N == 0) {
            A(this, t.k, false);
            this.P = false;
        }
        this.N++;
    }

    public String P(String str) {
        StringBuilder sb2 = new StringBuilder(str);
        sb2.append(getClass().getSimpleName());
        sb2.append("@");
        sb2.append(Integer.toHexString(hashCode()));
        sb2.append(": ");
        if (this.f2539i != -1) {
            sb2.append("dur(");
            sb2.append(this.f2539i);
            sb2.append(") ");
        }
        if (this.f2538e != -1) {
            sb2.append("dly(");
            sb2.append(this.f2538e);
            sb2.append(") ");
        }
        if (this.f2540v != null) {
            sb2.append("interp(");
            sb2.append(this.f2540v);
            sb2.append(") ");
        }
        ArrayList arrayList = this.f2541w;
        int size = arrayList.size();
        ArrayList arrayList2 = this.f2542x;
        if (size > 0 || arrayList2.size() > 0) {
            sb2.append("tgts(");
            if (arrayList.size() > 0) {
                for (int i5 = 0; i5 < arrayList.size(); i5++) {
                    if (i5 > 0) {
                        sb2.append(", ");
                    }
                    sb2.append(arrayList.get(i5));
                }
            }
            if (arrayList2.size() > 0) {
                for (int i6 = 0; i6 < arrayList2.size(); i6++) {
                    if (i6 > 0) {
                        sb2.append(", ");
                    }
                    sb2.append(arrayList2.get(i6));
                }
            }
            sb2.append(")");
        }
        return sb2.toString();
    }

    public void a(s sVar) {
        if (this.R == null) {
            this.R = new ArrayList();
        }
        this.R.add(sVar);
    }

    public void b(View view) {
        this.f2542x.add(view);
    }

    public void cancel() {
        ArrayList arrayList = this.L;
        int size = arrayList.size();
        Animator[] animatorArr = (Animator[]) arrayList.toArray(this.M);
        this.M = Z;
        for (int i5 = size - 1; i5 >= 0; i5--) {
            Animator animator = animatorArr[i5];
            animatorArr[i5] = null;
            animator.cancel();
        }
        this.M = animatorArr;
        A(this, t.f14386m, false);
    }

    public abstract void d(b0 b0Var);

    public final void e(View view, boolean z5) {
        if (view == null) {
            return;
        }
        view.getId();
        ArrayList arrayList = this.f2543y;
        if (arrayList != null) {
            int size = arrayList.size();
            for (int i5 = 0; i5 < size; i5++) {
                if (((Class) this.f2543y.get(i5)).isInstance(view)) {
                    return;
                }
            }
        }
        if (view.getParent() instanceof ViewGroup) {
            b0 b0Var = new b0(view);
            if (z5) {
                g(b0Var);
            } else {
                d(b0Var);
            }
            b0Var.f14328c.add(this);
            f(b0Var);
            if (z5) {
                c(this.E, view, b0Var);
            } else {
                c(this.F, view, b0Var);
            }
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i6 = 0; i6 < viewGroup.getChildCount(); i6++) {
                e(viewGroup.getChildAt(i6), z5);
            }
        }
    }

    public void f(b0 b0Var) {
        if (this.T != null) {
            HashMap hashMap = b0Var.a;
            if (hashMap.isEmpty()) {
                return;
            }
            this.T.getClass();
            for (int i5 = 0; i5 < 2; i5++) {
                if (!hashMap.containsKey(l.f14370b[i5])) {
                    this.T.getClass();
                    View view = b0Var.f14327b;
                    Integer num = (Integer) hashMap.get("android:visibility:visibility");
                    if (num == null) {
                        num = Integer.valueOf(view.getVisibility());
                    }
                    hashMap.put("android:visibilityPropagation:visibility", num);
                    int[] iArr = {r5, 0};
                    view.getLocationOnScreen(iArr);
                    int round = Math.round(view.getTranslationX()) + iArr[0];
                    iArr[0] = (view.getWidth() / 2) + round;
                    int round2 = Math.round(view.getTranslationY()) + iArr[1];
                    iArr[1] = round2;
                    iArr[1] = (view.getHeight() / 2) + round2;
                    hashMap.put("android:visibilityPropagation:center", iArr);
                    return;
                }
            }
        }
    }

    public abstract void g(b0 b0Var);

    public final void h(ViewGroup viewGroup, boolean z5) {
        j(z5);
        ArrayList arrayList = this.f2541w;
        int size = arrayList.size();
        ArrayList arrayList2 = this.f2542x;
        if (size <= 0 && arrayList2.size() <= 0) {
            e(viewGroup, z5);
            return;
        }
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            View findViewById = viewGroup.findViewById(((Integer) arrayList.get(i5)).intValue());
            if (findViewById != null) {
                b0 b0Var = new b0(findViewById);
                if (z5) {
                    g(b0Var);
                } else {
                    d(b0Var);
                }
                b0Var.f14328c.add(this);
                f(b0Var);
                if (z5) {
                    c(this.E, findViewById, b0Var);
                } else {
                    c(this.F, findViewById, b0Var);
                }
            }
        }
        for (int i6 = 0; i6 < arrayList2.size(); i6++) {
            View view = (View) arrayList2.get(i6);
            b0 b0Var2 = new b0(view);
            if (z5) {
                g(b0Var2);
            } else {
                d(b0Var2);
            }
            b0Var2.f14328c.add(this);
            f(b0Var2);
            if (z5) {
                c(this.E, view, b0Var2);
            } else {
                c(this.F, view, b0Var2);
            }
        }
    }

    public final void j(boolean z5) {
        if (z5) {
            ((e) this.E.f6259e).clear();
            ((SparseArray) this.E.f6260i).clear();
            ((k) this.E.f6261v).a();
        } else {
            ((e) this.F.f6259e).clear();
            ((SparseArray) this.F.f6260i).clear();
            ((k) this.F.f6261v).a();
        }
    }

    @Override // 
    /* renamed from: k, reason: merged with bridge method [inline-methods] */
    public Transition clone() {
        try {
            Transition transition = (Transition) super.clone();
            transition.S = new ArrayList();
            transition.E = new com.google.firebase.messaging.r(9);
            transition.F = new com.google.firebase.messaging.r(9);
            transition.I = null;
            transition.J = null;
            transition.X = null;
            transition.Q = this;
            transition.R = null;
            return transition;
        } catch (CloneNotSupportedException e9) {
            throw new RuntimeException(e9);
        }
    }

    public Animator l(ViewGroup viewGroup, b0 b0Var, b0 b0Var2) {
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:112:0x01b3, code lost:
    
        r1 = 3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:116:0x01c1, code lost:
    
        if (r31.getLayoutDirection() == r11) goto L99;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x01af, code lost:
    
        if (r31.getLayoutDirection() == r17) goto L98;
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x01b1, code lost:
    
        r1 = 5;
     */
    /* JADX WARN: Removed duplicated region for block: B:104:0x0221  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x01f4  */
    /* JADX WARN: Removed duplicated region for block: B:113:0x01b6  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x0190  */
    /* JADX WARN: Removed duplicated region for block: B:131:0x0268 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:52:0x00f7  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x014b  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0187  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x01a9  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x01c6  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x0203  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void m(ViewGroup viewGroup, com.google.firebase.messaging.r rVar, com.google.firebase.messaging.r rVar2, ArrayList arrayList, ArrayList arrayList2) {
        Animator l6;
        int i5;
        boolean z5;
        int i6;
        int i10;
        View view;
        b0 b0Var;
        Rect rect;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        int abs;
        int i16;
        long j;
        long round;
        int[] iArr;
        int[] iArr2;
        ViewGroup viewGroup2 = viewGroup;
        e r5 = r();
        SparseIntArray sparseIntArray = new SparseIntArray();
        int size = arrayList.size();
        boolean z6 = q().X != null;
        long j5 = LongCompanionObject.MAX_VALUE;
        int i17 = 0;
        while (i17 < size) {
            b0 b0Var2 = (b0) arrayList.get(i17);
            b0 b0Var3 = (b0) arrayList2.get(i17);
            if (b0Var2 != null && !b0Var2.f14328c.contains(this)) {
                b0Var2 = null;
            }
            if (b0Var3 != null && !b0Var3.f14328c.contains(this)) {
                b0Var3 = null;
            }
            if (!(b0Var2 == null && b0Var3 == null) && ((b0Var2 == null || b0Var3 == null || w(b0Var2, b0Var3)) && (l6 = l(viewGroup2, b0Var2, b0Var3)) != null)) {
                String str = this.f2537d;
                if (b0Var3 != null) {
                    i10 = 1;
                    view = b0Var3.f14327b;
                    i5 = size;
                    String[] s2 = s();
                    z5 = z6;
                    if (s2 == null || s2.length <= 0) {
                        i6 = i17;
                        l6 = l6;
                    } else {
                        b0Var = new b0(view);
                        i6 = i17;
                        b0 b0Var4 = (b0) ((e) rVar2.f6259e).get(view);
                        if (b0Var4 != null) {
                            int i18 = 0;
                            while (i18 < s2.length) {
                                String str2 = s2[i18];
                                b0Var.a.put(str2, b0Var4.a.get(str2));
                                i18++;
                                s2 = s2;
                            }
                        }
                        int i19 = r5.f1208i;
                        int i20 = 0;
                        while (true) {
                            if (i20 >= i19) {
                                l6 = l6;
                                break;
                            }
                            p pVar = (p) r5.get((Animator) r5.f(i20));
                            if (pVar.f14373c != null && pVar.a == view && pVar.f14372b.equals(str) && pVar.f14373c.equals(b0Var)) {
                                l6 = null;
                                break;
                            }
                            i20++;
                        }
                        if (l6 != null) {
                            l lVar = this.T;
                            if (lVar != null) {
                                if (b0Var2 == null && b0Var3 == null) {
                                    round = 0;
                                } else {
                                    k0 k0Var = this.U;
                                    Rect I = k0Var == null ? null : k0Var.I();
                                    if (b0Var3 != null) {
                                        int i21 = 8;
                                        if (b0Var2 == null) {
                                            rect = I;
                                        } else {
                                            rect = I;
                                            Integer num = (Integer) b0Var2.a.get("android:visibilityPropagation:visibility");
                                            if (num != null) {
                                                i21 = num.intValue();
                                            }
                                        }
                                        if (i21 != 0) {
                                            b0Var2 = b0Var3;
                                            i11 = i10;
                                            int i22 = (b0Var2 == null || (iArr2 = (int[]) b0Var2.a.get("android:visibilityPropagation:center")) == null) ? -1 : iArr2[0];
                                            int i23 = (b0Var2 == null || (iArr = (int[]) b0Var2.a.get("android:visibilityPropagation:center")) == null) ? -1 : iArr[i10];
                                            int[] iArr3 = new int[2];
                                            viewGroup2.getLocationOnScreen(iArr3);
                                            int round2 = Math.round(viewGroup2.getTranslationX()) + iArr3[0];
                                            int round3 = Math.round(viewGroup2.getTranslationY()) + iArr3[i10];
                                            int width = viewGroup2.getWidth() + round2;
                                            int height = viewGroup2.getHeight() + round3;
                                            if (rect == null) {
                                                i13 = rect.centerX();
                                                i12 = rect.centerY();
                                            } else {
                                                i12 = (round3 + height) / 2;
                                                i13 = (round2 + width) / 2;
                                            }
                                            i14 = lVar.a;
                                            int i24 = i13;
                                            if (i14 == 8388611) {
                                                int i25 = i10;
                                                if (i14 == 8388613) {
                                                }
                                            }
                                            if (i14 == 3) {
                                                if (i14 == 5) {
                                                    i16 = Math.abs(i12 - i23) + (i22 - round2);
                                                } else if (i14 == 48) {
                                                    i16 = Math.abs(i24 - i22) + (height - i23);
                                                } else if (i14 != 80) {
                                                    i16 = 0;
                                                } else {
                                                    i15 = i23 - round3;
                                                    abs = Math.abs(i24 - i22);
                                                }
                                                float f2 = i16;
                                                int i26 = lVar.a;
                                                float width2 = f2 / ((i26 != 3 || i26 == 5 || i26 == 8388611 || i26 == 8388613) ? viewGroup.getWidth() : viewGroup.getHeight());
                                                j = this.f2539i;
                                                if (j < 0) {
                                                    j = 300;
                                                }
                                                round = Math.round(((i11 * j) / 3.0f) * width2);
                                            } else {
                                                i15 = width - i22;
                                                abs = Math.abs(i12 - i23);
                                            }
                                            i16 = abs + i15;
                                            float f22 = i16;
                                            int i262 = lVar.a;
                                            float width22 = f22 / ((i262 != 3 || i262 == 5 || i262 == 8388611 || i262 == 8388613) ? viewGroup.getWidth() : viewGroup.getHeight());
                                            j = this.f2539i;
                                            if (j < 0) {
                                            }
                                            round = Math.round(((i11 * j) / 3.0f) * width22);
                                        }
                                    } else {
                                        rect = I;
                                    }
                                    i11 = -1;
                                    if (b0Var2 == null) {
                                        if (b0Var2 == null) {
                                            int i232 = (b0Var2 == null || (iArr = (int[]) b0Var2.a.get("android:visibilityPropagation:center")) == null) ? -1 : iArr[i10];
                                            int[] iArr32 = new int[2];
                                            viewGroup2.getLocationOnScreen(iArr32);
                                            int round22 = Math.round(viewGroup2.getTranslationX()) + iArr32[0];
                                            int round32 = Math.round(viewGroup2.getTranslationY()) + iArr32[i10];
                                            int width3 = viewGroup2.getWidth() + round22;
                                            int height2 = viewGroup2.getHeight() + round32;
                                            if (rect == null) {
                                            }
                                            i14 = lVar.a;
                                            int i242 = i13;
                                            if (i14 == 8388611) {
                                            }
                                            if (i14 == 3) {
                                            }
                                            i16 = abs + i15;
                                            float f222 = i16;
                                            int i2622 = lVar.a;
                                            float width222 = f222 / ((i2622 != 3 || i2622 == 5 || i2622 == 8388611 || i2622 == 8388613) ? viewGroup.getWidth() : viewGroup.getHeight());
                                            j = this.f2539i;
                                            if (j < 0) {
                                            }
                                            round = Math.round(((i11 * j) / 3.0f) * width222);
                                        }
                                        int i2322 = (b0Var2 == null || (iArr = (int[]) b0Var2.a.get("android:visibilityPropagation:center")) == null) ? -1 : iArr[i10];
                                        int[] iArr322 = new int[2];
                                        viewGroup2.getLocationOnScreen(iArr322);
                                        int round222 = Math.round(viewGroup2.getTranslationX()) + iArr322[0];
                                        int round322 = Math.round(viewGroup2.getTranslationY()) + iArr322[i10];
                                        int width32 = viewGroup2.getWidth() + round222;
                                        int height22 = viewGroup2.getHeight() + round322;
                                        if (rect == null) {
                                        }
                                        i14 = lVar.a;
                                        int i2422 = i13;
                                        if (i14 == 8388611) {
                                        }
                                        if (i14 == 3) {
                                        }
                                        i16 = abs + i15;
                                        float f2222 = i16;
                                        int i26222 = lVar.a;
                                        float width2222 = f2222 / ((i26222 != 3 || i26222 == 5 || i26222 == 8388611 || i26222 == 8388613) ? viewGroup.getWidth() : viewGroup.getHeight());
                                        j = this.f2539i;
                                        if (j < 0) {
                                        }
                                        round = Math.round(((i11 * j) / 3.0f) * width2222);
                                    }
                                    int i23222 = (b0Var2 == null || (iArr = (int[]) b0Var2.a.get("android:visibilityPropagation:center")) == null) ? -1 : iArr[i10];
                                    int[] iArr3222 = new int[2];
                                    viewGroup2.getLocationOnScreen(iArr3222);
                                    int round2222 = Math.round(viewGroup2.getTranslationX()) + iArr3222[0];
                                    int round3222 = Math.round(viewGroup2.getTranslationY()) + iArr3222[i10];
                                    int width322 = viewGroup2.getWidth() + round2222;
                                    int height222 = viewGroup2.getHeight() + round3222;
                                    if (rect == null) {
                                    }
                                    i14 = lVar.a;
                                    int i24222 = i13;
                                    if (i14 == 8388611) {
                                    }
                                    if (i14 == 3) {
                                    }
                                    i16 = abs + i15;
                                    float f22222 = i16;
                                    int i262222 = lVar.a;
                                    float width22222 = f22222 / ((i262222 != 3 || i262222 == 5 || i262222 == 8388611 || i262222 == 8388613) ? viewGroup.getWidth() : viewGroup.getHeight());
                                    j = this.f2539i;
                                    if (j < 0) {
                                    }
                                    round = Math.round(((i11 * j) / 3.0f) * width22222);
                                }
                                sparseIntArray.put(this.S.size(), (int) round);
                                j5 = Math.min(round, j5);
                            }
                            WindowId windowId = viewGroup.getWindowId();
                            p pVar2 = new p();
                            pVar2.a = view;
                            pVar2.f14372b = str;
                            pVar2.f14373c = b0Var;
                            pVar2.f14374d = windowId;
                            pVar2.f14375e = this;
                            pVar2.f14376f = l6;
                            if (z5) {
                                AnimatorSet animatorSet = new AnimatorSet();
                                animatorSet.play(l6);
                                l6 = animatorSet;
                            }
                            r5.put(l6, pVar2);
                            this.S.add(l6);
                        }
                    }
                } else {
                    i5 = size;
                    z5 = z6;
                    i6 = i17;
                    i10 = 1;
                    view = b0Var2.f14327b;
                }
                b0Var = null;
                if (l6 != null) {
                }
            } else {
                i5 = size;
                z5 = z6;
                i6 = i17;
            }
            i17 = i6 + 1;
            viewGroup2 = viewGroup;
            size = i5;
            z6 = z5;
        }
        if (sparseIntArray.size() != 0) {
            for (int i27 = 0; i27 < sparseIntArray.size(); i27++) {
                p pVar3 = (p) r5.get((Animator) this.S.get(sparseIntArray.keyAt(i27)));
                pVar3.f14376f.setStartDelay(pVar3.f14376f.getStartDelay() + (sparseIntArray.valueAt(i27) - j5));
            }
        }
    }

    public final void n() {
        int i5 = this.N - 1;
        this.N = i5;
        if (i5 == 0) {
            A(this, t.f14385l, false);
            for (int i6 = 0; i6 < ((k) this.E.f6261v).f(); i6++) {
                View view = (View) ((k) this.E.f6261v).g(i6);
                if (view != null) {
                    view.setHasTransientState(false);
                }
            }
            for (int i10 = 0; i10 < ((k) this.F.f6261v).f(); i10++) {
                View view2 = (View) ((k) this.F.f6261v).g(i10);
                if (view2 != null) {
                    view2.setHasTransientState(false);
                }
            }
            this.P = true;
        }
    }

    public void o() {
        ArrayList arrayList = this.f2543y;
        if (arrayList == null) {
            arrayList = new ArrayList();
        }
        if (!arrayList.contains(TextView.class)) {
            arrayList.add(TextView.class);
        }
        this.f2543y = arrayList;
    }

    public final b0 p(View view, boolean z5) {
        z zVar = this.G;
        if (zVar != null) {
            return zVar.p(view, z5);
        }
        ArrayList arrayList = z5 ? this.I : this.J;
        if (arrayList == null) {
            return null;
        }
        int size = arrayList.size();
        int i5 = 0;
        while (true) {
            if (i5 >= size) {
                i5 = -1;
                break;
            }
            b0 b0Var = (b0) arrayList.get(i5);
            if (b0Var == null) {
                return null;
            }
            if (b0Var.f14327b == view) {
                break;
            }
            i5++;
        }
        if (i5 >= 0) {
            return (b0) (z5 ? this.J : this.I).get(i5);
        }
        return null;
    }

    public final Transition q() {
        z zVar = this.G;
        return zVar != null ? zVar.q() : this;
    }

    public String[] s() {
        return null;
    }

    public final b0 t(View view, boolean z5) {
        z zVar = this.G;
        if (zVar != null) {
            return zVar.t(view, z5);
        }
        return (b0) ((e) (z5 ? this.E : this.F).f6259e).get(view);
    }

    public final String toString() {
        return P("");
    }

    public boolean u() {
        return !this.L.isEmpty();
    }

    public boolean v() {
        return this instanceof a;
    }

    public boolean w(b0 b0Var, b0 b0Var2) {
        if (b0Var != null && b0Var2 != null) {
            String[] s2 = s();
            if (s2 != null) {
                for (String str : s2) {
                    if (z(b0Var, b0Var2, str)) {
                        return true;
                    }
                }
            } else {
                Iterator it = b0Var.a.keySet().iterator();
                while (it.hasNext()) {
                    if (z(b0Var, b0Var2, (String) it.next())) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    public final boolean y(View view) {
        int id2 = view.getId();
        ArrayList arrayList = this.f2543y;
        if (arrayList != null) {
            int size = arrayList.size();
            for (int i5 = 0; i5 < size; i5++) {
                if (((Class) this.f2543y.get(i5)).isInstance(view)) {
                    return false;
                }
            }
        }
        ArrayList arrayList2 = this.f2541w;
        int size2 = arrayList2.size();
        ArrayList arrayList3 = this.f2542x;
        return (size2 == 0 && arrayList3.size() == 0) || arrayList2.contains(Integer.valueOf(id2)) || arrayList3.contains(view);
    }
}
