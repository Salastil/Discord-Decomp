package com.google.firebase.messaging;

import android.os.StrictMode;
import com.google.firebase.concurrent.ExecutorsRegistrar;
import java.util.Collections;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;

/* loaded from: classes3.dex */
public final /* synthetic */ class j implements yi.a {
    public final /* synthetic */ int a;

    public /* synthetic */ j(int i5) {
        this.a = i5;
    }

    @Override // yi.a
    public final Object get() {
        switch (this.a) {
            case 0:
                ha.l lVar = FirebaseMessaging.k;
                return null;
            case 1:
                return Collections.EMPTY_SET;
            case 2:
                return null;
            case 3:
                return ExecutorsRegistrar.a();
            case 4:
                ni.m mVar = ExecutorsRegistrar.a;
                return new oi.e(Executors.newFixedThreadPool(Math.max(2, Runtime.getRuntime().availableProcessors()), new oi.a("Firebase Lite", 0, new StrictMode.ThreadPolicy.Builder().detectAll().penaltyLog().build())), (ScheduledExecutorService) ExecutorsRegistrar.f6186d.get());
            case 5:
                ni.m mVar2 = ExecutorsRegistrar.a;
                return new oi.e(Executors.newCachedThreadPool(new oi.a("Firebase Blocking", 11, null)), (ScheduledExecutorService) ExecutorsRegistrar.f6186d.get());
            default:
                ni.m mVar3 = ExecutorsRegistrar.a;
                return Executors.newSingleThreadScheduledExecutor(new oi.a("Firebase Scheduler", 0, null));
        }
    }
}
