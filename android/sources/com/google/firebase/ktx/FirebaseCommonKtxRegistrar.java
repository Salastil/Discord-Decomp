package com.google.firebase.ktx;

import androidx.annotation.Keep;
import com.google.firebase.components.ComponentRegistrar;
import fo.d;
import hc.s0;
import java.util.List;
import java.util.concurrent.Executor;
import kotlin.Metadata;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineDispatcher;
import mi.a;
import mi.c;
import ni.b;
import ni.i;
import ni.q;
import org.jetbrains.annotations.NotNull;

@d
@Keep
@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0019\u0010\u0006\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00050\u0004H\u0016¢\u0006\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/google/firebase/ktx/FirebaseCommonKtxRegistrar;", "Lcom/google/firebase/components/ComponentRegistrar;", "<init>", "()V", "", "Lni/b;", "getComponents", "()Ljava/util/List;", "com.google.firebase-firebase-common"}, k = 1, mv = {1, 8, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nFirebase.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Firebase.kt\ncom/google/firebase/ktx/FirebaseCommonKtxRegistrar\n+ 2 Firebase.kt\ncom/google/firebase/ktx/FirebaseKt\n*L\n1#1,158:1\n152#2,6:159\n152#2,6:165\n152#2,6:171\n152#2,6:177\n*S KotlinDebug\n*F\n+ 1 Firebase.kt\ncom/google/firebase/ktx/FirebaseCommonKtxRegistrar\n*L\n143#1:159,6\n144#1:165,6\n145#1:171,6\n146#1:177,6\n*E\n"})
/* loaded from: classes3.dex */
public final class FirebaseCommonKtxRegistrar implements ComponentRegistrar {
    @Override // com.google.firebase.components.ComponentRegistrar
    @NotNull
    public List<b> getComponents() {
        s0 a = b.a(new q(a.class, CoroutineDispatcher.class));
        a.a(new i(new q(a.class, Executor.class), 1, 0));
        a.f9867f = ej.a.f8131e;
        b b10 = a.b();
        Intrinsics.checkNotNullExpressionValue(b10, "builder(Qualified.qualif…cher()\n    }\n    .build()");
        s0 a10 = b.a(new q(c.class, CoroutineDispatcher.class));
        a10.a(new i(new q(c.class, Executor.class), 1, 0));
        a10.f9867f = ej.a.f8132i;
        b b11 = a10.b();
        Intrinsics.checkNotNullExpressionValue(b11, "builder(Qualified.qualif…cher()\n    }\n    .build()");
        s0 a11 = b.a(new q(mi.b.class, CoroutineDispatcher.class));
        a11.a(new i(new q(mi.b.class, Executor.class), 1, 0));
        a11.f9867f = ej.a.f8133v;
        b b12 = a11.b();
        Intrinsics.checkNotNullExpressionValue(b12, "builder(Qualified.qualif…cher()\n    }\n    .build()");
        s0 a12 = b.a(new q(mi.d.class, CoroutineDispatcher.class));
        a12.a(new i(new q(mi.d.class, Executor.class), 1, 0));
        a12.f9867f = ej.a.f8134w;
        b b13 = a12.b();
        Intrinsics.checkNotNullExpressionValue(b13, "builder(Qualified.qualif…cher()\n    }\n    .build()");
        return c0.g(b10, b11, b12, b13);
    }
}
