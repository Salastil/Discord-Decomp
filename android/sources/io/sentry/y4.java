package io.sentry;

import com.facebook.react.modules.dialog.AlertFragment;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes3.dex */
public final class y4 implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final List f12090d;

    /* renamed from: e, reason: collision with root package name */
    public HashMap f12091e;

    public y4(List list) {
        this.f12090d = list;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0(AlertFragment.ARG_ITEMS).o0(iLogger, this.f12090d);
        HashMap hashMap = this.f12091e;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f12091e.get(str));
            }
        }
        y2Var.O();
    }
}
