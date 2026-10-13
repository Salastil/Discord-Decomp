package xq;

import a5.h0;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public class j implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final l f20543d;

    /* renamed from: e, reason: collision with root package name */
    public final ConcurrentHashMap f20544e;

    /* renamed from: i, reason: collision with root package name */
    public final Function1 f20545i;

    public j(l lVar, ConcurrentHashMap concurrentHashMap, Function1 function1) {
        this.f20543d = lVar;
        this.f20544e = concurrentHashMap;
        this.f20545i = function1;
    }

    public static /* synthetic */ void a(int i5) {
        String str = (i5 == 3 || i5 == 4) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 3 || i5 == 4) ? 2 : 3];
        if (i5 == 1) {
            objArr[0] = "map";
        } else if (i5 == 2) {
            objArr[0] = "compute";
        } else if (i5 == 3 || i5 == 4) {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$MapBasedMemoizedFunction";
        } else {
            objArr[0] = "storageManager";
        }
        if (i5 == 3) {
            objArr[1] = "recursionDetected";
        } else if (i5 != 4) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$MapBasedMemoizedFunction";
        } else {
            objArr[1] = "raceCondition";
        }
        if (i5 != 3 && i5 != 4) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 != 3 && i5 != 4) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public final AssertionError b(Object obj, Object obj2) {
        AssertionError assertionError = new AssertionError("Inconsistent key detected. " + k.f20547e + " is expected, was: " + obj2 + ", most probably race condition detected on input " + obj + " under " + this.f20543d);
        l.f(assertionError);
        return assertionError;
    }

    public final AssertionError c(Object obj, Object obj2) {
        AssertionError assertionError = new AssertionError("Race condition detected on input " + obj + ". Old value is " + obj2 + " under " + this.f20543d);
        l.f(assertionError);
        return assertionError;
    }

    public final AssertionError d(Object obj, Throwable th2) {
        AssertionError assertionError = new AssertionError("Unable to remove " + obj + " under " + this.f20543d, th2);
        l.f(assertionError);
        return assertionError;
    }

    @Override // kotlin.jvm.functions.Function1
    public Object invoke(Object obj) {
        AssertionError assertionError;
        AssertionError d6;
        l lVar = this.f20543d;
        a aVar = lVar.f20552b;
        n nVar = lVar.a;
        ConcurrentHashMap concurrentHashMap = this.f20544e;
        Object obj2 = concurrentHashMap.get(obj);
        Object obj3 = ir.n.a;
        k kVar = k.f20547e;
        if (obj2 != null && obj2 != kVar) {
            ir.n.l(obj2);
            if (obj2 == obj3) {
                return null;
            }
            return obj2;
        }
        nVar.lock();
        try {
            Object obj4 = concurrentHashMap.get(obj);
            k kVar2 = k.f20548i;
            if (obj4 == kVar) {
                h0 e9 = lVar.e(obj, "");
                if (e9 == null) {
                    a(3);
                    throw null;
                }
                if (!e9.f175e) {
                    return e9.f176i;
                }
                obj4 = kVar2;
            }
            if (obj4 == kVar2) {
                h0 e10 = lVar.e(obj, "");
                if (e10 == null) {
                    a(3);
                    throw null;
                }
                if (!e10.f175e) {
                    return e10.f176i;
                }
            }
            if (obj4 != null) {
                ir.n.l(obj4);
                return obj4 != obj3 ? obj4 : null;
            }
            try {
                concurrentHashMap.put(obj, kVar);
                Object invoke = this.f20545i.invoke(obj);
                if (invoke != null) {
                    obj3 = invoke;
                }
                Object put = concurrentHashMap.put(obj, obj3);
                if (put == kVar) {
                    return invoke;
                }
                assertionError = c(obj, put);
                try {
                    throw assertionError;
                } catch (Throwable th2) {
                    th = th2;
                    if (ir.n.j(th)) {
                        try {
                            Object remove = concurrentHashMap.remove(obj);
                            if (remove != kVar) {
                                throw b(obj, remove);
                            }
                            throw th;
                        } finally {
                        }
                    }
                    if (th == assertionError) {
                        try {
                            concurrentHashMap.remove(obj);
                            aVar.a(th);
                            throw null;
                        } finally {
                        }
                    }
                    Object put2 = concurrentHashMap.put(obj, new ir.m(th));
                    if (put2 != kVar) {
                        throw c(obj, put2);
                    }
                    aVar.a(th);
                    throw null;
                    nVar.unlock();
                }
            } catch (Throwable th3) {
                th = th3;
                assertionError = null;
            }
        } finally {
            nVar.unlock();
        }
    }
}
