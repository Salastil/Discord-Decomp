package rn;

import com.facebook.react.bridge.GuardedRunnable;
import com.facebook.react.bridge.JSExceptionHandler;
import com.swmansion.worklets.AndroidUIScheduler;

/* loaded from: classes3.dex */
public final class a extends GuardedRunnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ AndroidUIScheduler f17418d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(AndroidUIScheduler androidUIScheduler, JSExceptionHandler jSExceptionHandler) {
        super(jSExceptionHandler);
        this.f17418d = androidUIScheduler;
    }

    @Override // com.facebook.react.bridge.GuardedRunnable
    public final void runGuarded() {
        this.f17418d.f6815c.run();
    }
}
