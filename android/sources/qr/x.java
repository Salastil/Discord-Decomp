package qr;

import java.util.Arrays;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import kotlinx.coroutines.flow.MutableSharedFlow;

/* loaded from: classes3.dex */
public class x extends rr.b implements MutableSharedFlow, Flow, rr.s {
    public Object[] E;
    public long F;
    public long G;
    public int H;
    public int I;

    /* renamed from: w, reason: collision with root package name */
    public final int f17044w;

    /* renamed from: x, reason: collision with root package name */
    public final int f17045x;

    /* renamed from: y, reason: collision with root package name */
    public final pr.a f17046y;

    public x(int i5, int i6, pr.a aVar) {
        this.f17044w = i5;
        this.f17045x = i6;
        this.f17046y = aVar;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(10:0|1|(2:3|(7:5|6|(3:(6:(1:(1:11)(2:47|48))(1:49)|12|13|14|15|(3:16|(3:38|39|(3:41|42|43)(1:44))(4:18|(1:23)|32|(2:34|35)(1:36))|37))(4:50|51|52|53)|29|30)(5:59|60|61|(2:63|(1:65))|67)|54|55|15|(3:16|(0)(0)|37)))|70|6|(0)(0)|54|55|15|(3:16|(0)(0)|37)) */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x00ba, code lost:
    
        throw r2.x();
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x00a9, code lost:
    
        r10 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x00aa, code lost:
    
        r5 = r8;
        r8 = r10;
     */
    /* JADX WARN: Removed duplicated region for block: B:18:0x00ad A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:38:0x0098 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:59:0x005d  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0023  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void k(x xVar, FlowCollector flowCollector, Continuation continuation) {
        w wVar;
        int i5;
        x xVar2;
        Throwable th2;
        z zVar;
        FlowCollector flowCollector2;
        Job job;
        Object s2;
        Job job2;
        FlowCollector flowCollector3;
        if (continuation instanceof w) {
            wVar = (w) continuation;
            int i6 = wVar.f17043y;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                wVar.f17043y = i6 - Integer.MIN_VALUE;
                Object obj = wVar.f17041w;
                ko.a aVar = ko.a.f13464d;
                i5 = wVar.f17043y;
                if (i5 == 0) {
                    if (i5 != 1) {
                        if (i5 == 2) {
                            job2 = wVar.f17040v;
                            zVar = wVar.f17039i;
                            flowCollector3 = wVar.f17038e;
                            xVar2 = wVar.f17037d;
                        } else {
                            if (i5 != 3) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            job2 = wVar.f17040v;
                            zVar = wVar.f17039i;
                            flowCollector3 = wVar.f17038e;
                            xVar2 = wVar.f17037d;
                        }
                        try {
                            ki.b.R(obj);
                            flowCollector2 = flowCollector3;
                            job = job2;
                            xVar = xVar2;
                            while (true) {
                                s2 = xVar.s(zVar);
                                if (s2 == y.a) {
                                    wVar.f17037d = xVar;
                                    wVar.f17038e = flowCollector2;
                                    wVar.f17039i = zVar;
                                    wVar.f17040v = job;
                                    wVar.f17043y = 2;
                                    if (xVar.i(zVar, wVar) == aVar) {
                                        return;
                                    }
                                } else {
                                    if (job != null && !job.c()) {
                                        break;
                                    }
                                    wVar.f17037d = xVar;
                                    wVar.f17038e = flowCollector2;
                                    wVar.f17039i = zVar;
                                    wVar.f17040v = job;
                                    wVar.f17043y = 3;
                                    if (flowCollector2.emit(s2, wVar) == aVar) {
                                        return;
                                    }
                                }
                            }
                        } catch (Throwable th3) {
                            th2 = th3;
                        }
                    } else {
                        zVar = wVar.f17039i;
                        FlowCollector flowCollector4 = wVar.f17038e;
                        x xVar3 = wVar.f17037d;
                        try {
                            ki.b.R(obj);
                            flowCollector2 = flowCollector4;
                            xVar = xVar3;
                        } catch (Throwable th4) {
                            th2 = th4;
                            xVar2 = xVar3;
                        }
                    }
                    xVar2.h(zVar);
                    throw th2;
                }
                ki.b.R(obj);
                z zVar2 = (z) xVar.c();
                try {
                    if (flowCollector instanceof f0) {
                        wVar.f17037d = xVar;
                        wVar.f17038e = flowCollector;
                        wVar.f17039i = zVar2;
                        wVar.f17043y = 1;
                        if (((f0) flowCollector).b(wVar) == aVar) {
                            return;
                        }
                    }
                    flowCollector2 = flowCollector;
                    zVar = zVar2;
                } catch (Throwable th5) {
                    xVar2 = xVar;
                    th2 = th5;
                    zVar = zVar2;
                }
                job = (Job) wVar.getContext().o(nr.t.f15661e);
                while (true) {
                    s2 = xVar.s(zVar);
                    if (s2 == y.a) {
                    }
                }
            }
        }
        wVar = new w(xVar, continuation);
        Object obj2 = wVar.f17041w;
        ko.a aVar2 = ko.a.f13464d;
        i5 = wVar.f17043y;
        if (i5 == 0) {
        }
        job = (Job) wVar.getContext().o(nr.t.f15661e);
        while (true) {
            s2 = xVar.s(zVar);
            if (s2 == y.a) {
            }
        }
    }

    @Override // rr.s
    public final Flow b(CoroutineContext coroutineContext, int i5, pr.a aVar) {
        return ((i5 == 0 || i5 == -3) && aVar == pr.a.f16467d) ? this : new rr.g(this, coroutineContext, i5, aVar);
    }

    @Override // kotlinx.coroutines.flow.Flow
    public final Object collect(FlowCollector flowCollector, Continuation continuation) {
        k(this, flowCollector, continuation);
        return ko.a.f13464d;
    }

    @Override // kotlinx.coroutines.flow.MutableSharedFlow
    public final boolean d(Object obj) {
        int i5;
        boolean z5;
        Continuation[] continuationArr = rr.c.a;
        synchronized (this) {
            if (q(obj)) {
                continuationArr = n(continuationArr);
                z5 = true;
            } else {
                z5 = false;
            }
        }
        for (Continuation continuation : continuationArr) {
            if (continuation != null) {
                fo.q qVar = Result.f13476e;
                continuation.resumeWith(Unit.a);
            }
        }
        return z5;
    }

    @Override // kotlinx.coroutines.flow.MutableSharedFlow, kotlinx.coroutines.flow.FlowCollector
    public final Object emit(Object obj, Continuation frame) {
        Throwable th2;
        Continuation[] n6;
        v vVar;
        if (d(obj)) {
            return Unit.a;
        }
        nr.j jVar = new nr.j(1, ko.f.b(frame));
        jVar.t();
        Continuation[] continuationArr = rr.c.a;
        synchronized (this) {
            try {
                if (q(obj)) {
                    try {
                        fo.q qVar = Result.f13476e;
                        jVar.resumeWith(Unit.a);
                        n6 = n(continuationArr);
                        vVar = null;
                    } catch (Throwable th3) {
                        th2 = th3;
                        throw th2;
                    }
                } else {
                    try {
                        vVar = new v(this, o() + this.H + this.I, obj, jVar);
                        m(vVar);
                        this.I++;
                        if (this.f17045x == 0) {
                            continuationArr = n(continuationArr);
                        }
                        n6 = continuationArr;
                    } catch (Throwable th4) {
                        th = th4;
                        th2 = th;
                        throw th2;
                    }
                }
                if (vVar != null) {
                    jVar.w(new nr.h(2, vVar));
                }
                for (Continuation continuation : n6) {
                    if (continuation != null) {
                        fo.q qVar2 = Result.f13476e;
                        continuation.resumeWith(Unit.a);
                    }
                }
                Object r5 = jVar.r();
                ko.a aVar = ko.a.f13464d;
                if (r5 == aVar) {
                    Intrinsics.checkNotNullParameter(frame, "frame");
                }
                if (r5 != aVar) {
                    r5 = Unit.a;
                }
                return r5 == aVar ? r5 : Unit.a;
            } catch (Throwable th5) {
                th = th5;
            }
        }
    }

    @Override // rr.b
    public final rr.d f() {
        z zVar = new z();
        zVar.a = -1L;
        return zVar;
    }

    @Override // rr.b
    public final rr.d[] g() {
        return new z[2];
    }

    public final Object i(z zVar, w frame) {
        nr.j jVar = new nr.j(1, ko.f.b(frame));
        jVar.t();
        synchronized (this) {
            try {
                if (r(zVar) < 0) {
                    zVar.f17049b = jVar;
                } else {
                    fo.q qVar = Result.f13476e;
                    jVar.resumeWith(Unit.a);
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        Object r5 = jVar.r();
        ko.a aVar = ko.a.f13464d;
        if (r5 == aVar) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5 == aVar ? r5 : Unit.a;
    }

    public final void j() {
        if (this.f17045x != 0 || this.I > 1) {
            Object[] objArr = this.E;
            Intrinsics.checkNotNull(objArr);
            while (this.I > 0 && y.c(objArr, (o() + (this.H + this.I)) - 1) == y.a) {
                this.I--;
                y.d(objArr, o() + this.H + this.I, null);
            }
        }
    }

    public final void l() {
        rr.d[] dVarArr;
        Object[] objArr = this.E;
        Intrinsics.checkNotNull(objArr);
        y.d(objArr, o(), null);
        this.H--;
        long o6 = o() + 1;
        if (this.F < o6) {
            this.F = o6;
        }
        if (this.G < o6) {
            if (this.f17571e != 0 && (dVarArr = this.f17570d) != null) {
                for (rr.d dVar : dVarArr) {
                    if (dVar != null) {
                        z zVar = (z) dVar;
                        long j = zVar.a;
                        if (j >= 0 && j < o6) {
                            zVar.a = o6;
                        }
                    }
                }
            }
            this.G = o6;
        }
    }

    public final void m(Object obj) {
        int i5 = this.H + this.I;
        Object[] objArr = this.E;
        if (objArr == null) {
            objArr = p(null, 0, 2);
        } else if (i5 >= objArr.length) {
            objArr = p(objArr, i5, objArr.length * 2);
        }
        y.d(objArr, o() + i5, obj);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r11v6, types: [java.lang.Object, java.lang.Object[]] */
    public final Continuation[] n(Continuation[] continuationArr) {
        rr.d[] dVarArr;
        z zVar;
        nr.j jVar;
        int length = continuationArr.length;
        if (this.f17571e != 0 && (dVarArr = this.f17570d) != null) {
            int length2 = dVarArr.length;
            int i5 = 0;
            continuationArr = continuationArr;
            while (i5 < length2) {
                rr.d dVar = dVarArr[i5];
                if (dVar != null && (jVar = (zVar = (z) dVar).f17049b) != null && r(zVar) >= 0) {
                    int length3 = continuationArr.length;
                    continuationArr = continuationArr;
                    if (length >= length3) {
                        ?? copyOf = Arrays.copyOf(continuationArr, Math.max(2, continuationArr.length * 2));
                        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
                        continuationArr = copyOf;
                    }
                    continuationArr[length] = jVar;
                    zVar.f17049b = null;
                    length++;
                }
                i5++;
                continuationArr = continuationArr;
            }
        }
        return continuationArr;
    }

    public final long o() {
        return Math.min(this.G, this.F);
    }

    public final Object[] p(Object[] objArr, int i5, int i6) {
        if (i6 <= 0) {
            throw new IllegalStateException("Buffer size overflow");
        }
        Object[] objArr2 = new Object[i6];
        this.E = objArr2;
        if (objArr != null) {
            long o6 = o();
            for (int i10 = 0; i10 < i5; i10++) {
                long j = i10 + o6;
                y.d(objArr2, j, objArr[((int) j) & (objArr.length - 1)]);
            }
        }
        return objArr2;
    }

    public final boolean q(Object obj) {
        int i5 = this.f17571e;
        int i6 = this.f17044w;
        if (i5 != 0) {
            int i10 = this.H;
            int i11 = this.f17045x;
            if (i10 >= i11 && this.G <= this.F) {
                int ordinal = this.f17046y.ordinal();
                if (ordinal == 0) {
                    return false;
                }
                if (ordinal != 1) {
                    if (ordinal != 2) {
                        throw new fo.n();
                    }
                }
            }
            m(obj);
            int i12 = this.H + 1;
            this.H = i12;
            if (i12 > i11) {
                l();
            }
            long o6 = o() + this.H;
            long j = this.F;
            if (((int) (o6 - j)) > i6) {
                t(1 + j, this.G, o() + this.H, o() + this.H + this.I);
            }
        } else if (i6 != 0) {
            m(obj);
            int i13 = this.H + 1;
            this.H = i13;
            if (i13 > i6) {
                l();
            }
            this.G = o() + this.H;
            return true;
        }
        return true;
    }

    public final long r(z zVar) {
        long j = zVar.a;
        if (j < o() + this.H) {
            return j;
        }
        if (this.f17045x <= 0 && j <= o() && this.I != 0) {
            return j;
        }
        return -1L;
    }

    public final Object s(z zVar) {
        Object obj;
        Continuation[] continuationArr = rr.c.a;
        synchronized (this) {
            try {
                long r5 = r(zVar);
                if (r5 < 0) {
                    obj = y.a;
                } else {
                    long j = zVar.a;
                    Object[] objArr = this.E;
                    Intrinsics.checkNotNull(objArr);
                    Object c6 = y.c(objArr, r5);
                    if (c6 instanceof v) {
                        c6 = ((v) c6).f17035i;
                    }
                    zVar.a = r5 + 1;
                    Object obj2 = c6;
                    continuationArr = u(j);
                    obj = obj2;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        for (Continuation continuation : continuationArr) {
            if (continuation != null) {
                fo.q qVar = Result.f13476e;
                continuation.resumeWith(Unit.a);
            }
        }
        return obj;
    }

    public final void t(long j, long j5, long j7, long j10) {
        long min = Math.min(j5, j);
        for (long o6 = o(); o6 < min; o6++) {
            Object[] objArr = this.E;
            Intrinsics.checkNotNull(objArr);
            y.d(objArr, o6, null);
        }
        this.F = j;
        this.G = j5;
        this.H = (int) (j7 - min);
        this.I = (int) (j10 - j7);
    }

    public final Continuation[] u(long j) {
        long j5;
        long j7;
        long j10;
        Continuation[] continuationArr;
        Continuation[] continuationArr2;
        rr.d[] dVarArr;
        a5.h hVar = y.a;
        Continuation[] continuationArr3 = rr.c.a;
        if (j <= this.G) {
            long o6 = o();
            long j11 = this.H + o6;
            int i5 = this.f17045x;
            if (i5 == 0 && this.I > 0) {
                j11++;
            }
            int i6 = 0;
            if (this.f17571e != 0 && (dVarArr = this.f17570d) != null) {
                for (rr.d dVar : dVarArr) {
                    if (dVar != null) {
                        long j12 = ((z) dVar).a;
                        if (j12 >= 0 && j12 < j11) {
                            j11 = j12;
                        }
                    }
                }
            }
            if (j11 > this.G) {
                long o7 = o() + this.H;
                int min = this.f17571e > 0 ? Math.min(this.I, i5 - ((int) (o7 - j11))) : this.I;
                long j13 = this.I + o7;
                if (min > 0) {
                    j10 = 1;
                    Object[] objArr = this.E;
                    Intrinsics.checkNotNull(objArr);
                    j5 = o6;
                    Continuation[] continuationArr4 = new Continuation[min];
                    long j14 = o7;
                    while (true) {
                        if (o7 >= j13) {
                            continuationArr2 = continuationArr4;
                            j7 = j11;
                            break;
                        }
                        Object c6 = y.c(objArr, o7);
                        continuationArr2 = continuationArr4;
                        if (c6 != hVar) {
                            Intrinsics.checkNotNull(c6, "null cannot be cast to non-null type kotlinx.coroutines.flow.SharedFlowImpl.Emitter");
                            v vVar = (v) c6;
                            int i10 = i6 + 1;
                            j7 = j11;
                            continuationArr2[i6] = vVar.f17036v;
                            y.d(objArr, o7, hVar);
                            y.d(objArr, j14, vVar.f17035i);
                            j14++;
                            if (i10 >= min) {
                                break;
                            }
                            i6 = i10;
                        } else {
                            j7 = j11;
                        }
                        o7++;
                        continuationArr4 = continuationArr2;
                        j11 = j7;
                    }
                    o7 = j14;
                    continuationArr = continuationArr2;
                } else {
                    j5 = o6;
                    j7 = j11;
                    j10 = 1;
                    continuationArr = continuationArr3;
                }
                int i11 = (int) (o7 - j5);
                long j15 = this.f17571e == 0 ? o7 : j7;
                long max = Math.max(this.F, o7 - Math.min(this.f17044w, i11));
                if (i5 == 0 && max < j13) {
                    Object[] objArr2 = this.E;
                    Intrinsics.checkNotNull(objArr2);
                    if (Intrinsics.areEqual(y.c(objArr2, max), hVar)) {
                        o7 += j10;
                        max += j10;
                    }
                }
                t(max, j15, o7, j13);
                j();
                return continuationArr.length == 0 ? continuationArr : n(continuationArr);
            }
        }
        return continuationArr3;
    }
}
