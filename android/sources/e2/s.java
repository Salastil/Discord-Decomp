package e2;

import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.sync.Mutex;

/* loaded from: classes.dex */
public final class s {
    public final /* synthetic */ Mutex a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Ref.BooleanRef f7887b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f7888c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ z f7889d;

    public s(Mutex mutex, Ref.BooleanRef booleanRef, Ref.ObjectRef objectRef, z zVar) {
        this.a = mutex;
        this.f7887b = booleanRef;
        this.f7888c = objectRef;
        this.f7889d = zVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00b4 A[Catch: all -> 0x0054, TRY_LEAVE, TryCatch #1 {all -> 0x0054, blocks: (B:27:0x0050, B:28:0x00ac, B:30:0x00b4), top: B:26:0x0050 }] */
    /* JADX WARN: Removed duplicated region for block: B:35:0x00ca  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0094 A[Catch: all -> 0x00d1, TRY_LEAVE, TryCatch #0 {all -> 0x00d1, blocks: (B:40:0x0090, B:42:0x0094, B:45:0x00d4, B:46:0x00db), top: B:39:0x0090 }] */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00d4 A[Catch: all -> 0x00d1, TRY_ENTER, TryCatch #0 {all -> 0x00d1, blocks: (B:40:0x0090, B:42:0x0094, B:45:0x00d4, B:46:0x00db), top: B:39:0x0090 }] */
    /* JADX WARN: Removed duplicated region for block: B:49:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0024  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object a(d dVar, lo.c cVar) {
        r rVar;
        int i5;
        Mutex mutex;
        z zVar;
        Ref.BooleanRef booleanRef;
        Ref.ObjectRef objectRef;
        Function2 function2;
        Mutex mutex2;
        Mutex mutex3;
        z zVar2;
        T t5;
        Ref.ObjectRef objectRef2;
        try {
            if (cVar instanceof r) {
                rVar = (r) cVar;
                int i6 = rVar.E;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    rVar.E = i6 - Integer.MIN_VALUE;
                    Object obj = rVar.f7885x;
                    ko.a aVar = ko.a.f13464d;
                    i5 = rVar.E;
                    if (i5 != 0) {
                        ki.b.R(obj);
                        rVar.f7880d = dVar;
                        mutex = this.a;
                        rVar.f7881e = mutex;
                        Ref.BooleanRef booleanRef2 = this.f7887b;
                        rVar.f7882i = booleanRef2;
                        Ref.ObjectRef objectRef3 = this.f7888c;
                        rVar.f7883v = objectRef3;
                        zVar = this.f7889d;
                        rVar.f7884w = zVar;
                        rVar.E = 1;
                        if (mutex.a(rVar) != aVar) {
                            booleanRef = booleanRef2;
                            objectRef = objectRef3;
                            function2 = dVar;
                        }
                        return aVar;
                    }
                    if (i5 != 1) {
                        if (i5 != 2) {
                            if (i5 != 3) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            Object obj2 = rVar.f7882i;
                            objectRef2 = (Ref.ObjectRef) rVar.f7881e;
                            mutex2 = (Mutex) rVar.f7880d;
                            try {
                                ki.b.R(obj);
                                t5 = obj2;
                                objectRef2.element = t5;
                                objectRef = objectRef2;
                                T t10 = objectRef.element;
                                mutex2.b(null);
                                return t10;
                            } catch (Throwable th2) {
                                th = th2;
                                mutex2.b(null);
                                throw th;
                            }
                        }
                        zVar2 = (z) rVar.f7882i;
                        objectRef = (Ref.ObjectRef) rVar.f7881e;
                        mutex3 = (Mutex) rVar.f7880d;
                        try {
                            ki.b.R(obj);
                            if (!Intrinsics.areEqual(obj, objectRef.element)) {
                                mutex2 = mutex3;
                                T t102 = objectRef.element;
                                mutex2.b(null);
                                return t102;
                            }
                            rVar.f7880d = mutex3;
                            rVar.f7881e = objectRef;
                            rVar.f7882i = obj;
                            rVar.E = 3;
                            if (zVar2.i(obj, rVar) != aVar) {
                                t5 = obj;
                                objectRef2 = objectRef;
                                mutex2 = mutex3;
                                objectRef2.element = t5;
                                objectRef = objectRef2;
                                T t1022 = objectRef.element;
                                mutex2.b(null);
                                return t1022;
                            }
                            return aVar;
                        } catch (Throwable th3) {
                            th = th3;
                            mutex2 = mutex3;
                            mutex2.b(null);
                            throw th;
                        }
                    }
                    z zVar3 = rVar.f7884w;
                    objectRef = rVar.f7883v;
                    booleanRef = (Ref.BooleanRef) rVar.f7882i;
                    Mutex mutex4 = (Mutex) rVar.f7881e;
                    Function2 function22 = (Function2) rVar.f7880d;
                    ki.b.R(obj);
                    zVar = zVar3;
                    function2 = function22;
                    mutex = mutex4;
                    if (!booleanRef.element) {
                        throw new IllegalStateException("InitializerApi.updateData should not be called after initialization is complete.");
                    }
                    Object obj3 = objectRef.element;
                    rVar.f7880d = mutex;
                    rVar.f7881e = objectRef;
                    rVar.f7882i = zVar;
                    rVar.f7883v = null;
                    rVar.f7884w = null;
                    rVar.E = 2;
                    Object invoke = function2.invoke(obj3, rVar);
                    if (invoke != aVar) {
                        mutex3 = mutex;
                        obj = invoke;
                        zVar2 = zVar;
                        if (!Intrinsics.areEqual(obj, objectRef.element)) {
                        }
                    }
                    return aVar;
                }
            }
            if (!booleanRef.element) {
            }
        } catch (Throwable th4) {
            th = th4;
            mutex2 = mutex;
            mutex2.b(null);
            throw th;
        }
        rVar = new r(this, cVar);
        Object obj4 = rVar.f7885x;
        ko.a aVar2 = ko.a.f13464d;
        i5 = rVar.E;
        if (i5 != 0) {
        }
    }
}
