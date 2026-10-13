package io.sentry.android.replay;

import io.sentry.IScope;
import io.sentry.android.replay.capture.CaptureStrategy;
import io.sentry.r3;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements r3 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11377d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f11378e;

    public /* synthetic */ a(Ref.ObjectRef objectRef, int i5) {
        this.f11377d = i5;
        this.f11378e = objectRef;
    }

    @Override // io.sentry.r3
    public final void h(IScope iScope) {
        switch (this.f11377d) {
            case 0:
                ReplayIntegration.onScreenshotRecorded$lambda$4(this.f11378e, iScope);
                break;
            default:
                CaptureStrategy.Companion.createSegment$lambda$1(this.f11378e, iScope);
                break;
        }
    }
}
