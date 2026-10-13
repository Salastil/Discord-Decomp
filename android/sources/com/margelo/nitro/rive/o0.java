package com.margelo.nitro.rive;

import android.content.Context;
import android.util.Log;
import android.view.Choreographer;
import app.rive.runtime.kotlin.core.Rive;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* loaded from: classes3.dex */
public final class o0 extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6583d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ o0(int i5, Continuation continuation, int i6) {
        super(i5, continuation);
        this.f6583d = i6;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f6583d) {
            case 0:
                return new o0(2, continuation, 0);
            default:
                return new o0(2, continuation, 1);
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        CoroutineScope coroutineScope = (CoroutineScope) obj;
        Continuation continuation = (Continuation) obj2;
        switch (this.f6583d) {
        }
        return ((o0) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        switch (this.f6583d) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                ki.b.R(obj);
                synchronized (fm.g.a) {
                    Context context = fm.g.f8781d;
                    if (context == null) {
                        fm.g.f8780c = "Context not available. Ensure RivePackage is registered.";
                        Log.e("RiveInitializer", "Manual init failed: " + fm.g.f8780c);
                    } else if (!fm.g.f8779b) {
                        try {
                            Rive.init$default(Rive.INSTANCE, context, null, 2, null);
                            fm.g.f8779b = true;
                            fm.g.f8780c = null;
                        } catch (Throwable th2) {
                            fm.g.f8780c = fm.g.a(th2);
                            Log.e("RiveInitializer", "Manual init failed: " + fm.g.f8780c, th2);
                        }
                    }
                }
                return Unit.a;
            default:
                ko.a aVar2 = ko.a.f13464d;
                ki.b.R(obj);
                return Choreographer.getInstance();
        }
    }
}
