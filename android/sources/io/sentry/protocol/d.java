package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.v5;
import io.sentry.y1;
import io.sentry.y2;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes3.dex */
public final class d implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public s f11772d;

    /* renamed from: e, reason: collision with root package name */
    public List f11773e;

    /* renamed from: i, reason: collision with root package name */
    public HashMap f11774i;

    public static d a(d dVar, v5 v5Var) {
        ArrayList arrayList = new ArrayList();
        if (v5Var.getProguardUuid() != null) {
            DebugImage debugImage = new DebugImage();
            debugImage.setType(DebugImage.PROGUARD);
            debugImage.setUuid(v5Var.getProguardUuid());
            arrayList.add(debugImage);
        }
        for (String str : v5Var.getBundleIds()) {
            DebugImage debugImage2 = new DebugImage();
            debugImage2.setType(DebugImage.JVM);
            debugImage2.setDebugId(str);
            arrayList.add(debugImage2);
        }
        if (arrayList.isEmpty()) {
            return null;
        }
        if (dVar == null) {
            dVar = new d();
        }
        List list = dVar.f11773e;
        if (list == null) {
            dVar.f11773e = new ArrayList(arrayList);
            return dVar;
        }
        list.addAll(arrayList);
        return dVar;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11772d != null) {
            y2Var.C0("sdk_info").o0(iLogger, this.f11772d);
        }
        if (this.f11773e != null) {
            y2Var.C0("images").o0(iLogger, this.f11773e);
        }
        HashMap hashMap = this.f11774i;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11774i.get(str));
            }
        }
        y2Var.O();
    }
}
