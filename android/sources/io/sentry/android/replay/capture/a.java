package io.sentry.android.replay.capture;

import io.sentry.android.replay.ScreenshotRecorderConfig;
import io.sentry.protocol.v;
import java.util.Date;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11379d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ long f11380e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Date f11381i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ v f11382v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ ScreenshotRecorderConfig f11383w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Function1 f11384x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ BaseCaptureStrategy f11385y;

    public /* synthetic */ a(BaseCaptureStrategy baseCaptureStrategy, long j, Date date, v vVar, ScreenshotRecorderConfig screenshotRecorderConfig, Function1 function1, int i5) {
        this.f11379d = i5;
        this.f11385y = baseCaptureStrategy;
        this.f11380e = j;
        this.f11381i = date;
        this.f11382v = vVar;
        this.f11383w = screenshotRecorderConfig;
        this.f11384x = function1;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f11379d) {
            case 0:
                BufferCaptureStrategy.createCurrentSegment$lambda$5((BufferCaptureStrategy) this.f11385y, this.f11380e, this.f11381i, this.f11382v, this.f11383w, this.f11384x);
                break;
            default:
                SessionCaptureStrategy.createCurrentSegment$lambda$4((SessionCaptureStrategy) this.f11385y, this.f11380e, this.f11381i, this.f11382v, this.f11383w, this.f11384x);
                break;
        }
    }
}
