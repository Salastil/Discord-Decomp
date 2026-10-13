package rs;

import et.y;
import java.io.IOException;
import java.net.Socket;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import ts.k;
import ts.l;
import ws.p;

/* loaded from: classes3.dex */
public final class f extends ss.a {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f17649e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ Object f17650f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ f(Object obj, String str, int i5) {
        super(str, true);
        this.f17649e = i5;
        this.f17650f = obj;
    }

    @Override // ss.a
    public final long a() {
        int i5 = 0;
        switch (this.f17649e) {
            case 0:
                g gVar = (g) this.f17650f;
                synchronized (gVar) {
                    if (gVar.I && !gVar.J) {
                        try {
                            gVar.P();
                        } catch (IOException unused) {
                            gVar.K = true;
                        }
                        try {
                            if (gVar.o()) {
                                gVar.A();
                                gVar.F = 0;
                            }
                        } catch (IOException unused2) {
                            gVar.L = true;
                            gVar.f17657y = y.c(new et.d());
                        }
                    }
                }
                return -1L;
            case 1:
                ((Function0) this.f17650f).invoke();
                return -1L;
            case 2:
                l lVar = (l) this.f17650f;
                long nanoTime = System.nanoTime();
                Iterator it = lVar.f18754d.iterator();
                long j = Long.MIN_VALUE;
                k kVar = null;
                int i6 = 0;
                while (it.hasNext()) {
                    k connection = (k) it.next();
                    Intrinsics.checkNotNullExpressionValue(connection, "connection");
                    synchronized (connection) {
                        if (lVar.b(connection, nanoTime) > 0) {
                            i6++;
                        } else {
                            i5++;
                            long j5 = nanoTime - connection.f18751q;
                            if (j5 > j) {
                                kVar = connection;
                                j = j5;
                            }
                            Unit unit = Unit.a;
                        }
                    }
                }
                long j7 = lVar.a;
                if (j < j7 && i5 <= 5) {
                    if (i5 > 0) {
                        return j7 - j;
                    }
                    if (i6 > 0) {
                        return j7;
                    }
                    return -1L;
                }
                Intrinsics.checkNotNull(kVar);
                synchronized (kVar) {
                    if (!kVar.f18750p.isEmpty()) {
                        return 0L;
                    }
                    if (kVar.f18751q + j != nanoTime) {
                        return 0L;
                    }
                    kVar.j = true;
                    lVar.f18754d.remove(kVar);
                    Socket socket = kVar.f18740d;
                    Intrinsics.checkNotNull(socket);
                    qs.b.d(socket);
                    if (!lVar.f18754d.isEmpty()) {
                        return 0L;
                    }
                    lVar.f18752b.a();
                    return 0L;
                }
            default:
                p pVar = (p) this.f17650f;
                pVar.getClass();
                try {
                    pVar.T.o(2, 0, false);
                } catch (IOException e9) {
                    pVar.f(e9);
                }
                return -1L;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ f(String str, Object obj, int i5) {
        super(str, true);
        this.f17649e = i5;
        this.f17650f = obj;
    }
}
