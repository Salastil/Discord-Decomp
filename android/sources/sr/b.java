package sr;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.jvm.functions.Function2;

/* loaded from: classes3.dex */
public abstract class b {
    public static final a5.h a = new a5.h("CLOSED");

    public static final Object a(u uVar, long j, Function2 function2) {
        while (true) {
            if (uVar.f18127i >= j && !uVar.d()) {
                return uVar;
            }
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = c.f18101d;
            Object obj = atomicReferenceFieldUpdater.get(uVar);
            a5.h hVar = a;
            if (obj == hVar) {
                return hVar;
            }
            u uVar2 = (u) ((c) obj);
            if (uVar2 == null) {
                uVar2 = (u) function2.invoke(Long.valueOf(uVar.f18127i + 1), uVar);
                while (!atomicReferenceFieldUpdater.compareAndSet(uVar, null, uVar2)) {
                    if (atomicReferenceFieldUpdater.get(uVar) != null) {
                        break;
                    }
                }
                if (uVar.d()) {
                    uVar.e();
                }
            }
            uVar = uVar2;
        }
    }
}
