package m3;

import a5.k0;
import android.animation.TimeInterpolator;
import android.util.AndroidRuntimeException;
import android.view.View;
import android.view.ViewGroup;
import androidx.transition.Transition;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;

/* loaded from: classes.dex */
public class z extends Transition {

    /* renamed from: f0, reason: collision with root package name */
    public int f14397f0;

    /* renamed from: i0, reason: collision with root package name */
    public Transition[] f14399i0;

    /* renamed from: d0, reason: collision with root package name */
    public ArrayList f14395d0 = new ArrayList();

    /* renamed from: e0, reason: collision with root package name */
    public boolean f14396e0 = true;

    /* renamed from: g0, reason: collision with root package name */
    public boolean f14398g0 = false;
    public int h0 = 0;

    @Override // androidx.transition.Transition
    public final void B(View view) {
        super.B(view);
        int size = this.f14395d0.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((Transition) this.f14395d0.get(i5)).B(view);
        }
    }

    @Override // androidx.transition.Transition
    public final void C() {
        this.W = 0L;
        int i5 = 0;
        y yVar = new y(this, i5);
        while (i5 < this.f14395d0.size()) {
            Transition transition = (Transition) this.f14395d0.get(i5);
            transition.a(yVar);
            transition.C();
            long j = transition.W;
            if (this.f14396e0) {
                this.W = Math.max(this.W, j);
            } else {
                long j5 = this.W;
                transition.Y = j5;
                this.W = j5 + j;
            }
            i5++;
        }
    }

    @Override // androidx.transition.Transition
    public final Transition D(s sVar) {
        super.D(sVar);
        return this;
    }

    @Override // androidx.transition.Transition
    public final void E(View view) {
        for (int i5 = 0; i5 < this.f14395d0.size(); i5++) {
            ((Transition) this.f14395d0.get(i5)).E(view);
        }
        this.f2542x.remove(view);
    }

    @Override // androidx.transition.Transition
    public final void F(View view) {
        super.F(view);
        Transition[] transitionArr = this.f14399i0;
        this.f14399i0 = null;
        if (transitionArr == null) {
            transitionArr = new Transition[this.f14395d0.size()];
        }
        Transition[] transitionArr2 = (Transition[]) this.f14395d0.toArray(transitionArr);
        int size = this.f14395d0.size();
        for (int i5 = 0; i5 < size; i5++) {
            transitionArr2[i5].F(view);
        }
        Arrays.fill(transitionArr2, (Object) null);
        this.f14399i0 = transitionArr2;
    }

    @Override // androidx.transition.Transition
    public final void G() {
        if (this.f14395d0.isEmpty()) {
            O();
            n();
            return;
        }
        y yVar = new y();
        yVar.f14394b = this;
        Iterator it = this.f14395d0.iterator();
        while (it.hasNext()) {
            ((Transition) it.next()).a(yVar);
        }
        this.f14397f0 = this.f14395d0.size();
        if (this.f14396e0) {
            Iterator it2 = this.f14395d0.iterator();
            while (it2.hasNext()) {
                ((Transition) it2.next()).G();
            }
            return;
        }
        for (int i5 = 1; i5 < this.f14395d0.size(); i5++) {
            ((Transition) this.f14395d0.get(i5 - 1)).a(new y((Transition) this.f14395d0.get(i5), 2));
        }
        Transition transition = (Transition) this.f14395d0.get(0);
        if (transition != null) {
            transition.G();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x00c9  */
    /* JADX WARN: Removed duplicated region for block: B:44:? A[RETURN, SYNTHETIC] */
    @Override // androidx.transition.Transition
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void H(long j, long j5) {
        long j7;
        long j10 = this.W;
        long j11 = 0;
        if (this.G != null) {
            if (j < 0 && j5 < 0) {
                return;
            }
            if (j > j10 && j5 > j10) {
                return;
            }
        }
        boolean z5 = j < j5;
        if ((j >= 0 && j5 < 0) || (j <= j10 && j5 > j10)) {
            this.P = false;
            A(this, t.k, z5);
        }
        if (!this.f14396e0) {
            int i5 = 1;
            while (true) {
                if (i5 >= this.f14395d0.size()) {
                    i5 = this.f14395d0.size();
                    break;
                } else if (((Transition) this.f14395d0.get(i5)).Y > j5) {
                    break;
                } else {
                    i5++;
                }
            }
            int i6 = i5 - 1;
            if (j >= j5) {
                while (i6 < this.f14395d0.size()) {
                    Transition transition = (Transition) this.f14395d0.get(i6);
                    long j12 = transition.Y;
                    j7 = j11;
                    long j13 = j - j12;
                    if (j13 < j7) {
                        break;
                    }
                    transition.H(j13, j5 - j12);
                    i6++;
                    j11 = j7;
                }
            } else {
                j7 = 0;
                while (i6 >= 0) {
                    Transition transition2 = (Transition) this.f14395d0.get(i6);
                    long j14 = transition2.Y;
                    long j15 = j - j14;
                    transition2.H(j15, j5 - j14);
                    if (j15 >= 0) {
                        break;
                    } else {
                        i6--;
                    }
                }
            }
            if (this.G == null) {
                if ((j <= j10 || j5 > j10) && (j >= 0 || j5 < j7)) {
                    return;
                }
                if (j > j10) {
                    this.P = true;
                }
                A(this, t.f14385l, z5);
                return;
            }
            return;
        }
        for (int i10 = 0; i10 < this.f14395d0.size(); i10++) {
            ((Transition) this.f14395d0.get(i10)).H(j, j5);
        }
        j7 = j11;
        if (this.G == null) {
        }
    }

    @Override // androidx.transition.Transition
    public final void J(k0 k0Var) {
        this.U = k0Var;
        this.h0 |= 8;
        int size = this.f14395d0.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((Transition) this.f14395d0.get(i5)).J(k0Var);
        }
    }

    @Override // androidx.transition.Transition
    public final void L(lh.f fVar) {
        super.L(fVar);
        this.h0 |= 4;
        if (this.f14395d0 != null) {
            for (int i5 = 0; i5 < this.f14395d0.size(); i5++) {
                ((Transition) this.f14395d0.get(i5)).L(fVar);
            }
        }
    }

    @Override // androidx.transition.Transition
    public final void M(l lVar) {
        this.T = lVar;
        this.h0 |= 2;
        int size = this.f14395d0.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((Transition) this.f14395d0.get(i5)).M(lVar);
        }
    }

    @Override // androidx.transition.Transition
    public final void N(long j) {
        this.f2538e = j;
    }

    @Override // androidx.transition.Transition
    public final String P(String str) {
        String P = super.P(str);
        for (int i5 = 0; i5 < this.f14395d0.size(); i5++) {
            StringBuilder p3 = k0.d.p(P, ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
            p3.append(((Transition) this.f14395d0.get(i5)).P(str + "  "));
            P = p3.toString();
        }
        return P;
    }

    public final void Q(Transition transition) {
        this.f14395d0.add(transition);
        transition.G = this;
        long j = this.f2539i;
        if (j >= 0) {
            transition.I(j);
        }
        if ((this.h0 & 1) != 0) {
            transition.K(this.f2540v);
        }
        if ((this.h0 & 2) != 0) {
            transition.M(this.T);
        }
        if ((this.h0 & 4) != 0) {
            transition.L(this.V);
        }
        if ((this.h0 & 8) != 0) {
            transition.J(this.U);
        }
    }

    public final Transition R(int i5) {
        if (i5 < 0 || i5 >= this.f14395d0.size()) {
            return null;
        }
        return (Transition) this.f14395d0.get(i5);
    }

    @Override // androidx.transition.Transition
    /* renamed from: S, reason: merged with bridge method [inline-methods] */
    public final void I(long j) {
        ArrayList arrayList;
        this.f2539i = j;
        if (j < 0 || (arrayList = this.f14395d0) == null) {
            return;
        }
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((Transition) this.f14395d0.get(i5)).I(j);
        }
    }

    @Override // androidx.transition.Transition
    /* renamed from: T, reason: merged with bridge method [inline-methods] */
    public final void K(TimeInterpolator timeInterpolator) {
        this.h0 |= 1;
        ArrayList arrayList = this.f14395d0;
        if (arrayList != null) {
            int size = arrayList.size();
            for (int i5 = 0; i5 < size; i5++) {
                ((Transition) this.f14395d0.get(i5)).K(timeInterpolator);
            }
        }
        this.f2540v = timeInterpolator;
    }

    public final void U(int i5) {
        if (i5 == 0) {
            this.f14396e0 = true;
        } else {
            if (i5 != 1) {
                throw new AndroidRuntimeException(k0.d.i(i5, "Invalid parameter for TransitionSet ordering: "));
            }
            this.f14396e0 = false;
        }
    }

    @Override // androidx.transition.Transition
    public final void b(View view) {
        for (int i5 = 0; i5 < this.f14395d0.size(); i5++) {
            ((Transition) this.f14395d0.get(i5)).b(view);
        }
        this.f2542x.add(view);
    }

    @Override // androidx.transition.Transition
    public final void cancel() {
        super.cancel();
        Transition[] transitionArr = this.f14399i0;
        this.f14399i0 = null;
        if (transitionArr == null) {
            transitionArr = new Transition[this.f14395d0.size()];
        }
        Transition[] transitionArr2 = (Transition[]) this.f14395d0.toArray(transitionArr);
        int size = this.f14395d0.size();
        for (int i5 = 0; i5 < size; i5++) {
            transitionArr2[i5].cancel();
        }
        Arrays.fill(transitionArr2, (Object) null);
        this.f14399i0 = transitionArr2;
    }

    @Override // androidx.transition.Transition
    public final void d(b0 b0Var) {
        View view = b0Var.f14327b;
        if (y(view)) {
            Iterator it = this.f14395d0.iterator();
            while (it.hasNext()) {
                Transition transition = (Transition) it.next();
                if (transition.y(view)) {
                    transition.d(b0Var);
                    b0Var.f14328c.add(transition);
                }
            }
        }
    }

    @Override // androidx.transition.Transition
    public final void f(b0 b0Var) {
        super.f(b0Var);
        int size = this.f14395d0.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((Transition) this.f14395d0.get(i5)).f(b0Var);
        }
    }

    @Override // androidx.transition.Transition
    public final void g(b0 b0Var) {
        View view = b0Var.f14327b;
        if (y(view)) {
            Iterator it = this.f14395d0.iterator();
            while (it.hasNext()) {
                Transition transition = (Transition) it.next();
                if (transition.y(view)) {
                    transition.g(b0Var);
                    b0Var.f14328c.add(transition);
                }
            }
        }
    }

    @Override // androidx.transition.Transition
    /* renamed from: k */
    public final Transition clone() {
        z zVar = (z) super.clone();
        zVar.f14395d0 = new ArrayList();
        int size = this.f14395d0.size();
        for (int i5 = 0; i5 < size; i5++) {
            Transition clone = ((Transition) this.f14395d0.get(i5)).clone();
            zVar.f14395d0.add(clone);
            clone.G = zVar;
        }
        return zVar;
    }

    @Override // androidx.transition.Transition
    public final void m(ViewGroup viewGroup, com.google.firebase.messaging.r rVar, com.google.firebase.messaging.r rVar2, ArrayList arrayList, ArrayList arrayList2) {
        long j = this.f2538e;
        int size = this.f14395d0.size();
        for (int i5 = 0; i5 < size; i5++) {
            Transition transition = (Transition) this.f14395d0.get(i5);
            if (j > 0 && (this.f14396e0 || i5 == 0)) {
                long j5 = transition.f2538e;
                if (j5 > 0) {
                    transition.N(j5 + j);
                } else {
                    transition.N(j);
                }
            }
            transition.m(viewGroup, rVar, rVar2, arrayList, arrayList2);
        }
    }

    @Override // androidx.transition.Transition
    public final void o() {
        for (int i5 = 0; i5 < this.f14395d0.size(); i5++) {
            ((Transition) this.f14395d0.get(i5)).o();
        }
        super.o();
    }

    @Override // androidx.transition.Transition
    public final boolean u() {
        for (int i5 = 0; i5 < this.f14395d0.size(); i5++) {
            if (((Transition) this.f14395d0.get(i5)).u()) {
                return true;
            }
        }
        return false;
    }

    @Override // androidx.transition.Transition
    public final boolean v() {
        int size = this.f14395d0.size();
        for (int i5 = 0; i5 < size; i5++) {
            if (!((Transition) this.f14395d0.get(i5)).v()) {
                return false;
            }
        }
        return true;
    }
}
