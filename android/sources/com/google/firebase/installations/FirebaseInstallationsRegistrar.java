package com.google.firebase.installations;

import androidx.annotation.Keep;
import com.google.firebase.components.ComponentRegistrar;
import hc.s0;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import ki.g;
import mi.a;
import mi.b;
import ni.c;
import ni.i;
import ni.q;
import oi.h;
import wi.e;
import zi.d;

@Keep
/* loaded from: classes3.dex */
public class FirebaseInstallationsRegistrar implements ComponentRegistrar {
    private static final String LIBRARY_NAME = "fire-installations";

    /* JADX INFO: Access modifiers changed from: private */
    public static d lambda$getComponents$0(c cVar) {
        return new zi.c((g) cVar.b(g.class), cVar.e(e.class), (ExecutorService) cVar.c(new q(a.class, ExecutorService.class)), new h((Executor) cVar.c(new q(b.class, Executor.class))));
    }

    @Override // com.google.firebase.components.ComponentRegistrar
    public List<ni.b> getComponents() {
        s0 s0Var = new s0(d.class, new Class[0]);
        s0Var.a = LIBRARY_NAME;
        s0Var.a(i.a(g.class));
        s0Var.a(new i(0, 1, e.class));
        s0Var.a(new i(new q(a.class, ExecutorService.class), 1, 0));
        s0Var.a(new i(new q(b.class, Executor.class), 1, 0));
        s0Var.f9867f = new u3.e();
        ni.b b10 = s0Var.b();
        wi.d dVar = new wi.d(0);
        HashSet hashSet = new HashSet();
        HashSet hashSet2 = new HashSet();
        HashSet hashSet3 = new HashSet();
        hashSet.add(q.a(wi.d.class));
        return Arrays.asList(b10, new ni.b(null, new HashSet(hashSet), new HashSet(hashSet2), 0, 1, new ni.a(0, dVar), hashSet3), zk.a.f(LIBRARY_NAME, "17.2.0"));
    }
}
