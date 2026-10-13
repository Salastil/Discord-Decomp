package io.sentry.protocol.profiling;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class a implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public List f11860d = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public List f11861e = new ArrayList();

    /* renamed from: i, reason: collision with root package name */
    public List f11862i = new ArrayList();

    /* renamed from: v, reason: collision with root package name */
    public Map f11863v = new HashMap();

    /* renamed from: w, reason: collision with root package name */
    public ConcurrentHashMap f11864w;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("samples").o0(iLogger, this.f11860d);
        y2Var.C0("stacks").o0(iLogger, this.f11861e);
        y2Var.C0("frames").o0(iLogger, this.f11862i);
        y2Var.C0("thread_metadata").o0(iLogger, this.f11863v);
        ConcurrentHashMap concurrentHashMap = this.f11864w;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11864w.get(str));
            }
        }
        y2Var.O();
    }
}
