package r0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import s0.i;
import s0.o;

/* loaded from: classes.dex */
public final class c {

    /* renamed from: b, reason: collision with root package name */
    public int f17077b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f17078c;

    /* renamed from: d, reason: collision with root package name */
    public final ConstraintWidget f17079d;

    /* renamed from: e, reason: collision with root package name */
    public final int f17080e;

    /* renamed from: f, reason: collision with root package name */
    public c f17081f;

    /* renamed from: i, reason: collision with root package name */
    public p0.e f17084i;
    public HashSet a = null;

    /* renamed from: g, reason: collision with root package name */
    public int f17082g = 0;

    /* renamed from: h, reason: collision with root package name */
    public int f17083h = Integer.MIN_VALUE;

    public c(ConstraintWidget constraintWidget, int i5) {
        this.f17079d = constraintWidget;
        this.f17080e = i5;
    }

    public final void a(c cVar, int i5) {
        b(cVar, i5, Integer.MIN_VALUE, false);
    }

    public final boolean b(c cVar, int i5, int i6, boolean z5) {
        if (cVar == null) {
            j();
            return true;
        }
        if (!z5 && !i(cVar)) {
            return false;
        }
        this.f17081f = cVar;
        if (cVar.a == null) {
            cVar.a = new HashSet();
        }
        HashSet hashSet = this.f17081f.a;
        if (hashSet != null) {
            hashSet.add(this);
        }
        this.f17082g = i5;
        this.f17083h = i6;
        return true;
    }

    public final void c(int i5, ArrayList arrayList, o oVar) {
        HashSet hashSet = this.a;
        if (hashSet != null) {
            Iterator it = hashSet.iterator();
            while (it.hasNext()) {
                i.b(((c) it.next()).f17079d, i5, arrayList, oVar);
            }
        }
    }

    public final int d() {
        if (this.f17078c) {
            return this.f17077b;
        }
        return 0;
    }

    public final int e() {
        c cVar;
        if (this.f17079d.f1230f0 == 8) {
            return 0;
        }
        int i5 = this.f17083h;
        return (i5 == Integer.MIN_VALUE || (cVar = this.f17081f) == null || cVar.f17079d.f1230f0 != 8) ? this.f17082g : i5;
    }

    public final c f() {
        int i5 = this.f17080e;
        int b10 = f0.e.b(i5);
        ConstraintWidget constraintWidget = this.f17079d;
        switch (b10) {
            case 0:
            case 5:
            case 6:
            case 7:
            case 8:
                return null;
            case 1:
                return constraintWidget.J;
            case 2:
                return constraintWidget.K;
            case 3:
                return constraintWidget.H;
            case 4:
                return constraintWidget.I;
            default:
                throw new AssertionError(k0.d.w(i5));
        }
    }

    public final boolean g() {
        HashSet hashSet = this.a;
        if (hashSet == null) {
            return false;
        }
        Iterator it = hashSet.iterator();
        while (it.hasNext()) {
            if (((c) it.next()).f().h()) {
                return true;
            }
        }
        return false;
    }

    public final boolean h() {
        return this.f17081f != null;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:10:0x0063 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean i(c cVar) {
        if (cVar != null) {
            ConstraintWidget constraintWidget = cVar.f17079d;
            int i5 = cVar.f17080e;
            int i6 = this.f17080e;
            if (i5 != i6) {
                switch (f0.e.b(i6)) {
                    case 0:
                    case 7:
                    case 8:
                        break;
                    case 1:
                    case 3:
                        boolean z5 = i5 == 2 || i5 == 4;
                        if (!(constraintWidget instanceof f)) {
                            return z5;
                        }
                        if (z5 || i5 == 8) {
                        }
                        break;
                    case 2:
                    case 4:
                        boolean z6 = i5 == 3 || i5 == 5;
                        if (!(constraintWidget instanceof f)) {
                            return z6;
                        }
                        if (z6 || i5 == 9) {
                        }
                        break;
                    case 5:
                        if (i5 == 2 || i5 == 4) {
                        }
                        break;
                    case 6:
                        if (i5 == 6 || i5 == 8 || i5 == 9) {
                        }
                        break;
                    default:
                        throw new AssertionError(k0.d.w(i6));
                }
            } else if (i6 != 6 || (constraintWidget.D && this.f17079d.D)) {
                return true;
            }
        }
        return false;
    }

    public final void j() {
        HashSet hashSet;
        c cVar = this.f17081f;
        if (cVar != null && (hashSet = cVar.a) != null) {
            hashSet.remove(this);
            if (this.f17081f.a.size() == 0) {
                this.f17081f.a = null;
            }
        }
        this.a = null;
        this.f17081f = null;
        this.f17082g = 0;
        this.f17083h = Integer.MIN_VALUE;
        this.f17078c = false;
        this.f17077b = 0;
    }

    public final void k() {
        p0.e eVar = this.f17084i;
        if (eVar == null) {
            this.f17084i = new p0.e(1);
        } else {
            eVar.c();
        }
    }

    public final void l(int i5) {
        this.f17077b = i5;
        this.f17078c = true;
    }

    public final String toString() {
        return this.f17079d.f1232g0 + ":" + k0.d.w(this.f17080e);
    }
}
