package com.margelo.nitro.core;

import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import nr.x;

/* loaded from: classes3.dex */
public final class f {
    public static Promise a(f fVar, Function1 run) {
        CoroutineScope scope;
        scope = Promise.defaultScope;
        fVar.getClass();
        Intrinsics.checkNotNullParameter(scope, "scope");
        Intrinsics.checkNotNullParameter(run, "run");
        Promise promise = new Promise();
        x.t(scope, null, new b4.d(run, promise, (Continuation) null), 3);
        return promise;
    }
}
