package ws;

import java.io.IOException;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final class j extends ss.a {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f20092e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ Object f20093f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ Object f20094g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ j(String str, Object obj, Object obj2, int i5) {
        super(str, true);
        this.f20092e = i5;
        this.f20093f = obj;
        this.f20094g = obj2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r7v0, types: [T, ws.a0] */
    @Override // ss.a
    public final long a() {
        long a;
        int i5;
        w[] wVarArr;
        switch (this.f20092e) {
            case 0:
                p pVar = (p) this.f20093f;
                pVar.f20113d.a(pVar, (a0) ((Ref.ObjectRef) this.f20094g).element);
                return -1L;
            case 1:
                try {
                    ((p) this.f20093f).f20113d.b((w) this.f20094g);
                } catch (IOException e9) {
                    ys.n nVar = ys.n.a;
                    ys.n nVar2 = ys.n.a;
                    String stringPlus = Intrinsics.stringPlus("Http2Connection.Listener failure for ", ((p) this.f20093f).f20115i);
                    nVar2.getClass();
                    ys.n.i(4, stringPlus, e9);
                    try {
                        ((w) this.f20094g).c(b.PROTOCOL_ERROR, e9);
                    } catch (IOException unused) {
                    }
                }
                return -1L;
            default:
                bs.q qVar = (bs.q) this.f20093f;
                a0 settings = (a0) this.f20094g;
                Intrinsics.checkNotNullParameter(settings, "settings");
                Ref.ObjectRef objectRef = new Ref.ObjectRef();
                p pVar2 = (p) qVar.f3228i;
                synchronized (pVar2.T) {
                    synchronized (pVar2) {
                        try {
                            a0 a0Var = pVar2.N;
                            ?? a0Var2 = new a0();
                            a0Var2.b(a0Var);
                            a0Var2.b(settings);
                            objectRef.element = a0Var2;
                            a = a0Var2.a() - a0Var.a();
                            i5 = 0;
                            if (a != 0 && !pVar2.f20114e.isEmpty()) {
                                Object[] array = pVar2.f20114e.values().toArray(new w[0]);
                                if (array == null) {
                                    throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
                                }
                                wVarArr = (w[]) array;
                                a0 a0Var3 = (a0) objectRef.element;
                                Intrinsics.checkNotNullParameter(a0Var3, "<set-?>");
                                pVar2.N = a0Var3;
                                pVar2.G.c(new j(Intrinsics.stringPlus(pVar2.f20115i, " onSettings"), pVar2, objectRef, i5), 0L);
                                Unit unit = Unit.a;
                            }
                            wVarArr = null;
                            a0 a0Var32 = (a0) objectRef.element;
                            Intrinsics.checkNotNullParameter(a0Var32, "<set-?>");
                            pVar2.N = a0Var32;
                            pVar2.G.c(new j(Intrinsics.stringPlus(pVar2.f20115i, " onSettings"), pVar2, objectRef, i5), 0L);
                            Unit unit2 = Unit.a;
                        } catch (Throwable th2) {
                            throw th2;
                        }
                    }
                    try {
                        pVar2.T.c((a0) objectRef.element);
                    } catch (IOException e10) {
                        pVar2.f(e10);
                    }
                    Unit unit3 = Unit.a;
                }
                if (wVarArr != null) {
                    int length = wVarArr.length;
                    while (i5 < length) {
                        w wVar = wVarArr[i5];
                        i5++;
                        synchronized (wVar) {
                            wVar.f20151f += a;
                            if (a > 0) {
                                wVar.notifyAll();
                            }
                            Unit unit4 = Unit.a;
                        }
                    }
                }
                return -1L;
        }
    }
}
