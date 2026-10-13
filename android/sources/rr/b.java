package rr;

import java.util.Arrays;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class b {

    /* renamed from: d, reason: collision with root package name */
    public d[] f17570d;

    /* renamed from: e, reason: collision with root package name */
    public int f17571e;

    /* renamed from: i, reason: collision with root package name */
    public int f17572i;

    /* renamed from: v, reason: collision with root package name */
    public a0 f17573v;

    public final d c() {
        d dVar;
        a0 a0Var;
        synchronized (this) {
            try {
                d[] dVarArr = this.f17570d;
                if (dVarArr == null) {
                    dVarArr = g();
                    this.f17570d = dVarArr;
                } else if (this.f17571e >= dVarArr.length) {
                    Object[] copyOf = Arrays.copyOf(dVarArr, dVarArr.length * 2);
                    Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
                    this.f17570d = (d[]) copyOf;
                    dVarArr = (d[]) copyOf;
                }
                int i5 = this.f17572i;
                do {
                    dVar = dVarArr[i5];
                    if (dVar == null) {
                        dVar = f();
                        dVarArr[i5] = dVar;
                    }
                    i5++;
                    if (i5 >= dVarArr.length) {
                        i5 = 0;
                    }
                    Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type kotlinx.coroutines.flow.internal.AbstractSharedFlowSlot<kotlin.Any>");
                } while (!dVar.a(this));
                this.f17572i = i5;
                this.f17571e++;
                a0Var = this.f17573v;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (a0Var != null) {
            a0Var.v(1);
        }
        return dVar;
    }

    public final a0 e() {
        a0 a0Var;
        synchronized (this) {
            a0Var = this.f17573v;
            if (a0Var == null) {
                int i5 = this.f17571e;
                a0Var = new a0(1, Integer.MAX_VALUE, pr.a.f16468e);
                a0Var.d(Integer.valueOf(i5));
                this.f17573v = a0Var;
            }
        }
        return a0Var;
    }

    public abstract d f();

    public abstract d[] g();

    public final void h(d dVar) {
        a0 a0Var;
        int i5;
        Continuation[] b10;
        synchronized (this) {
            try {
                int i6 = this.f17571e - 1;
                this.f17571e = i6;
                a0Var = this.f17573v;
                if (i6 == 0) {
                    this.f17572i = 0;
                }
                Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type kotlinx.coroutines.flow.internal.AbstractSharedFlowSlot<kotlin.Any>");
                b10 = dVar.b(this);
            } catch (Throwable th2) {
                throw th2;
            }
        }
        for (Continuation continuation : b10) {
            if (continuation != null) {
                fo.q qVar = Result.f13476e;
                continuation.resumeWith(Unit.a);
            }
        }
        if (a0Var != null) {
            a0Var.v(-1);
        }
    }
}
