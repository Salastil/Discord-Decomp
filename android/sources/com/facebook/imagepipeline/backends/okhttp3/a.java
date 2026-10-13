package com.facebook.imagepipeline.backends.okhttp3;

import android.os.Looper;
import com.facebook.imagepipeline.producers.f;
import com.google.firebase.messaging.s;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Call;

/* loaded from: classes3.dex */
public final class a extends f {
    public final /* synthetic */ Call a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ OkHttpNetworkFetcher f4566b;

    public a(Call call, OkHttpNetworkFetcher okHttpNetworkFetcher) {
        this.a = call;
        this.f4566b = okHttpNetworkFetcher;
    }

    @Override // com.facebook.imagepipeline.producers.f
    public final void a() {
        Executor executor;
        boolean areEqual = Intrinsics.areEqual(Looper.myLooper(), Looper.getMainLooper());
        Call call = this.a;
        if (!areEqual) {
            call.cancel();
        } else {
            executor = this.f4566b.cancellationExecutor;
            executor.execute(new s(12, call));
        }
    }
}
