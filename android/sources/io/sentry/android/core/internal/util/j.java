package io.sentry.android.core.internal.util;

import android.view.PixelCopy;
import android.view.View;
import io.sentry.android.replay.screenshot.PixelCopyStrategy;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final /* synthetic */ class j implements PixelCopy.OnPixelCopyFinishedListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f11238b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f11239c;

    public /* synthetic */ j(int i5, Object obj, Object obj2) {
        this.a = i5;
        this.f11238b = obj;
        this.f11239c = obj2;
    }

    @Override // android.view.PixelCopy.OnPixelCopyFinishedListener
    public final void onPixelCopyFinished(int i5) {
        switch (this.a) {
            case 0:
                AtomicBoolean atomicBoolean = (AtomicBoolean) this.f11238b;
                CountDownLatch countDownLatch = (CountDownLatch) this.f11239c;
                atomicBoolean.set(i5 == 0);
                countDownLatch.countDown();
                break;
            default:
                PixelCopyStrategy.capture$lambda$2((PixelCopyStrategy) this.f11238b, (View) this.f11239c, i5);
                break;
        }
    }
}
