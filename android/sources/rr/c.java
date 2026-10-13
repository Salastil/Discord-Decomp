package rr;

import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;
import kotlinx.coroutines.flow.Flow;

/* loaded from: classes3.dex */
public abstract class c {
    public static final Continuation[] a = new Continuation[0];

    /* renamed from: b, reason: collision with root package name */
    public static final a5.h f17577b = new a5.h("NULL");

    /* renamed from: c, reason: collision with root package name */
    public static final a5.h f17578c = new a5.h("UNINITIALIZED");

    /* renamed from: d, reason: collision with root package name */
    public static final a5.h f17579d = new a5.h("DONE");

    public static /* synthetic */ Flow a(s sVar, CoroutineContext coroutineContext, int i5, pr.a aVar, int i6) {
        if ((i6 & 1) != 0) {
            coroutineContext = kotlin.coroutines.g.f13538d;
        }
        if ((i6 & 2) != 0) {
            i5 = -3;
        }
        if ((i6 & 4) != 0) {
            aVar = pr.a.f16467d;
        }
        return sVar.b(coroutineContext, i5, aVar);
    }

    public static final Object b(CoroutineContext coroutineContext, Object obj, Object obj2, Function2 function2, Continuation frame) {
        Object c6 = sr.y.c(coroutineContext, obj2);
        try {
            z zVar = new z(frame, coroutineContext);
            Object c8 = function2 == null ? ko.f.c(function2, obj, zVar) : ((Function2) TypeIntrinsics.beforeCheckcastToFunctionOfArity(function2, 2)).invoke(obj, zVar);
            sr.y.a(coroutineContext, c6);
            if (c8 == ko.a.f13464d) {
                Intrinsics.checkNotNullParameter(frame, "frame");
            }
            return c8;
        } catch (Throwable th2) {
            sr.y.a(coroutineContext, c6);
            throw th2;
        }
    }
}
