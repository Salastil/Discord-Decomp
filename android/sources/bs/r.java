package bs;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Function;
import kotlin.Result;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlin.reflect.KType;
import kotlinx.serialization.KSerializer;

/* loaded from: classes3.dex */
public final class r implements r1, g1 {

    /* renamed from: d, reason: collision with root package name */
    public final t f3231d;

    /* renamed from: e, reason: collision with root package name */
    public final Function f3232e;

    public r(Function1 compute) {
        Intrinsics.checkNotNullParameter(compute, "compute");
        this.f3232e = compute;
        this.f3231d = new t();
    }

    @Override // bs.r1
    public KSerializer c(KClass key) {
        Intrinsics.checkNotNullParameter(key, "key");
        Object obj = this.f3231d.get(com.facebook.imagepipeline.nativecode.c.z(key));
        Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
        y0 y0Var = (y0) obj;
        Object obj2 = y0Var.a.get();
        if (obj2 == null) {
            obj2 = y0Var.a(new q(0, this, key));
        }
        return ((k) obj2).a;
    }

    @Override // bs.g1
    public Object q(KClass key, ArrayList types) {
        Object i5;
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(types, "types");
        Object obj = this.f3231d.get(com.facebook.imagepipeline.nativecode.c.z(key));
        Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
        y0 y0Var = (y0) obj;
        Object obj2 = y0Var.a.get();
        if (obj2 == null) {
            obj2 = y0Var.a(new s());
        }
        f1 f1Var = (f1) obj2;
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(types, 10));
        Iterator it = types.iterator();
        while (it.hasNext()) {
            arrayList.add(new p0((KType) it.next()));
        }
        ConcurrentHashMap concurrentHashMap = f1Var.a;
        Object obj3 = concurrentHashMap.get(arrayList);
        if (obj3 == null) {
            try {
                fo.q qVar = Result.f13476e;
                i5 = (KSerializer) ((Function2) this.f3232e).invoke(key, types);
            } catch (Throwable th2) {
                fo.q qVar2 = Result.f13476e;
                i5 = ki.b.i(th2);
            }
            Result result = new Result(i5);
            Object putIfAbsent = concurrentHashMap.putIfAbsent(arrayList, result);
            obj3 = putIfAbsent == null ? result : putIfAbsent;
        }
        Intrinsics.checkNotNullExpressionValue(obj3, "getOrPut(...)");
        return ((Result) obj3).f13477d;
    }

    public r(Function2 compute) {
        Intrinsics.checkNotNullParameter(compute, "compute");
        this.f3232e = compute;
        this.f3231d = new t();
    }
}
