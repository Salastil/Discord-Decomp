package com.facebook.react.uimanager.events;

import com.facebook.react.uimanager.events.FabricEventDispatcher;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5053d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f5054e;

    public /* synthetic */ a(int i5, Object obj) {
        this.f5053d = i5;
        this.f5054e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f5053d) {
            case 0:
                ((FabricEventDispatcher.ScheduleDispatchFrameCallback) this.f5054e).maybeDispatchBatchedEvents();
                break;
            default:
                ((FabricEventDispatcher) this.f5054e).cancelDispatchOfBatchedEvents();
                break;
        }
    }
}
