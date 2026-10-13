package ts;

import java.lang.ref.Reference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.TimeUnit;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import ys.n;

/* loaded from: classes3.dex */
public final class l {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final ss.b f18752b;

    /* renamed from: c, reason: collision with root package name */
    public final rs.f f18753c;

    /* renamed from: d, reason: collision with root package name */
    public final ConcurrentLinkedQueue f18754d;

    public l(ss.c taskRunner) {
        TimeUnit timeUnit = TimeUnit.MINUTES;
        Intrinsics.checkNotNullParameter(taskRunner, "taskRunner");
        Intrinsics.checkNotNullParameter(timeUnit, "timeUnit");
        this.a = timeUnit.toNanos(5L);
        this.f18752b = taskRunner.e();
        this.f18753c = new rs.f(this, Intrinsics.stringPlus(qs.b.f17056g, " ConnectionPool"), 2);
        this.f18754d = new ConcurrentLinkedQueue();
    }

    public final boolean a(ps.a address, h call, ArrayList arrayList, boolean z5) {
        Intrinsics.checkNotNullParameter(address, "address");
        Intrinsics.checkNotNullParameter(call, "call");
        Iterator it = this.f18754d.iterator();
        while (true) {
            if (!it.hasNext()) {
                return false;
            }
            k connection = (k) it.next();
            Intrinsics.checkNotNullExpressionValue(connection, "connection");
            synchronized (connection) {
                if (z5) {
                    try {
                        if (!(connection.f18743g != null)) {
                            Unit unit = Unit.a;
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                if (connection.h(address, arrayList)) {
                    call.b(connection);
                    return true;
                }
                Unit unit2 = Unit.a;
            }
        }
    }

    public final int b(k kVar, long j) {
        byte[] bArr = qs.b.a;
        ArrayList arrayList = kVar.f18750p;
        int i5 = 0;
        while (i5 < arrayList.size()) {
            Reference reference = (Reference) arrayList.get(i5);
            if (reference.get() != null) {
                i5++;
            } else {
                String str = "A connection to " + kVar.f18738b.a.f16522h + " was leaked. Did you forget to close a response body?";
                n nVar = n.a;
                n.a.j(((g) reference).a, str);
                arrayList.remove(i5);
                kVar.j = true;
                if (arrayList.isEmpty()) {
                    kVar.f18751q = j - this.a;
                    return 0;
                }
            }
        }
        return arrayList.size();
    }
}
