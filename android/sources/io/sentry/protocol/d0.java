package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.d6;
import io.sentry.f4;
import io.sentry.h6;
import io.sentry.i6;
import io.sentry.y1;
import io.sentry.y2;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class d0 extends f4 implements y1 {
    public String M;
    public Double N;
    public Double O;
    public final ArrayList P;
    public final HashMap Q;
    public f0 R;
    public ConcurrentHashMap S;

    public d0(ArrayList arrayList, HashMap hashMap, f0 f0Var) {
        Double valueOf = Double.valueOf(0.0d);
        ArrayList arrayList2 = new ArrayList();
        this.P = arrayList2;
        HashMap hashMap2 = new HashMap();
        this.Q = hashMap2;
        this.M = "";
        this.N = valueOf;
        this.O = null;
        arrayList2.addAll(arrayList);
        hashMap2.putAll(hashMap);
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            this.Q.putAll(((y) it.next()).I);
        }
        this.R = f0Var;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.M != null) {
            y2Var.C0("transaction").s(this.M);
        }
        y2Var.C0("start_timestamp").o0(iLogger, ki.b.m(this.N));
        if (this.O != null) {
            y2Var.C0("timestamp").o0(iLogger, ki.b.m(this.O));
        }
        ArrayList arrayList = this.P;
        if (!arrayList.isEmpty()) {
            y2Var.C0("spans").o0(iLogger, arrayList);
        }
        y2Var.C0("type").s("transaction");
        HashMap hashMap = this.Q;
        if (!hashMap.isEmpty()) {
            y2Var.C0("measurements").o0(iLogger, hashMap);
        }
        y2Var.C0("transaction_info").o0(iLogger, this.R);
        nf.e.z(this, y2Var, iLogger);
        ConcurrentHashMap concurrentHashMap = this.S;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.S, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }

    public d0(d6 d6Var) {
        super(d6Var.a);
        this.P = new ArrayList();
        this.Q = new HashMap();
        h6 h6Var = d6Var.f11510b;
        this.N = Double.valueOf(h6Var.a.d() / 1.0E9d);
        this.O = Double.valueOf(h6Var.a.c(h6Var.f11589b) / 1.0E9d);
        this.M = d6Var.f11513e;
        Iterator it = d6Var.f11511c.iterator();
        while (it.hasNext()) {
            h6 h6Var2 = (h6) it.next();
            if (Boolean.TRUE.equals(h6Var2.t())) {
                this.P.add(new y(h6Var2));
            }
        }
        c cVar = this.f11544e;
        cVar.l(d6Var.f11522p);
        i6 i6Var = h6Var.f11590c;
        ConcurrentHashMap concurrentHashMap = h6Var.j;
        i6 i6Var2 = new i6(i6Var.f11610d, i6Var.f11611e, i6Var.f11612i, i6Var.f11614w, i6Var.f11615x, i6Var.f11613v, i6Var.f11616y, i6Var.F);
        for (Map.Entry entry : i6Var.E.entrySet()) {
            c((String) entry.getKey(), (String) entry.getValue());
        }
        if (concurrentHashMap != null) {
            for (Map.Entry entry2 : concurrentHashMap.entrySet()) {
                String str = (String) entry2.getKey();
                Object value = entry2.getValue();
                if (str != null) {
                    if (value == null) {
                        i6Var2.G.remove(str);
                    } else {
                        i6Var2.G.put(str, value);
                    }
                }
            }
        }
        i6Var.K.h();
        cVar.w(i6Var2);
        this.R = new f0(d6Var.f11520n.apiName());
    }
}
