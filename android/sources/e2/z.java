package e2;

import androidx.lifecycle.f0;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CompletableDeferred;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.sync.Mutex;
import qr.c0;

/* loaded from: classes.dex */
public final class z {

    /* renamed from: i, reason: collision with root package name */
    public static final LinkedHashSet f7921i = new LinkedHashSet();
    public static final Object j = new Object();
    public final a3.q a;

    /* renamed from: b, reason: collision with root package name */
    public final j8.b f7922b;

    /* renamed from: c, reason: collision with root package name */
    public final a4.h f7923c;

    /* renamed from: d, reason: collision with root package name */
    public final String f7924d;

    /* renamed from: e, reason: collision with root package name */
    public final fo.u f7925e;

    /* renamed from: f, reason: collision with root package name */
    public final c0 f7926f;

    /* renamed from: g, reason: collision with root package name */
    public List f7927g;

    /* renamed from: h, reason: collision with root package name */
    public final e4.i f7928h;

    public z(a3.q produceFile, List initTasksList, j8.b corruptionHandler, sr.d scope) {
        Intrinsics.checkNotNullParameter(produceFile, "produceFile");
        h2.f serializer = h2.f.a;
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        Intrinsics.checkNotNullParameter(initTasksList, "initTasksList");
        Intrinsics.checkNotNullParameter(corruptionHandler, "corruptionHandler");
        Intrinsics.checkNotNullParameter(scope, "scope");
        this.a = produceFile;
        this.f7922b = corruptionHandler;
        Continuation continuation = null;
        this.f7923c = new a4.h(new m(this, continuation, 1));
        this.f7924d = ".tmp";
        this.f7925e = fo.l.a(new a3.q(2, this));
        this.f7926f = qr.y.b(b0.a);
        this.f7927g = CollectionsKt.i0(initTasksList);
        androidx.fragment.app.s onComplete = new androidx.fragment.app.s(1, this);
        m consumeMessage = new m(this, continuation, 0);
        Intrinsics.checkNotNullParameter(scope, "scope");
        Intrinsics.checkNotNullParameter(onComplete, "onComplete");
        l onUndeliveredElement = l.f7857d;
        Intrinsics.checkNotNullParameter(onUndeliveredElement, "onUndeliveredElement");
        Intrinsics.checkNotNullParameter(consumeMessage, "consumeMessage");
        e4.i iVar = new e4.i();
        iVar.f7952d = scope;
        iVar.f7953e = consumeMessage;
        iVar.f7954i = zk.a.a(Integer.MAX_VALUE, 6, null);
        iVar.f7955v = new AtomicInteger(0);
        Job job = (Job) scope.f18103d.o(nr.t.f15661e);
        if (job != null) {
            job.P(new g(onComplete, iVar, onUndeliveredElement));
        }
        this.f7928h = iVar;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(9:0|1|(2:3|(5:5|6|7|(8:(1:(1:(2:12|13))(3:15|16|17))|30|31|21|22|(1:24)(1:27)|25|26)(5:32|33|34|(8:36|(1:38)|20|21|22|(0)(0)|25|26)(3:39|(1:41)(1:56)|(2:43|(2:45|(1:47))(2:48|49))(2:50|(2:52|53)(2:54|55)))|29)|18))|61|6|7|(0)(0)|18|(1:(0))) */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x00a2, code lost:
    
        if (r8 != r1) goto L29;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0032, code lost:
    
        r9 = th;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00c8  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00cc  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x004c  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0023  */
    /* JADX WARN: Type inference failed for: r2v8, types: [kotlin.jvm.functions.Function2, lo.h] */
    /* JADX WARN: Type inference failed for: r2v9, types: [kotlin.jvm.functions.Function2, lo.h] */
    /* JADX WARN: Type inference failed for: r8v0, types: [e2.z] */
    /* JADX WARN: Type inference failed for: r8v1 */
    /* JADX WARN: Type inference failed for: r8v11 */
    /* JADX WARN: Type inference failed for: r8v13 */
    /* JADX WARN: Type inference failed for: r8v14, types: [e2.z] */
    /* JADX WARN: Type inference failed for: r8v19 */
    /* JADX WARN: Type inference failed for: r8v2 */
    /* JADX WARN: Type inference failed for: r8v21 */
    /* JADX WARN: Type inference failed for: r8v22 */
    /* JADX WARN: Type inference failed for: r8v5 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object a(z zVar, i iVar, lo.c cVar) {
        p pVar;
        int i5;
        CompletableDeferred completableDeferred;
        Throwable a;
        nr.o oVar;
        a0 a0Var;
        Object h6;
        ?? r82;
        if (cVar instanceof p) {
            pVar = (p) cVar;
            int i6 = pVar.f7872x;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                pVar.f7872x = i6 - Integer.MIN_VALUE;
                Object obj = pVar.f7870v;
                ko.a aVar = ko.a.f13464d;
                i5 = pVar.f7872x;
                boolean z5 = true;
                if (i5 == 0) {
                    if (i5 != 1) {
                        if (i5 == 2) {
                            nr.o oVar2 = pVar.f7869i;
                            z zVar2 = pVar.f7868e;
                            i iVar2 = (i) pVar.f7867d;
                            ki.b.R(obj);
                            oVar = oVar2;
                            r82 = zVar2;
                            iVar = iVar2;
                        } else if (i5 != 3) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                    }
                    CompletableDeferred completableDeferred2 = (CompletableDeferred) pVar.f7867d;
                    ki.b.R(obj);
                    zVar = completableDeferred2;
                    fo.q qVar = Result.f13476e;
                    completableDeferred = zVar;
                    a = Result.a(obj);
                    if (a == null) {
                        completableDeferred.V(obj);
                    } else {
                        completableDeferred.U(a);
                    }
                    return Unit.a;
                }
                ki.b.R(obj);
                oVar = iVar.f7852b;
                try {
                    fo.q qVar2 = Result.f13476e;
                    a0Var = (a0) zVar.f7926f.getValue();
                } catch (Throwable th2) {
                    th = th2;
                    zVar = oVar;
                    fo.q qVar3 = Result.f13476e;
                    obj = ki.b.i(th);
                    completableDeferred = zVar;
                    a = Result.a(obj);
                    if (a == null) {
                    }
                    return Unit.a;
                }
                if (a0Var instanceof b) {
                    ?? r22 = iVar.a;
                    CoroutineContext coroutineContext = iVar.f7854d;
                    pVar.f7867d = oVar;
                    pVar.f7872x = 1;
                    h6 = zVar.h(r22, coroutineContext, pVar);
                    if (h6 == aVar) {
                    }
                    nr.o oVar3 = oVar;
                    obj = h6;
                    zVar = oVar3;
                    fo.q qVar4 = Result.f13476e;
                    completableDeferred = zVar;
                    a = Result.a(obj);
                    if (a == null) {
                    }
                    return Unit.a;
                }
                if (!(a0Var instanceof f)) {
                    z5 = a0Var instanceof b0;
                }
                if (!z5) {
                    if (a0Var instanceof e) {
                        throw ((e) a0Var).a;
                    }
                    throw new fo.n();
                }
                if (a0Var != iVar.f7853c) {
                    throw ((f) a0Var).a;
                }
                pVar.f7867d = iVar;
                pVar.f7868e = zVar;
                pVar.f7869i = oVar;
                pVar.f7872x = 2;
                Object d6 = zVar.d(pVar);
                r82 = zVar;
                if (d6 == aVar) {
                }
                return aVar;
                ?? r23 = iVar.a;
                CoroutineContext coroutineContext2 = iVar.f7854d;
                pVar.f7867d = oVar;
                pVar.f7868e = null;
                pVar.f7869i = null;
                pVar.f7872x = 3;
                h6 = r82.h(r23, coroutineContext2, pVar);
            }
        }
        pVar = new p(zVar, cVar);
        Object obj2 = pVar.f7870v;
        ko.a aVar2 = ko.a.f13464d;
        i5 = pVar.f7872x;
        boolean z52 = true;
        if (i5 == 0) {
        }
        ?? r232 = iVar.a;
        CoroutineContext coroutineContext22 = iVar.f7854d;
        pVar.f7867d = oVar;
        pVar.f7868e = null;
        pVar.f7869i = null;
        pVar.f7872x = 3;
        h6 = r82.h(r232, coroutineContext22, pVar);
    }

    public final File b() {
        return (File) this.f7925e.getValue();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:16:0x011a  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x011f  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00d2  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0109  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00be  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00c2  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x006e  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0024  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object c(lo.c cVar) {
        q qVar;
        int i5;
        Mutex bVar;
        Ref.ObjectRef objectRef;
        z zVar;
        Ref.ObjectRef objectRef2;
        T t5;
        List list;
        z zVar2;
        Ref.ObjectRef objectRef3;
        s sVar;
        Iterator it;
        Mutex mutex;
        Ref.BooleanRef booleanRef;
        Ref.BooleanRef booleanRef2;
        q qVar2;
        z zVar3;
        Ref.ObjectRef objectRef4;
        Mutex mutex2;
        if (cVar instanceof q) {
            qVar = (q) cVar;
            int i6 = qVar.F;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                qVar.F = i6 - Integer.MIN_VALUE;
                Object obj = qVar.f7879y;
                ko.a aVar = ko.a.f13464d;
                i5 = qVar.F;
                if (i5 != 0) {
                    ki.b.R(obj);
                    c0 c0Var = this.f7926f;
                    if (!Intrinsics.areEqual(c0Var.getValue(), b0.a) && !(c0Var.getValue() instanceof f)) {
                        throw new IllegalStateException("Check failed.");
                    }
                    bVar = new wr.b();
                    objectRef = new Ref.ObjectRef();
                    qVar.f7873d = this;
                    qVar.f7874e = bVar;
                    qVar.f7875i = objectRef;
                    qVar.f7876v = objectRef;
                    qVar.F = 1;
                    Object g6 = g(qVar);
                    if (g6 != aVar) {
                        zVar = this;
                        objectRef2 = objectRef;
                        t5 = g6;
                    }
                    return aVar;
                }
                if (i5 != 1) {
                    if (i5 != 2) {
                        if (i5 != 3) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        mutex2 = (Mutex) qVar.f7876v;
                        booleanRef2 = (Ref.BooleanRef) qVar.f7875i;
                        objectRef4 = (Ref.ObjectRef) qVar.f7874e;
                        zVar3 = qVar.f7873d;
                        ki.b.R(obj);
                        try {
                            booleanRef2.element = true;
                            Unit unit = Unit.a;
                            mutex2.b(null);
                            c0 c0Var2 = zVar3.f7926f;
                            T t10 = objectRef4.element;
                            b bVar2 = new b(t10 == 0 ? t10.hashCode() : 0, t10);
                            c0Var2.getClass();
                            c0Var2.i(null, bVar2);
                            return Unit.a;
                        } catch (Throwable th2) {
                            mutex2.b(null);
                            throw th2;
                        }
                    }
                    it = qVar.f7878x;
                    sVar = qVar.f7877w;
                    booleanRef = (Ref.BooleanRef) qVar.f7876v;
                    objectRef3 = (Ref.ObjectRef) qVar.f7875i;
                    mutex = (Mutex) qVar.f7874e;
                    zVar2 = qVar.f7873d;
                    ki.b.R(obj);
                    while (it.hasNext()) {
                        Function2 function2 = (Function2) it.next();
                        qVar.f7873d = zVar2;
                        qVar.f7874e = mutex;
                        qVar.f7875i = objectRef3;
                        qVar.f7876v = booleanRef;
                        qVar.f7877w = sVar;
                        qVar.f7878x = it;
                        qVar.F = 2;
                        if (function2.invoke(sVar, qVar) == aVar) {
                            break;
                        }
                    }
                    qVar2 = qVar;
                    booleanRef2 = booleanRef;
                    objectRef2 = objectRef3;
                    bVar = mutex;
                    zVar3 = zVar2;
                    zVar3.f7927g = null;
                    qVar2.f7873d = zVar3;
                    qVar2.f7874e = objectRef2;
                    qVar2.f7875i = booleanRef2;
                    qVar2.f7876v = bVar;
                    qVar2.f7877w = null;
                    qVar2.f7878x = null;
                    qVar2.F = 3;
                    if (bVar.a(qVar2) != aVar) {
                        objectRef4 = objectRef2;
                        mutex2 = bVar;
                        booleanRef2.element = true;
                        Unit unit2 = Unit.a;
                        mutex2.b(null);
                        c0 c0Var22 = zVar3.f7926f;
                        T t102 = objectRef4.element;
                        b bVar22 = new b(t102 == 0 ? t102.hashCode() : 0, t102);
                        c0Var22.getClass();
                        c0Var22.i(null, bVar22);
                        return Unit.a;
                    }
                    return aVar;
                }
                objectRef = (Ref.ObjectRef) qVar.f7876v;
                objectRef2 = (Ref.ObjectRef) qVar.f7875i;
                bVar = (Mutex) qVar.f7874e;
                zVar = qVar.f7873d;
                ki.b.R(obj);
                t5 = obj;
                objectRef.element = t5;
                Ref.BooleanRef booleanRef3 = new Ref.BooleanRef();
                s sVar2 = new s(bVar, booleanRef3, objectRef2, zVar);
                list = zVar.f7927g;
                if (list != null) {
                    booleanRef2 = booleanRef3;
                    qVar2 = qVar;
                    zVar3 = zVar;
                    zVar3.f7927g = null;
                    qVar2.f7873d = zVar3;
                    qVar2.f7874e = objectRef2;
                    qVar2.f7875i = booleanRef2;
                    qVar2.f7876v = bVar;
                    qVar2.f7877w = null;
                    qVar2.f7878x = null;
                    qVar2.F = 3;
                    if (bVar.a(qVar2) != aVar) {
                    }
                    return aVar;
                }
                zVar2 = zVar;
                objectRef3 = objectRef2;
                sVar = sVar2;
                it = list.iterator();
                mutex = bVar;
                booleanRef = booleanRef3;
                while (it.hasNext()) {
                }
                qVar2 = qVar;
                booleanRef2 = booleanRef;
                objectRef2 = objectRef3;
                bVar = mutex;
                zVar3 = zVar2;
                zVar3.f7927g = null;
                qVar2.f7873d = zVar3;
                qVar2.f7874e = objectRef2;
                qVar2.f7875i = booleanRef2;
                qVar2.f7876v = bVar;
                qVar2.f7877w = null;
                qVar2.f7878x = null;
                qVar2.F = 3;
                if (bVar.a(qVar2) != aVar) {
                }
                return aVar;
            }
        }
        qVar = new q(this, cVar);
        Object obj2 = qVar.f7879y;
        ko.a aVar2 = ko.a.f13464d;
        i5 = qVar.F;
        if (i5 != 0) {
        }
        objectRef.element = t5;
        Ref.BooleanRef booleanRef32 = new Ref.BooleanRef();
        s sVar22 = new s(bVar, booleanRef32, objectRef2, zVar);
        list = zVar.f7927g;
        if (list != null) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object d(lo.c cVar) {
        t tVar;
        int i5;
        z zVar;
        if (cVar instanceof t) {
            tVar = (t) cVar;
            int i6 = tVar.f7893v;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                tVar.f7893v = i6 - Integer.MIN_VALUE;
                Object obj = tVar.f7891e;
                ko.a aVar = ko.a.f13464d;
                i5 = tVar.f7893v;
                if (i5 != 0) {
                    ki.b.R(obj);
                    try {
                        tVar.f7890d = this;
                        tVar.f7893v = 1;
                        if (c(tVar) == aVar) {
                            return aVar;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                        zVar = this;
                        c0 c0Var = zVar.f7926f;
                        f fVar = new f(th);
                        c0Var.getClass();
                        c0Var.i(null, fVar);
                        throw th;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    zVar = tVar.f7890d;
                    try {
                        ki.b.R(obj);
                    } catch (Throwable th3) {
                        th = th3;
                        c0 c0Var2 = zVar.f7926f;
                        f fVar2 = new f(th);
                        c0Var2.getClass();
                        c0Var2.i(null, fVar2);
                        throw th;
                    }
                }
                return Unit.a;
            }
        }
        tVar = new t(this, cVar);
        Object obj2 = tVar.f7891e;
        ko.a aVar2 = ko.a.f13464d;
        i5 = tVar.f7893v;
        if (i5 != 0) {
        }
        return Unit.a;
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object e(lo.c cVar) {
        u uVar;
        int i5;
        z zVar;
        if (cVar instanceof u) {
            uVar = (u) cVar;
            int i6 = uVar.f7897v;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                uVar.f7897v = i6 - Integer.MIN_VALUE;
                Object obj = uVar.f7895e;
                ko.a aVar = ko.a.f13464d;
                i5 = uVar.f7897v;
                if (i5 != 0) {
                    ki.b.R(obj);
                    try {
                        uVar.f7894d = this;
                        uVar.f7897v = 1;
                        if (c(uVar) == aVar) {
                            return aVar;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                        zVar = this;
                        c0 c0Var = zVar.f7926f;
                        f fVar = new f(th);
                        c0Var.getClass();
                        c0Var.i(null, fVar);
                        return Unit.a;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    zVar = uVar.f7894d;
                    try {
                        ki.b.R(obj);
                    } catch (Throwable th3) {
                        th = th3;
                        c0 c0Var2 = zVar.f7926f;
                        f fVar2 = new f(th);
                        c0Var2.getClass();
                        c0Var2.i(null, fVar2);
                        return Unit.a;
                    }
                }
                return Unit.a;
            }
        }
        uVar = new u(this, cVar);
        Object obj2 = uVar.f7895e;
        ko.a aVar2 = ko.a.f13464d;
        i5 = uVar.f7897v;
        if (i5 != 0) {
        }
        return Unit.a;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0021  */
    /* JADX WARN: Type inference failed for: r0v12 */
    /* JADX WARN: Type inference failed for: r0v14, types: [e2.z] */
    /* JADX WARN: Type inference failed for: r0v17 */
    /* JADX WARN: Type inference failed for: r0v18 */
    /* JADX WARN: Type inference failed for: r0v2, types: [e2.v] */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v4, types: [e2.z] */
    /* JADX WARN: Type inference failed for: r0v7 */
    /* JADX WARN: Type inference failed for: r0v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object f(lo.c cVar) {
        ?? r02;
        int i5;
        FileInputStream fileInputStream;
        Throwable th2;
        try {
            if (cVar instanceof v) {
                v vVar = (v) cVar;
                int i6 = vVar.f7902w;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    vVar.f7902w = i6 - Integer.MIN_VALUE;
                    r02 = vVar;
                    Object obj = r02.f7900i;
                    ko.a aVar = ko.a.f13464d;
                    i5 = r02.f7902w;
                    if (i5 != 0) {
                        ki.b.R(obj);
                        try {
                            FileInputStream fileInputStream2 = new FileInputStream(b());
                            try {
                                h2.f fVar = h2.f.a;
                                r02.f7898d = this;
                                r02.f7899e = fileInputStream2;
                                r02.f7902w = 1;
                                h2.b a = fVar.a(fileInputStream2);
                                if (a == aVar) {
                                    return aVar;
                                }
                                fileInputStream = fileInputStream2;
                                obj = a;
                            } catch (Throwable th3) {
                                fileInputStream = fileInputStream2;
                                th2 = th3;
                                r02 = this;
                                throw th2;
                            }
                        } catch (FileNotFoundException e9) {
                            e = e9;
                            r02 = this;
                            if (r02.b().exists()) {
                                throw e;
                            }
                            return new h2.b(true);
                        }
                    } else {
                        if (i5 != 1) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        fileInputStream = r02.f7899e;
                        r02 = r02.f7898d;
                        try {
                            ki.b.R(obj);
                        } catch (Throwable th4) {
                            th2 = th4;
                            try {
                                throw th2;
                            } catch (Throwable th5) {
                                com.facebook.imagepipeline.nativecode.c.j(fileInputStream, th2);
                                throw th5;
                            }
                        }
                    }
                    com.facebook.imagepipeline.nativecode.c.j(fileInputStream, null);
                    return obj;
                }
            }
            if (i5 != 0) {
            }
            com.facebook.imagepipeline.nativecode.c.j(fileInputStream, null);
            return obj;
        } catch (FileNotFoundException e10) {
            e = e10;
        }
        r02 = new v(this, cVar);
        Object obj2 = r02.f7900i;
        ko.a aVar2 = ko.a.f13464d;
        i5 = r02.f7902w;
    }

    /* JADX WARN: Removed duplicated region for block: B:40:0x0066  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0022  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object g(lo.c cVar) {
        w wVar;
        int i5;
        z zVar;
        a aVar;
        if (cVar instanceof w) {
            wVar = (w) cVar;
            int i6 = wVar.f7907w;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                wVar.f7907w = i6 - Integer.MIN_VALUE;
                Object obj = wVar.f7905i;
                ko.a aVar2 = ko.a.f13464d;
                i5 = wVar.f7907w;
                if (i5 == 0) {
                    if (i5 == 1) {
                        zVar = (z) wVar.f7903d;
                        try {
                            ki.b.R(obj);
                            return obj;
                        } catch (a e9) {
                            e = e9;
                            j8.b bVar = zVar.f7922b;
                            wVar.f7903d = zVar;
                            wVar.f7904e = e;
                            wVar.f7907w = 2;
                            throw e;
                        }
                    }
                    if (i5 == 2) {
                        a aVar3 = (a) wVar.f7904e;
                        z zVar2 = (z) wVar.f7903d;
                        ki.b.R(obj);
                        try {
                            wVar.f7903d = aVar3;
                            wVar.f7904e = obj;
                            wVar.f7907w = 3;
                            if (zVar2.i(obj, wVar) != aVar2) {
                                return obj;
                            }
                        } catch (IOException e10) {
                            e = e10;
                            aVar = aVar3;
                        }
                    } else {
                        if (i5 != 3) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        Object obj2 = wVar.f7904e;
                        aVar = (a) wVar.f7903d;
                        try {
                            ki.b.R(obj);
                            return obj2;
                        } catch (IOException e11) {
                            e = e11;
                        }
                    }
                    fo.f.a(aVar, e);
                    throw aVar;
                }
                ki.b.R(obj);
                try {
                    wVar.f7903d = this;
                    wVar.f7907w = 1;
                    Object f2 = f(wVar);
                    if (f2 != aVar2) {
                        return f2;
                    }
                } catch (a e12) {
                    e = e12;
                    zVar = this;
                    j8.b bVar2 = zVar.f7922b;
                    wVar.f7903d = zVar;
                    wVar.f7904e = e;
                    wVar.f7907w = 2;
                    throw e;
                }
                return aVar2;
            }
        }
        wVar = new w(this, cVar);
        Object obj3 = wVar.f7905i;
        ko.a aVar22 = ko.a.f13464d;
        i5 = wVar.f7907w;
        if (i5 == 0) {
        }
        return aVar22;
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x00a6  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x007e  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0088  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00b4  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x0083  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0047  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0026  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object h(Function2 function2, CoroutineContext coroutineContext, lo.c cVar) {
        x xVar;
        int i5;
        b bVar;
        Object obj;
        z zVar;
        Object obj2;
        Object obj3;
        z zVar2;
        if (cVar instanceof x) {
            xVar = (x) cVar;
            int i6 = xVar.f7913x;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                xVar.f7913x = i6 - Integer.MIN_VALUE;
                Object obj4 = xVar.f7911v;
                ko.a aVar = ko.a.f13464d;
                i5 = xVar.f7913x;
                if (i5 != 0) {
                    ki.b.R(obj4);
                    b bVar2 = (b) this.f7926f.getValue();
                    Object obj5 = bVar2.a;
                    if ((obj5 != null ? obj5.hashCode() : 0) != bVar2.f7837b) {
                        throw new IllegalStateException("Data in DataStore was mutated but DataStore is only compatible with Immutable types.");
                    }
                    Object obj6 = bVar2.a;
                    f0 f0Var = new f0(function2, obj6, null);
                    xVar.f7908d = this;
                    xVar.f7909e = bVar2;
                    xVar.f7910i = obj6;
                    xVar.f7913x = 1;
                    Object A = nr.x.A(coroutineContext, f0Var, xVar);
                    if (A != aVar) {
                        bVar = bVar2;
                        obj4 = A;
                        obj = obj6;
                        zVar = this;
                    }
                    return aVar;
                }
                if (i5 != 1) {
                    if (i5 != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    obj3 = xVar.f7909e;
                    zVar2 = xVar.f7908d;
                    ki.b.R(obj4);
                    c0 c0Var = zVar2.f7926f;
                    b bVar3 = new b(obj3 != null ? obj3.hashCode() : 0, obj3);
                    c0Var.getClass();
                    c0Var.i(null, bVar3);
                    return obj3;
                }
                obj = xVar.f7910i;
                bVar = (b) xVar.f7909e;
                zVar = xVar.f7908d;
                ki.b.R(obj4);
                obj2 = bVar.a;
                if ((obj2 == null ? obj2.hashCode() : 0) == bVar.f7837b) {
                    throw new IllegalStateException("Data in DataStore was mutated but DataStore is only compatible with Immutable types.");
                }
                if (Intrinsics.areEqual(obj, obj4)) {
                    return obj;
                }
                xVar.f7908d = zVar;
                xVar.f7909e = obj4;
                xVar.f7910i = null;
                xVar.f7913x = 2;
                if (zVar.i(obj4, xVar) != aVar) {
                    obj3 = obj4;
                    zVar2 = zVar;
                    c0 c0Var2 = zVar2.f7926f;
                    b bVar32 = new b(obj3 != null ? obj3.hashCode() : 0, obj3);
                    c0Var2.getClass();
                    c0Var2.i(null, bVar32);
                    return obj3;
                }
                return aVar;
            }
        }
        xVar = new x(this, cVar);
        Object obj42 = xVar.f7911v;
        ko.a aVar2 = ko.a.f13464d;
        i5 = xVar.f7913x;
        if (i5 != 0) {
        }
        obj2 = bVar.a;
        if ((obj2 == null ? obj2.hashCode() : 0) == bVar.f7837b) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x00a1  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x00a4 A[Catch: IOException -> 0x00bb, TRY_ENTER, TryCatch #3 {IOException -> 0x00bb, blocks: (B:14:0x0094, B:19:0x00a4, B:20:0x00ba, B:27:0x00c1, B:28:0x00c4, B:44:0x006a, B:24:0x00bf), top: B:43:0x006a, inners: #0 }] */
    /* JADX WARN: Removed duplicated region for block: B:36:0x003c  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0023  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object i(Object obj, lo.c cVar) {
        y yVar;
        int i5;
        File file;
        FileOutputStream fileOutputStream;
        z zVar;
        FileOutputStream fileOutputStream2;
        if (cVar instanceof y) {
            yVar = (y) cVar;
            int i6 = yVar.f7920y;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                yVar.f7920y = i6 - Integer.MIN_VALUE;
                Object obj2 = yVar.f7918w;
                ko.a aVar = ko.a.f13464d;
                i5 = yVar.f7920y;
                if (i5 != 0) {
                    ki.b.R(obj2);
                    File b10 = b();
                    File parentFile = b10.getCanonicalFile().getParentFile();
                    if (parentFile != null) {
                        parentFile.mkdirs();
                        if (!parentFile.isDirectory()) {
                            throw new IOException(Intrinsics.stringPlus("Unable to create parent directories of ", b10));
                        }
                    }
                    file = new File(Intrinsics.stringPlus(b().getAbsolutePath(), this.f7924d));
                    try {
                        FileOutputStream fileOutputStream3 = new FileOutputStream(file);
                        try {
                            h2.f fVar = h2.f.a;
                            k kVar = new k(fileOutputStream3);
                            yVar.f7914d = this;
                            yVar.f7915e = file;
                            yVar.f7916i = fileOutputStream3;
                            yVar.f7917v = fileOutputStream3;
                            yVar.f7920y = 1;
                            if (fVar.b(obj, kVar) == aVar) {
                                return aVar;
                            }
                            zVar = this;
                            fileOutputStream2 = fileOutputStream3;
                            fileOutputStream = fileOutputStream2;
                        } catch (Throwable th2) {
                            th = th2;
                            fileOutputStream = fileOutputStream3;
                            throw th;
                        }
                    } catch (IOException e9) {
                        if (file.exists()) {
                            file.delete();
                        }
                        throw e9;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    fileOutputStream2 = yVar.f7917v;
                    fileOutputStream = yVar.f7916i;
                    file = yVar.f7915e;
                    zVar = yVar.f7914d;
                    try {
                        ki.b.R(obj2);
                    } catch (Throwable th3) {
                        th = th3;
                        try {
                            throw th;
                        } catch (Throwable th4) {
                            com.facebook.imagepipeline.nativecode.c.j(fileOutputStream, th);
                            throw th4;
                        }
                    }
                }
                fileOutputStream2.getFD().sync();
                Unit unit = Unit.a;
                com.facebook.imagepipeline.nativecode.c.j(fileOutputStream, null);
                if (!file.renameTo(zVar.b())) {
                    return Unit.a;
                }
                throw new IOException("Unable to rename " + file + ".This likely means that there are multiple instances of DataStore for this file. Ensure that you are only creating a single instance of datastore for this file.");
            }
        }
        yVar = new y(this, cVar);
        Object obj22 = yVar.f7918w;
        ko.a aVar2 = ko.a.f13464d;
        i5 = yVar.f7920y;
        if (i5 != 0) {
        }
        fileOutputStream2.getFD().sync();
        Unit unit2 = Unit.a;
        com.facebook.imagepipeline.nativecode.c.j(fileOutputStream, null);
        if (!file.renameTo(zVar.b())) {
        }
    }
}
