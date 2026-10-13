package com.swmansion.rnscreens;

import com.facebook.react.uimanager.PointerEvents;
import com.facebook.react.uimanager.ReactPointerEventsView;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m implements ReactPointerEventsView {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6769d;

    /* renamed from: e, reason: collision with root package name */
    public Object f6770e;

    @Override // com.facebook.react.uimanager.ReactPointerEventsView
    public final PointerEvents getPointerEvents() {
        switch (this.f6769d) {
            case 0:
                break;
            case 1:
                if (!((nm.b) this.f6770e).getBlockGestures$react_native_screens_release()) {
                    break;
                } else {
                    break;
                }
            case 2:
                m mVar = (m) this.f6770e;
                if (mVar == null || (r0 = mVar.getPointerEvents()) == null) {
                    break;
                }
                break;
            case 3:
                if (!((vm.a) this.f6770e).getBlockGestures$react_native_screens_release()) {
                    break;
                } else {
                    break;
                }
            default:
                m mVar2 = (m) this.f6770e;
                if (mVar2 == null || (r0 = mVar2.getPointerEvents()) == null) {
                    break;
                }
                break;
        }
        return PointerEvents.NONE;
    }

    public m() {
        this.f6769d = 0;
        this.f6770e = PointerEvents.BOX_NONE;
    }

    public m(nm.b dimmingView) {
        this.f6769d = 1;
        Intrinsics.checkNotNullParameter(dimmingView, "dimmingView");
        this.f6770e = dimmingView;
    }

    public m(vm.a dimmingView) {
        this.f6769d = 3;
        Intrinsics.checkNotNullParameter(dimmingView, "dimmingView");
        this.f6770e = dimmingView;
    }
}
